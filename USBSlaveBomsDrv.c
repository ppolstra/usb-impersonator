/*
** USBSlaveBomsDrv.c
**
** Based on USBSlaveHIDKbd example by FTDI
**
** Modifications by Philip A. Polstra, Sr.
**
** Part of the USB Mass Storage Device impersonator as presented at DEFCON 20
** Based on USB Write blocker presented at Blackhat Europe 2012
**
**
*/
#include "vos.h"
#include "devman.h"
#include "memmgmt.h"
#include "ioctl.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#include "USB.h"
#include "USBHID.h"
#include "USBSlave.h"
#include "USBHost.h"

#include "USBSlaveBomsDrv.h"
#include "USBHostBomsDrv.h"
#include "Timers.h"

// function prototypes
unsigned char standard_request(usbSlaveBoms_context *ctx);
unsigned char class_request(usbSlaveBoms_context *ctx);
void set_control_ep_halt(usbSlaveBoms_context *ctx);

// vidPid is in the file drives.h
// see the comments in the file for the source
// this is stored in ROM to avoid sucking up RAM which
// is precious when you only have 16k versus a whopping
// 256k of flash
#include "drives.h"

int currentVidPidIndex = 0; // index to the current VID/PID in use
extern VOS_HANDLE hTimer; // this is the timer that triggers if device doesn't connect
extern VOS_HANDLE hGPIO_PORT_B; // port B for LCD display
extern vos_mutex_t vidPidMutex; // mutex for current vid/pid
extern unsigned char writeProtect; // boolean write protect value
extern unsigned char autoMode;  // used to determine if the VID/PIDs are manually set
extern vos_semaphore_t setupDoneSemaphore; //use to delay enum till setup complete

unsigned char usbSlaveBoms_ioctl(common_ioctl_cb_t *cb, usbSlaveBoms_context *ctx);
extern void write_lcd_line1(VOS_HANDLE hLcd, char* str);
extern void write_lcd_line2(VOS_HANDLE hLcd, char* str);
void update_lcd_vidpid();

// thread states
#define UNATTACHED 0
#define ATTACHED   1

// Every USB device has an 18 byte descriptor
// This descriptor is immediately retrieved by the host/hub in order
// to determine how to talk to the device
// Note: All USB values are little-endian (LSB first)
unsigned char device_descriptor[18] =
{
    18, //length in bytes
	1, // descriptor type 1=device
	0x0, 2, // USB version BCD USB version
	0, // device class 0=actual device class in interface descriptor
	0, // device subclass 0=actual device class in interface descriptor
	0, // device protocol 0=actual device class in interface descriptor
	64, // max packet size is 64 bytes for full speed endpoints
	0x4b, 0x15, // vendor id  // currently spoof PNY drive
	0x40, 0, // product id
	0, 0x01, // device release number in BCD
	1, // string descriptor index for manufacturer
	2, // string descriptor index for product
	3, // string descriptor index for serial number
	1 // number of possible configurations
};

// The configuration header is actually a composite of
// configuration, interface, and endpoint descriptors
// The host will typically ask for the first part of the
// descriptor (first 9 bytes) which contains the total descriptor length.
// The host will then make a second request for the entire descriptor
unsigned char config_descriptor[32] =
{
// Configuration Header
    9, // length
	2, // descriptor type 2 = configuration
	32, 0, // bytes in this and all subordinate descriptors
	1, // number of interfaces
	1, // configuration value
	0, // index of string descriptor for configurations
	0x80, // self/bus power and remote wakeup
	50, // max power in milliamps /2 asking for too much can cause enum to fail
// Interface
    9, // length
	4, // descriptor type 4 = interface
	0, // interface number
	0, // alternate setting - 00 is default
	2, // number of endpoints other than control (1 bulk in, 1 bulk out)
	8, // class type 8 for mass storage
	6, // subclass 6 means SCSI transport
	0x50, // interface protocol
	0, // index of string descriptor for the interface
// Endpoint, EP1_In
    7, // length
	5, // endpoint descriptor
	0x81, // endpoint address bit7-1 = in
	2, // attributes 2=bulk
	0x40, 0x00, // max packet size 64 bytes
	1, // polling interval, ignored for bulk endpoints
// Endpoint, EP2_Out
    7, // length
	5, // endpoint descriptor
	0x02, // endpoint address bit7-1 = in
	2, // attributes 2=bulk
	0x40, 0x00, // max packet size
	1 // polling interval, ignored for bulk endpoints
};


// language descriptor
// Requests for string descriptor 0 return a code for the default
// language.  Devices could support multiple languages.  In practice,
// everyone seems to support US English only, even if they are from
// Glasgouw, UK.
unsigned char str0_descriptor[4] =
{	0x04, // length
	0x03, // type 3=string
	0x09,
	0x04 // US English
};

// According to our configuration descriptor, string descriptor 2
// is a product ID.  This Product descriptor was borrowed from an
// actual flash drive.  Alternatively, we could query the actual
// information from the flash drive, but we fake it to make things
// a bit simplier.  These descriptors all use UNICODE
unsigned char str2_descriptor[22] =
{	22, // length
	3, // string descriptor
	0x55, 0,	//USB 2.0 FD
	0x53, 0,
	0x42, 0,
	0x20, 0,
	0x32, 0,
	0x2e, 0,
	0x30, 0,
	0x20, 0,
	0x46, 0,
	0x44, 0
};

// According to our configuration descriptor, string descriptor 1
// is the manufacturer.  In this case we have borrowed PNY.
unsigned char str1_descriptor[8] =
{	8, // length
	3, // string descriptor
	0x50, 0, // PNY
	0x4e, 0,
	0x59, 0
};

// Every mass storage device is required to have a serial number
// the last 12 digits must be unique.  There is no other specification
// on how these are assigned.  Note that Windows will store this and
// lots of other information in the registry.  USBDevView is a nice
// free utility for viewing this information.
// More information on USB forensics can be found in my 44Con video
// which is available on SecurityTube or youtube.
unsigned char str3_descriptor[30] =
{	30, // length
	3, // string descriptor
	0x55, 0, // UTYM0832030481
	0x54, 0,
	0x59, 0,
	0x4d, 0,
	0x30, 0,
	0x38, 0,
	0x33, 0,
	0x32, 0,
	0x30, 0,
	0x33, 0,
	0x30, 0,
	0x34, 0,
	0x38, 0,
	0x31, 0
};

// global variables are evil, but sometimes when
// dealing with memory-constrained microcontrollers
// they are somewhat unavoidable
usbSlaveBoms_context *slaveBomsCtx=NULL;
extern usbhostBoms_context_t *hostBomsCtx;

// These are the only 2 Class requests sent on the control endpoint
// BOMS devices send requests in the CBW on the bulk out endpoint
#define GET_MAX_LUN 0xfe
#define BOMS_RESET 0xff


void update_lcd_vidpid()
{
	char str1[17]="Current VID/PID ", str2[17]="";

	sprintf(str2, "       %x/%x", vidPid[currentVidPidIndex], vidPid[currentVidPidIndex+1]);
	write_lcd_line1(hGPIO_PORT_B, str1);
	write_lcd_line2(hGPIO_PORT_B, str2);
}

// The following functions are for stalling and clearing bulk endpoints
// There are some conditions which require us to stall these endpoints.
// For example, if we return less data than expected to the PC we
// must stall the endpoint so it doesn't hang forever waiting for the rest
// of the data.
void usbslaveboms_stall_bulk_in(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb; // this is a structure used by underlying VOS driver

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_STALL;
	iocb.ep = 0x81; // bulk in endpoint
	vos_dev_ioctl(ctx->handle, &iocb);
}

void usbslaveboms_stall_bulk_out(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb; // this is a structure used by underlying VOS driver

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_STALL;
	iocb.ep = 0x02; // bulk out endpoint
	vos_dev_ioctl(ctx->handle, &iocb);
}

void usbslaveboms_clear_bulk_in(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb; // this is a structure used by underlying VOS driver

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_CLEAR;
	iocb.ep = 0x81; // bulk in endpoint
	vos_dev_ioctl(ctx->handle, &iocb);
}

void usbslaveboms_clear_bulk_out(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb; // this is a structure used by underlying VOS driver

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_CLEAR;
	iocb.ep = 0x02; // bulk out endpoint
	vos_dev_ioctl(ctx->handle, &iocb);
}


// This function MUST BE CALLED BEFORE THE SCHEDULER IS STARTED
// It initializes (initialises for you Brits reading this) variables
// in the context structure, registers our driver with the
// VOS device manager, and creates the thread for handling
// requests on the control endpoint.
unsigned char usbslaveboms_init(unsigned char vos_dev_num)
{
	vos_driver_t *usbSlaveBoms_cb;

	slaveBomsCtx = vos_malloc(sizeof(usbSlaveBoms_context));

	if (slaveBomsCtx == NULL)
		return USBSLAVEBOMS_ERROR;  //somehow ran out of RAM

	usbSlaveBoms_cb = vos_malloc(sizeof(vos_driver_t));

	if (usbSlaveBoms_cb == NULL)
	{
		vos_free(slaveBomsCtx);
		return USBSLAVEBOMS_ERROR;
	}

	// Set up function pointers for our driver
	usbSlaveBoms_cb->flags = 0;
	usbSlaveBoms_cb->read = usbSlaveBoms_read;
	usbSlaveBoms_cb->write = usbSlaveBoms_write;
	usbSlaveBoms_cb->ioctl = usbSlaveBoms_ioctl;
	usbSlaveBoms_cb->interrupt = (PF_INT) NULL;
	usbSlaveBoms_cb->open = (PF_OPEN) NULL;
	usbSlaveBoms_cb->close = (PF_CLOSE) NULL;

	// OK - register with device manager
	vos_dev_init(vos_dev_num, usbSlaveBoms_cb, slaveBomsCtx);

	// defaults to not connected and no flash drive yet
	slaveBomsCtx->attached = 0;
	slaveBomsCtx->flashConnected = 0;

	// create the thread that handles standard control requests
	slaveBomsCtx->tcbSetup = vos_create_thread_ex(31, SIZEOF_BOMS_SETUP_MEMORY, usbslaveboms_setup, "BOMSSetup", 2, slaveBomsCtx);

	// initialize the sempahore to 0 so that anyone waiting for
	// the device to enum will block
	vos_init_semaphore(&slaveBomsCtx->enumed, 0);

	if (slaveBomsCtx->tcbSetup)
		return USBSLAVEBOMS_OK;

	return USBSLAVEBOMS_ERROR;
}

// This function is run inside the thread created in init
// It will respond to standard USB requests
// some of the requests are forwarded to the flash drive when appropriate
void usbslaveboms_setup(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb; // this is a structure used by underlying VOS driver
	usb_deviceRequest_t *devReq; // this struct is defined in usb.h and is used to store the 9 byte setup request
	unsigned char bmRequestType; // The request type is defined by USB standard
	unsigned char state = UNATTACHED;  // assume unattached at the start

	// This will wait till the flash drive is enumed so we don't
	// start responding to commands right away
	vos_wait_semaphore(&ctx->enumed);
	vos_signal_semaphore(&ctx->enumed);

	vos_wait_semaphore(&setupDoneSemaphore); // wait for setup to complete
	vos_signal_semaphore(&setupDoneSemaphore); // reset semaphore for next guy

	while (1)
	{
		switch (state)
		{
		case UNATTACHED:

			if (!ctx->attached)
				vos_delay_msecs(100); // this delay is to avoid a tight loop
			else
			{
				state = ATTACHED;
			}

			break;

		case ATTACHED:

			if (!ctx->attached) // check to see if we somehow became unattached
			{
				state = UNATTACHED;
				break;
			}

			// we now make a blocking call requesting the 9 byte setup
			// packet on the control endpoint
			iocb.ioctl_code = VOS_IOCTL_USBSLAVE_WAIT_SETUP_RCVD;
			iocb.request.setup_or_bulk_transfer.buffer = ctx->setup_buffer;
			iocb.request.setup_or_bulk_transfer.size = 9;
			vos_dev_ioctl(ctx->handle, &iocb);

			// decode the raw data by pointing to our structure
			devReq = (usb_deviceRequest_t *) ctx->setup_buffer;
			// valid types here are standard, class, and vendor
			// BOMS devices do not have vendor specific calls
			// even if they did, we wouldn't support them.
			bmRequestType = devReq->bmRequestType & (USB_BMREQUESTTYPE_STANDARD | USB_BMREQUESTTYPE_CLASS);

			// we only need to handle standard and class requests for BOMS
			if (bmRequestType == USB_BMREQUESTTYPE_STANDARD)
			{
				standard_request(ctx); // standard request that all USB devices support
			}
			else if (bmRequestType == USB_BMREQUESTTYPE_CLASS)
			{
				class_request(ctx); // the request is specific to this device class (only 2 in our case)
			}

			break;

		default:
			asm {HALT}; // if we somehow got here the fecal matter has hit the turbine
			break;
		}
	}

	return;
}

// this function just marks our device as detached
void usbSlaveBoms_detach(usbSlaveBoms_context *ctx)
{
	ctx->attached = 0;

	return;
}

// this function will present our device to the PC and cause it
// to be enumed.
unsigned char usbSlaveBoms_attach(VOS_HANDLE handle, usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;
	unsigned char status = USBSLAVEBOMS_OK;

	// save usb slave handle
	ctx->handle = handle;

	if (!ctx->attached)
	{
		// issue connect IOCTL call here to present ourselves to the host
		// MUST be called before configuring endpoints
		// Note: If you used older versions of the VNC2 toolchain this function
		// was added and the need to make this call is buried in the release
		// notes.  Upgraders of old code be warned!
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_CONNECT;
		iocb.set = (void *) 0;
		vos_dev_ioctl(ctx->handle,&iocb);

		// get endpoint handles and set max packet sizes
		// these should match the descriptor values!
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_GET_CONTROL_ENDPOINT_HANDLE;
		iocb.ep = USBSLAVE_CONTROL_IN;
		iocb.get = &ctx->in_ep0;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SET_ENDPOINT_MAX_PACKET_SIZE;
		iocb.handle = ctx->in_ep0;
		iocb.request.ep_max_packet_size = USBSLAVE_MAX_PACKET_SIZE_64;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_GET_CONTROL_ENDPOINT_HANDLE;
		iocb.ep = USBSLAVE_CONTROL_OUT;
		iocb.get = &ctx->out_ep0;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SET_ENDPOINT_MAX_PACKET_SIZE;
		iocb.handle = ctx->out_ep0;
		iocb.request.ep_max_packet_size = USBSLAVE_MAX_PACKET_SIZE_64;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_GET_BULK_IN_ENDPOINT_HANDLE;
		iocb.ep = USBSLAVEBOMS_IN;
		iocb.get = &ctx->in_ep;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SET_ENDPOINT_MAX_PACKET_SIZE;
		iocb.handle = ctx->in_ep;
		iocb.request.ep_max_packet_size = USBSLAVE_MAX_PACKET_SIZE_64;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_GET_BULK_OUT_ENDPOINT_HANDLE;
		iocb.ep = USBSLAVEBOMS_OUT;
		iocb.get = &ctx->out_ep;
		vos_dev_ioctl(ctx->handle, &iocb);

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SET_ENDPOINT_MAX_PACKET_SIZE;
		iocb.handle = ctx->out_ep;
		iocb.request.ep_max_packet_size = USBSLAVE_MAX_PACKET_SIZE_64;
		vos_dev_ioctl(ctx->handle, &iocb);

		ctx->attached = 1; // mark our device as attached and configured

	}

	return status;
}

// write function
// This function will send up to the specified number of bytes to
// the bulk in endpoint
unsigned char usbSlaveBoms_write(
	char *xfer,
	unsigned short num_to_write,
	unsigned short *num_written,
	usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	if(ctx->attached)
	{
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
		iocb.handle = ctx->in_ep;
		iocb.request.setup_or_bulk_transfer.buffer = xfer;
		iocb.request.setup_or_bulk_transfer.size = num_to_write;
		vos_dev_ioctl(ctx->handle, &iocb);
		if (num_written) // callers who don't care might pass NULL here let's not crash!
			*num_written = iocb.request.setup_or_bulk_transfer.bytes_transferred;
	} else {
		return USBSLAVEBOMS_ERROR;
	}

	return USBSLAVEBOMS_OK;
}

// read function
// This function reads up to num_to_read bytes from the bulk out endpoint.
unsigned char usbSlaveBoms_read(
	char *xfer,
	unsigned short num_to_read,
	unsigned short *num_read,
	usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	if (ctx->attached)
	{
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
		iocb.handle = ctx->out_ep;
		iocb.request.setup_or_bulk_transfer.buffer = xfer;
		iocb.request.setup_or_bulk_transfer.size = num_to_read;
		vos_dev_ioctl(ctx->handle, &iocb);
		if (num_read) // allow caller to pass NULL if they don't care how many bytes
			*num_read = iocb.request.setup_or_bulk_transfer.bytes_transferred;
	} else {
		return USBSLAVEBOMS_ERROR;
	}

	return USBSLAVEBOMS_OK;
}

// write function
// This function will send up to the specified number of bytes to
// the bulk in endpoint then it will stall (short write)
unsigned char usbSlaveBoms_short_write(
	char *xfer,
	unsigned short num_to_write,
	unsigned short *num_written,
	usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	if(ctx->attached)
	{
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
		iocb.handle = ctx->in_ep;
		iocb.request.setup_or_bulk_transfer.buffer = xfer;
		iocb.request.setup_or_bulk_transfer.size = num_to_write;
		vos_dev_ioctl(ctx->handle, &iocb);
		if (num_written) // callers who don't care might pass NULL here let's not crash!
			*num_written = iocb.request.setup_or_bulk_transfer.bytes_transferred;
		usbslaveboms_stall_bulk_in(ctx);
	} else {
		return USBSLAVEBOMS_ERROR;
	}

	return USBSLAVEBOMS_OK;
}

// read function
// This function reads up to num_to_read bytes from the bulk out endpoint.
// This function will stall the endpoint when done
unsigned char usbSlaveBoms_short_read(
	char *xfer,
	unsigned short num_to_read,
	unsigned short *num_read,
	usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	if (ctx->attached)
	{
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
		iocb.handle = ctx->out_ep;
		iocb.request.setup_or_bulk_transfer.buffer = xfer;
		iocb.request.setup_or_bulk_transfer.size = num_to_read;
		vos_dev_ioctl(ctx->handle, &iocb);
		if (num_read) // allow caller to pass NULL if they don't care how many bytes
			*num_read = iocb.request.setup_or_bulk_transfer.bytes_transferred;
		usbslaveboms_stall_bulk_out(ctx);
	} else {
		return USBSLAVEBOMS_ERROR;
	}

	return USBSLAVEBOMS_OK;
}
// This function reads the 31 byte CBW from the bulk out endpoint
// The value is returned directly into the boms_cbw_t structure
unsigned char usbSlaveBoms_readCbw(
	boms_cbw_t *cbw,
	usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	if (ctx->attached)
	{
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
		iocb.handle = ctx->out_ep;
		iocb.request.setup_or_bulk_transfer.buffer = (unsigned char*)cbw;
		iocb.request.setup_or_bulk_transfer.size = 31; //CBW is 31 bytes
		vos_dev_ioctl(ctx->handle, &iocb);

	} else {
		return USBSLAVEBOMS_ERROR;
	}

	return USBSLAVEBOMS_OK;

}

// USB Slave IOCTL function
unsigned char usbSlaveBoms_ioctl(common_ioctl_cb_t *cb, usbSlaveBoms_context *ctx)
{
	unsigned char status = USBSLAVEBOMS_INVALID_PARAMETER;

	switch (cb->ioctl_code)
	{
	case VOS_IOCTL_USBSLAVEBOMS_ATTACH:
		status = usbSlaveBoms_attach((VOS_HANDLE) cb->set.data, ctx);
		break;

	case VOS_IOCTL_USBSLAVEBOMS_DETACH:
		usbSlaveBoms_detach(ctx);
		status = (unsigned char)USBSLAVEBOMS_OK;
		break;

	default:
		break;
	}

	return status;
}

// All commands on the control endpoint must be acknowledged.
// This is done by sending a Zero Length Data Packet ZLDP
// on the control in endpoint.
void ack_request(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->in_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = (void *) 0;
	iocb.request.setup_or_bulk_transfer.size = 0;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// When initially attached to a host devices have no address and are
// assigned an adddress after enumeration.  Then the device is reset
// and fully enumerated.
void set_address_request(usbSlaveBoms_context *ctx, unsigned char addr)
{
	usbslave_ioctl_cb_t iocb;

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SET_ADDRESS;
	iocb.set = (void *) addr;
	vos_dev_ioctl(ctx->handle, &iocb);

	ack_request(ctx);
}

// Most devices support only one configuration.  However, every
// device must respond to this call asking them to select a
// configuration even if it is the default.
void set_configuration_request(usbSlaveBoms_context *ctx, unsigned char config)
{
	usbslave_ioctl_cb_t iocb;

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SET_CONFIGURATION;
	iocb.set = (void *) config;
	vos_dev_ioctl(ctx->handle, &iocb);

	ack_request(ctx);
}

// handle requests for a descriptor
void get_descriptor_request(usbSlaveBoms_context *ctx)
{
	unsigned char *buffer;  // buffer for pass thru to drive
	usbhost_ioctl_cb_t hc_ioctl;
	usbslave_ioctl_cb_t iocb;
	usb_deviceRequest_t *devReq;
	unsigned char hValue; // high byte of the descriptor requested
	unsigned char lValue; // low byte of the descriptor requested
	unsigned short wLength;
	unsigned short siz;
	uint32 ul_siz;
	unsigned char *src;
	unsigned char cond;
	tmr_ioctl_cb_t tmr_iocb;

	devReq = (usb_deviceRequest_t *) ctx->setup_buffer;

	hValue = devReq->wValue >> 8; // shift away the low byte
	lValue = devReq->wValue & 0xff; // and away the high byte

	wLength = devReq->wLength;

	switch (hValue) // the high byte determines type of descriptor requested
	{
	case USB_DESCRIPTOR_TYPE_DEVICE:
		ul_siz = (uint32) wLength;
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
		iocb.handle = ctx->in_ep0;
		// update the device descriptor VID/PID from our list
		vos_lock_mutex(&vidPidMutex);
		device_descriptor[8] = vidPid[currentVidPidIndex] & 0xff;
		device_descriptor[9] = vidPid[currentVidPidIndex] >> 8;
		device_descriptor[10] = vidPid[currentVidPidIndex+1] & 0xff;
		device_descriptor[11] = vidPid[currentVidPidIndex+1] >> 8;
		vos_unlock_mutex(&vidPidMutex);
		//updated LCD
		update_lcd_vidpid();

		iocb.request.setup_or_bulk_transfer.buffer = device_descriptor;
		iocb.request.setup_or_bulk_transfer.size = (int16) ul_siz;
		vos_dev_ioctl(ctx->handle, &iocb);

		// start this timer and if it is not killed then the next VID/PID will be selected
		// this is done to detect an unsuccessful enumeration which is assumed
		// to result from endpoint security blocking
		if (autoMode)
		{
			tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_START;
			vos_dev_ioctl(hTimer, &tmr_iocb);
		}
		return;
		break;

	case USB_DESCRIPTOR_TYPE_CONFIGURATION:
		// host will initially ask for first 9 bytes of configuration descriptor
		// this descriptor header has the size of the full descriptor which
		// is actually a composite of the configuration/interface/endpoints.
		// Once host knows the complete descriptor size it makes a second
		// request for the whole thing
		siz = wLength == 9?9:sizeof(config_descriptor);
		ul_siz = (uint32) siz;

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
		iocb.handle = ctx->in_ep0;
		iocb.request.setup_or_bulk_transfer.buffer = config_descriptor;
		iocb.request.setup_or_bulk_transfer.size = (int16) ul_siz;
		vos_dev_ioctl(ctx->handle, &iocb);

		// stop the timer because we are being asked to enumerate
		if(autoMode)
		{
			tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_STOP;
			vos_dev_ioctl(hTimer, &tmr_iocb);
		}
		return;

	case USB_DESCRIPTOR_TYPE_STRING:

		if (lValue == 0) // language type
		{
			src = str0_descriptor;
			siz = sizeof(str0_descriptor);
		}
		else if (lValue == 1) // manufacturer
		{
			src = str1_descriptor;
			siz = sizeof(str1_descriptor);
		}
		else if (lValue == 2) // product
		{
			src = str2_descriptor;
			siz = sizeof(str2_descriptor);
		}
		else if (lValue == 3) // serial number
		{
			src = str3_descriptor;
			siz = sizeof(str3_descriptor);
		}

		cond = (unsigned char) (wLength != siz);

		if (siz > wLength) // don't return more than was asked for
			siz = wLength;

		ul_siz = (uint32) siz;

		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
		iocb.handle = ctx->in_ep0;
		iocb.request.setup_or_bulk_transfer.buffer = src;
		iocb.request.setup_or_bulk_transfer.size = (int16) ul_siz;
		vos_dev_ioctl(ctx->handle, &iocb);
		return;

	default:
		// if drive is connected get descriptor from it
		if (ctx->flashConnected)
		{
			buffer = vos_malloc(wLength);
			hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
			hc_ioctl.handle.ep = hostBomsCtx->epCtrl;
			hc_ioctl.set = &(ctx->setup_buffer[0]);
			hc_ioctl.get = buffer; // descriptor from drive
			vos_dev_ioctl(hostBomsCtx->hc, &hc_ioctl);

			iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
			iocb.handle = ctx->in_ep0;
			iocb.request.setup_or_bulk_transfer.buffer = buffer;
			iocb.request.setup_or_bulk_transfer.size = wLength;
			vos_dev_ioctl(ctx->handle, &iocb);

			vos_free(buffer);
		} else {
			// respond with Request Error
			set_control_ep_halt(ctx);
		}
	}
}

// This function will set a feature.  If it is directed at an
// endpoint the endpoint will stall.
// Note: the endpoint passed in is the USB endpoint from the setup request
// packet, not the VOS endpoint handle.  Unfortunately, most of the
// FTDI defined types are are just typedefs so no real type checking
// is going on here.
void set_feature_request(usbSlaveBoms_context *ctx, unsigned char ep)
{
	usbslave_ioctl_cb_t iocb;
	usbhost_ep_handle_ex hep; // host endpoint to pass stall to
	usbhost_ioctl_cb_t host_ioctl_cb;

	ack_request(ctx); // first ack the request then decide what to do

	// is this directed at an endpoint or the device?
	if (ctx->setup_buffer[0] & USB_BMREQUESTTYPE_ENDPOINT)
	{
		// directed to an endpoint
		//ep 1 is IN 2 is OUT on my fake device
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_STALL;
		iocb.ep = (ep & 0x02)?ctx->out_ep:ctx->in_ep;
		vos_dev_ioctl(ctx->handle, &iocb);

		// if flash drive is attached pass along request
		if (ctx->flashConnected)
		{
			//need to figure out which endpoint to stall
			// if b7=1 then IN else OUT
			if (ep & 0x80)
			{
				hep = hostBomsCtx->epBulkIn;
			} else {
				hep = hostBomsCtx->epBulkOut;
			}
			host_ioctl_cb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SET_HOST_HALT;
			host_ioctl_cb.handle.ep = hep;
			// clear halt state on endpoint
			vos_dev_ioctl(hostBomsCtx->hc, &host_ioctl_cb);
		}
	} else {
		// this is a device request
		host_ioctl_cb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
		host_ioctl_cb.handle.ep = hostBomsCtx->epCtrl;
		host_ioctl_cb.set = &(ctx->setup_buffer[0]);
		host_ioctl_cb.get = NULL;
		vos_dev_ioctl(hostBomsCtx->hc, &host_ioctl_cb);

	}
}

// This function is the complement to the set_feature_request function.
void clear_feature_request(usbSlaveBoms_context *ctx, unsigned char ep)
{
	usbslave_ioctl_cb_t iocb;
	usbhost_ep_handle_ex hep; // host endpoint to pass stall to
	usbhost_ioctl_cb_t host_ioctl_cb;

	ack_request(ctx);

	// is this directed at an endpoint or the device?
	if (ctx->setup_buffer[0] & USB_BMREQUESTTYPE_ENDPOINT)
	{
		// directed to an endpoint
		//ep 1 is IN 2 is OUT on my fake device
		iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_CLEAR;
		iocb.ep = (ep & 0x02)?ctx->out_ep:ctx->in_ep;
		vos_dev_ioctl(ctx->handle, &iocb);

		// if flash drive is attached pass along request
		if (ctx->flashConnected)
		{
			//need to figure out which endpoint to clear
			// if b7=1 then IN else OUT
			if (ep & 0x80)
			{
				hep = hostBomsCtx->epBulkIn;
			} else {
				hep = hostBomsCtx->epBulkOut;
			}
			host_ioctl_cb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_CLEAR_HOST_HALT;
			host_ioctl_cb.handle.ep = hep;
			// clear halt state on endpoint
			vos_dev_ioctl(hostBomsCtx->hc, &host_ioctl_cb);
		}
	} else {
		// this is a device request
		host_ioctl_cb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
		host_ioctl_cb.handle.ep = hostBomsCtx->epCtrl;
		host_ioctl_cb.set = &(ctx->setup_buffer[0]);
		host_ioctl_cb.get = NULL;
		vos_dev_ioctl(hostBomsCtx->hc, &host_ioctl_cb);

	}
}

// This function returns a 1 byte status code for our endpoint
void get_ep_status(usbSlaveBoms_context *ctx, usbslave_ep_handle_t ep)
{
	usbslave_ioctl_cb_t iocb;
	char state;

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_STATE;
	iocb.ep = ep;
	iocb.get = &state;
	vos_dev_ioctl(ctx->handle, &iocb);

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->out_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = (void *) &state;
	iocb.request.setup_or_bulk_transfer.size = 1;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// This function will halt the control endpoint.  This function will only
// be called when an illegal request has been passed to the device.
void set_control_ep_halt(usbSlaveBoms_context *ctx)
{
	usbslave_ioctl_cb_t iocb;

	ack_request(ctx);

	// Performs a protocol stall on endpoint 0
	// Indicates that a request is unsupported
	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_ENDPOINT_STALL;
	iocb.ep = 0;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// This returns the device status.  Only the two lowest bits
// have any meaning here.  B0=1 means device is self-powered.
// B0 = 0 means the device is bus-powered.
// B1 = 1 means that remote wakeup is enabled
// This request can also be used for interface status which
// should just return all zeroes or endpoint status.  Endpoint
// status halted/cleared is indicated by the LSB.
void get_status_request(usbSlaveBoms_context *ctx)
{
	unsigned short status = 0;
	usbslave_ioctl_cb_t iocb;
	usbhost_ioctl_cb_t hc_ioctl;

	// if drive is connected get status from it
	if (ctx->flashConnected)
	{
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
		hc_ioctl.handle.ep = hostBomsCtx->epCtrl;
		hc_ioctl.set = &(ctx->setup_buffer[0]);
		hc_ioctl.get = &status; // status returned from the drive
		vos_dev_ioctl(hostBomsCtx->hc, &hc_ioctl);
	}

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->in_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = &status;
	iocb.request.setup_or_bulk_transfer.size = 2;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// This function returns one byte.  If the byte is zero this indicates
// that the device is not ready.  Non-zero means everything is OK.
void get_configuration_request(usbSlaveBoms_context *ctx)
{
	unsigned char status = 0;
	usbslave_ioctl_cb_t iocb;
	usbhost_ioctl_cb_t hc_ioctl;

	// if drive is connected get status from it
	if (ctx->flashConnected)
	{
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
		hc_ioctl.handle.ep = hostBomsCtx->epCtrl;
		hc_ioctl.set = &(ctx->setup_buffer[0]);
		hc_ioctl.get = &status; // status returned from the drive
		vos_dev_ioctl(hostBomsCtx->hc, &hc_ioctl);
	}

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->in_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = &status;
	iocb.request.setup_or_bulk_transfer.size = 1;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// This request should never be sent to our device, but since this
// is a standard request we will accept it and just do nothing.
void set_descriptor_request(usbSlaveBoms_context *ctx, unsigned short wLength)
{
	unsigned char *buffer;
	usbslave_ioctl_cb_t iocb;
	usbhost_ioctl_cb_t hc_ioctl;

	ack_request(ctx);

	// We read in the info here but throw it away
	buffer = vos_malloc(wLength);
	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->out_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = buffer;
	iocb.request.setup_or_bulk_transfer.size = wLength;
	vos_dev_ioctl(ctx->handle, &iocb);
	vos_free(buffer);
}

// This function returns a single byte.  We will just fake
// it and return zero.
void get_interface_request(usbSlaveBoms_context *ctx)
{
	unsigned char status = 0;
	usbslave_ioctl_cb_t iocb;
	usbhost_ioctl_cb_t hc_ioctl;

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->in_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = &status;
	iocb.request.setup_or_bulk_transfer.size = 1;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// We just ack this request.
void set_interface_request(usbSlaveBoms_context *ctx)
{
	ack_request(ctx);
}

// This is the main handler function for requests coming in on
// the control endpoint.  These are all requests every USB device
// must respond to.
unsigned char standard_request(usbSlaveBoms_context *ctx)
{
	usb_deviceRequest_t *devReq;
	unsigned char status = USBSLAVE_OK;
	unsigned char bReq;

	devReq = (usb_deviceRequest_t *) ctx->setup_buffer;
	bReq = devReq->bRequest;

	switch (bReq) // request is 1 byte value
	{
		case USB_REQUEST_CODE_GET_STATUS:
			get_status_request(ctx);
			break;

		case USB_REQUEST_CODE_SET_ADDRESS:
			set_address_request(ctx, devReq->wValue & 0xff);
			break;

		case USB_REQUEST_CODE_GET_DESCRIPTOR:
			get_descriptor_request(ctx);
			break;

		case USB_REQUEST_CODE_SET_DESCRIPTOR:
			set_descriptor_request(ctx, devReq->wLength);
			break;

		case USB_REQUEST_CODE_SET_CONFIGURATION:
			set_configuration_request(ctx, devReq->wValue & 0xff);
			break;

		case USB_REQUEST_CODE_GET_CONFIGURATION:
			get_configuration_request(ctx);
			break;

		case USB_REQUEST_CODE_CLEAR_FEATURE:
			clear_feature_request(ctx, devReq->wIndex >> 8);
			break;

		case USB_REQUEST_CODE_SET_FEATURE:
			set_feature_request(ctx, devReq->wIndex >> 8);
			break;

		case USB_REQUEST_CODE_GET_INTERFACE:
			get_interface_request(ctx);
			break;

		case USB_REQUEST_CODE_SET_INTERFACE:
			set_interface_request(ctx);
			break;
		default:
			// force a protocol stall
			set_control_ep_halt(ctx);
			break;
	}

	return status;
}

void class_ack(usbSlaveBoms_context *ctx)
{
	ack_request(ctx);
}

void class_control_out(usbSlaveBoms_context *ctx, char *buffer, unsigned short len)
{
	usbslave_ioctl_cb_t iocb;

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->out_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = (void *) buffer;
	iocb.request.setup_or_bulk_transfer.size = len;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// This is one of two class requests for BOMS devices.
// If we are not connected we return 0 which is the most
// common situation.  Windows may not recognize higher LUNs.
void get_max_lun_request(usbSlaveBoms_context *ctx)
{
	unsigned char maxLun = 0;
	usbslave_ioctl_cb_t iocb;
	usbhost_ioctl_cb_t hc_ioctl;

	// if drive is connected get max lun from it
	if (ctx->flashConnected)
	{
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
		hc_ioctl.handle.ep = hostBomsCtx->epCtrl;
		hc_ioctl.set = &(ctx->setup_buffer[0]);
		hc_ioctl.get = &maxLun; // maximum LUN from drive
		vos_dev_ioctl(hostBomsCtx->hc, &hc_ioctl);
	}

	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_SETUP_TRANSFER;
	iocb.handle = ctx->in_ep0;
	iocb.request.setup_or_bulk_transfer.buffer = &maxLun;
	iocb.request.setup_or_bulk_transfer.size = 1;
	vos_dev_ioctl(ctx->handle, &iocb);
}

// The USB standards define this function.  After it is called
// the drive should be ready to respond to CBWs.  The silly
// thing about this is that the drive should always be ready
// for this and if it isn't then it probable crashed long ago.
void boms_reset_request(usbSlaveBoms_context *ctx)
{
	usbhost_ioctl_cb_t hc_ioctl;

	ack_request(ctx);

	// forward this command to a drive if connected
	if (ctx->flashConnected)
	{
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
		hc_ioctl.handle.ep = hostBomsCtx->epCtrl;
		hc_ioctl.set = &(ctx->setup_buffer[0]);
		hc_ioctl.get = NULL; //no return value from this call
		vos_dev_ioctl(hostBomsCtx->hc, &hc_ioctl);
	}
}

unsigned char class_request(usbSlaveBoms_context *ctx)
{
	usb_deviceRequest_t *devReq;
	usbslave_ioctl_cb_t iocb;
	unsigned char status = USBSLAVE_OK;
	unsigned char bReq;

	devReq = (usb_deviceRequest_t *) ctx->setup_buffer;
	bReq = devReq->bRequest;

	// force a protocol stall since there are no class requests in BOMS
	switch (bReq)
	{
		case GET_MAX_LUN :
			get_max_lun_request(ctx);
			break;

		case BOMS_RESET :
			boms_reset_request(ctx);
			break;

		default:
			set_control_ep_halt(ctx);
	}

	return status;
}

