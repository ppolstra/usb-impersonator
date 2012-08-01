/*
** USBSlaveBomsDrv.h
**
** Based on USBSlaveHIDKbd example by FTDI
**
** Modifications by Philip A. Polstra, Sr.
**
** Part of the USB Mass Storage Device impersonator as presented at DEFCON 20
** Based on USB Write blocker presented at Blackhat Europe 2012
***
*/
#ifndef __USBSlaveBomsDrv_h__
#define __USBSlaveBomsDrv_h__

#include "ioctl.h"
#include "BomsDefs.h"


// This structure is used to store state information for our device
// The USBSlaveDrv is a VOS device which is layered on top of the
// FTDI supplied USB Slave driver
// This is one of those cases where life would be much simplier if
// we could program our microcontroller in C++.
typedef struct _usbSlaveBoms_context
{
	// usb slave port handle
	VOS_HANDLE			 handle;

	// non-zero when initialised
	unsigned char		 attached; // is the slave attached
	unsigned char		 flashConnected; // is there a flash drive installed and enumed

	// SETUP thread
	vos_tcb_t			 *tcbSetup; // this is a thread that handles requests on the control endpoint

	// endpoint handles
	usbslave_ep_handle_t in_ep0; // VOS requires 2 handles for the control endpoint in/out
	usbslave_ep_handle_t out_ep0;
	usbslave_ep_handle_t in_ep; // bulk in endpoint direction is relative to PC attached to our device
	usbslave_ep_handle_t out_ep; // bulk out endpoint

	// semaphore to prevent accepting requests before drive is fully enumerated
	vos_semaphore_t		 enumed; // semaphore to delay start of slave
	// setup buffer
	unsigned char		 setup_buffer[9]; // setup packets are always 9 bytes
} usbSlaveBoms_context;

// USBSLAVEFT232 IOCTL definitions
#define VOS_IOCTL_USBSLAVEBOMS_ATTACH 0
#define VOS_IOCTL_USBSLAVEBOMS_DETACH 1

enum USBSLAVEBOMS_STATUS {
	USBSLAVEBOMS_OK = 0,
	USBSLAVEBOMS_INVALID_PARAMETER,
	USBSLAVEBOMS_ERROR
};

// BULK IN endpoint number
#define USBSLAVEBOMS_IN 1
// BULK OUT endpoint number
#define USBSLAVEBOMS_OUT 2

// internal thread memory usage
#define SIZEOF_BOMS_SETUP_MEMORY 1024

// function prototypes for "public" functions
uint8 usbslaveboms_init(uint8 vos_dev_num);
void usbslaveboms_setup(usbSlaveBoms_context *ctx);

unsigned char usbSlaveBoms_write(
	char *xfer,
	unsigned short num_to_write,
	unsigned short *num_written,
	usbSlaveBoms_context *ctx);

unsigned char usbSlaveBoms_read(
	char *xfer,
	unsigned short num_to_read,
	unsigned short *num_read,
	usbSlaveBoms_context *ctx);

// Write less than expected then stall
unsigned char usbSlaveBoms_short_write(
	char *xfer,
	unsigned short num_to_write,
	unsigned short *num_written,
	usbSlaveBoms_context *ctx);
// Read less than expected then stall
unsigned char usbSlaveBoms_short_read(
	char *xfer,
	unsigned short num_to_read,
	unsigned short *num_read,
	usbSlaveBoms_context *ctx);

unsigned char usbSlaveBoms_readCbw(
	boms_cbw_t *cbw,
	usbSlaveBoms_context *ctx);

void usbslaveboms_stall_bulk_in(usbSlaveBoms_context *ctx);
void usbslaveboms_clear_bulk_in(usbSlaveBoms_context *ctx);
void usbslaveboms_stall_bulk_out(usbSlaveBoms_context *ctx);
void usbslaveboms_clear_bulk_out(usbSlaveBoms_context *ctx);


#endif

