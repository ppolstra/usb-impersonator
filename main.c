/*
** Filename: main.c
**
** Automatically created by Application Wizard 1.4.2
**
** Part of solution BH-EU in project USB-Writeblocker
**
** Based on USBSlaveHIDKbd example by FTDI
** Some ideas also borrowed from examples from John Hyde's USB by Design
**
** Modifications by Philip A. Polstra, Sr.
**
** Part of the USB Mass Storage Device impersonator as presented at DEFCON 20
** Based on USB Write blocker presented at Blackhat Europe 2012
**
** Comments:
**
** Important: Sections between markers "FTDI:S*" and "FTDI:E*" will be overwritten by
** the Application Wizard
*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "main.h"
#include "GPIO.h"
#include "Timers.h"

#include "USBSlaveBomsDrv.h"
#include "USBHostBomsDrv.h"

//Thread prototypes
vos_tcb_t *tcbHostIn, *tcbHostOut, *tcbHostEnum, *tcbTimer, *tcbButtons;

void handleCbw();
void hostEnum();
void timer();
void handleButtons();
extern void update_lcd_vidpid();

// Handles to the devices we need to pull this off
VOS_HANDLE hUSBHOST_2; // host port
VOS_HANDLE hUSBHOSTBOMS; // device for talking mass storage
VOS_HANDLE hUSBSLAVE_1; // slave port - one attached to PC
VOS_HANDLE hUSBSLAVEBOMS;
VOS_HANDLE hGPIO_PORT_E; // GPIO B is used for buttons
VOS_HANDLE hTimer; // timer is set and reest on successful mounting
VOS_HANDLE hGPIO_PORT_B; // port B for LCD display

unsigned short blockSize=512; // default to 512
unsigned long deviceCapacity; // capacity for our actual drive
unsigned short maxLuns=1; // default to 1
vos_mutex_t vidPidMutex; // mutex for current vid/pid
vos_semaphore_t setupDoneSemaphore; // semaphore to indicate setup is done

unsigned char illegalRequest=0; // this flag is set after an illegal request
unsigned char writeProtect=1; // this flag is for enabling or disabling write protect
unsigned char autoMode=1; // should we try to automatically scan?

extern usbSlaveBoms_context *slaveBomsCtx;
extern usbhostBoms_context_t *hostBomsCtx;
extern int currentVidPidIndex;
extern unsigned short vidPid[];
unsigned int vidPidSize = 1044;

/* Declaration for IOMUx setup function */
void iomux_setup(void);

// LCD control signals
#define lcd_rs   0x10
#define lcd_e    0x20

// LED port masks
#define led_green 0x80
#define led_red 0x40

void light_red_led(VOS_HANDLE hLED)
{
	unsigned char toggle;
	// first we read port to not mess up the LCD display
	vos_dev_read(hLED, &toggle, 1, NULL);
	toggle &= (~led_green);
	toggle |= led_red;
	vos_dev_write(hLED, &toggle, 1, NULL);
}

void light_green_led(VOS_HANDLE hLED)
{
	unsigned char toggle;
	vos_dev_read(hLED, &toggle, 1, NULL);
	toggle &= (~led_red);
	toggle |= led_green;
	vos_dev_write(hLED, &toggle, 1, NULL);
}

// Send a command to our LCD display
void write_lcd_cmd(VOS_HANDLE hLCD, unsigned char byte)
{
    unsigned char cmd, leds;
	// first read state to not mess up LEDs on same port
	leds = writeProtect?led_green:led_red;

    // Write High nibble data to LCD
    cmd = (((byte >> 4) &0x0F) | lcd_e);
    cmd = (cmd &(~lcd_rs)) | leds; // Select Registers
    vos_dev_write(hLCD,&cmd,1,NULL);
    // Toggle 'E' pin
    cmd &= (~lcd_e);
    vos_dev_write(hLCD,&cmd,1,NULL);
    // Write Low nibble data to LCD
    cmd = ((byte &0x0F) | lcd_e);
    cmd = (cmd &(~lcd_rs)) | leds; // Select Registers
    vos_dev_write(hLCD,&cmd,1,NULL);
    // Toggle 'E' pin
    cmd &= (~lcd_e);
    vos_dev_write(hLCD,&cmd,1,NULL);
    vos_delay_msecs(1);

}

// Send data to LCD display
void write_lcd_data(VOS_HANDLE hLCD, unsigned char byte)
{
    unsigned char cmd, leds;

	// first read state to not mess up LEDs on same port
	leds = writeProtect?led_green:led_red;

	// Write High nibble data to LCD
    cmd = (((byte >> 4)&0x0F) | lcd_rs);
    cmd = (cmd | lcd_e) | leds; // Select DDRAM
    vos_dev_write(hLCD,&cmd,1,NULL);
    // Toggle 'E' pin
    cmd &= (~lcd_e);
    vos_dev_write(hLCD,&cmd,1,NULL);
    // Write Low nibble data to LCD
    cmd = ((byte & 0x0F) | lcd_rs);
    cmd = (cmd | lcd_e) | leds; // Select DDRAM
    vos_dev_write(hLCD,&cmd,1,NULL);
    // Toggle 'E' pin
    cmd &= (~lcd_e);
    vos_dev_write(hLCD,&cmd,1,NULL);
    vos_delay_msecs(1);

}

// Write a string at the current cursor position
void write_lcd_str(VOS_HANDLE hLCD, char *str)
{
    while(*str != '\0')
    {
         write_lcd_data(hLCD, (unsigned char*)*str);
         ++str;
    }
}

// Attempt to init the LCD display
void lcd_ini(VOS_HANDLE hLCD)
{
    vos_delay_msecs(100);
    // Send Reset command
    write_lcd_cmd(hLCD, 0x03);
    vos_delay_msecs(2);
    // Send Function Set
    write_lcd_cmd(hLCD, 0x28);
    vos_delay_msecs(2);
    write_lcd_cmd(hLCD, 0x28);
    vos_delay_msecs(2);
    // Send Display control command
    write_lcd_cmd(hLCD, 0x0C);
    vos_delay_msecs(2);
    // Send Display Clear command
    write_lcd_cmd(hLCD, 0x01);
    vos_delay_msecs(2);
    // Send Entry Mode Set command
    write_lcd_cmd(hLCD, 0x06);
    vos_delay_msecs(2);
}

// Clear LCD and reset cursor
void lcd_clear(VOS_HANDLE hLcd)
{
	// Send Display Clear command
    write_lcd_cmd(hLcd, 0x01);
    vos_delay_msecs(2);
}

// Write to the top line of our display
void write_lcd_line1(VOS_HANDLE hLcd, char* str)
{	    // Set 1-st line address
    write_lcd_cmd(hLcd, (0x01 | 0x80));
    // Send string to LCD
    write_lcd_str(hLcd, str);
}

// Write to the bottom line of our display
void write_lcd_line2(VOS_HANDLE hLcd, char* str)
{
    // Set 2-nd line address
    write_lcd_cmd(hLcd, (0x40 | 0x80));
    // Send string to LCD
    write_lcd_str(hLcd, str);
}



/* Main code - entry point to firmware */
void main(void)
{
	// these are needed by VOS to intialize General Purpose IO ports
	gpio_context_t gpioContextE, gpioContextB;

	// USB Host configuration context
	usbhost_context_t usbhostContext;

	// initialize the VOS kernel
	vos_init(50, VOS_TICK_INTERVAL, VOS_NUMBER_DEVICES);
	vos_set_clock_frequency(VOS_48MHZ_CLOCK_FREQUENCY);
	vos_set_idle_thread_tcb_size(512);

	// map the pins to appropriate ports
	iomux_setup();

	// set up the button ports
	gpioContextE.port_identifier = GPIO_PORT_E;
	gpio_init(VOS_DEV_GPIO_PORT_E, &gpioContextE);

	// initialize the LCD port
	gpioContextB.port_identifier = GPIO_PORT_B;
	gpio_init(VOS_DEV_GPIO_PORT_B, &gpioContextB);

	// must be called to initialize slave port
	usbslave_init(0, VOS_DEV_USBSLAVE_1);
	usbslaveboms_init(VOS_DEV_USBSLAVEBOMS);

	// Initialize USB Host
	usbhostContext.if_count = 4;
	usbhostContext.ep_count = 8;
	usbhostContext.xfer_count = 4;
	usbhostContext.iso_xfer_count = 0;
	usbhost_init(-1, VOS_DEV_USBHOST_2, &usbhostContext);
	usbhostBoms_init(VOS_DEV_USBHOSTBOMS);

	// this mutex is used to control access to the current VID/PID index
	vos_init_mutex(&vidPidMutex, 0);

	// this semaphore is used to signal when the setup is done
	vos_init_semaphore(&setupDoneSemaphore, 0);

	// create some threads
	// Note: additonal threads are created by our USB slave driver and VOS
	tcbHostIn = vos_create_thread_ex(27, 1024, handleCbw, "Handle_CBW", 0);
	tcbHostEnum = vos_create_thread_ex(28, 1024, hostEnum, "Host_Enum", 0);
	tcbTimer = vos_create_thread_ex(20, 512, timer, "Timer", 0);
	tcbButtons = vos_create_thread_ex(19, 512, handleButtons, "Handle Buttons", 0);

	// this call starts the scheduler and never returns
	vos_start_scheduler();

main_loop:
	goto main_loop;
}

// Gets the connect state of host port
// If the host port is not set up it returns disconnected
unsigned char usbhost_connect_state(VOS_HANDLE hUSB)
{
	unsigned char connectstate = PORT_STATE_DISCONNECTED;
	usbhost_ioctl_cb_t hc_iocb;

	if (hUSB)
	{
		hc_iocb.ioctl_code = VOS_IOCTL_USBHOST_GET_CONNECT_STATE;
		hc_iocb.get = &connectstate;
		vos_dev_ioctl(hUSB, &hc_iocb);
	}

	return connectstate;
}

// Open all the drivers required by our application
void open_drivers(void)
{
	gpio_ioctl_cb_t gpio_iocb;
	unsigned char leds;

	hGPIO_PORT_E = vos_dev_open(VOS_DEV_GPIO_PORT_E);

	// power up Vinco USB Host
	// This is a poorly documented "feature" of Vinco board
	// Pins 40 & 41 of VNC2 chip must be set low to enable power
	// on host port and turn on LED
	// this must happen before we want to enumerate the flash drive
	gpio_iocb.ioctl_code = VOS_IOCTL_GPIO_SET_MASK;
	gpio_iocb.value = 0x60;            // set power and LED as output
	vos_dev_ioctl(hGPIO_PORT_E, &gpio_iocb);
	leds = 0x00;
	vos_dev_write(hGPIO_PORT_E, &leds, 1, NULL);

	// set up port B for LCD display and for 2 status LEDs
	hGPIO_PORT_B = vos_dev_open(VOS_DEV_GPIO_PORT_B);
	gpio_iocb.ioctl_code = VOS_IOCTL_GPIO_SET_MASK;
	gpio_iocb.value = 0xff;   // set all of Port B to output LCD & 2 LEDs
	vos_dev_ioctl(hGPIO_PORT_B, &gpio_iocb);

	// open our USB ports
	hUSBHOST_2 = vos_dev_open(VOS_DEV_USBHOST_2);
	hUSBHOSTBOMS = vos_dev_open(VOS_DEV_USBHOSTBOMS);

	hUSBSLAVE_1 = vos_dev_open(VOS_DEV_USBSLAVE_1);
	hUSBSLAVEBOMS = vos_dev_open(VOS_DEV_USBSLAVEBOMS);

}

void attach_drivers(void)
{
	common_ioctl_cb_t bomsAttach;

	// attach BOMS to USB Host port B
	bomsAttach.ioctl_code = VOS_IOCTL_USBHOSTBOMS_ATTACH;
	bomsAttach.set.data = (void *) hUSBHOST_2;
	vos_dev_ioctl(hUSBHOSTBOMS, &bomsAttach);

	// attach BOMS to USB Slave port A
	bomsAttach.ioctl_code = VOS_IOCTL_USBSLAVEBOMS_ATTACH;
	bomsAttach.set.data = (void *) hUSBSLAVE_1;
	vos_dev_ioctl(hUSBSLAVEBOMS, &bomsAttach);
}

void close_drivers(void)
{
	vos_dev_close(hUSBHOST_2);
	vos_dev_close(hUSBHOSTBOMS);
	vos_dev_close(hUSBSLAVE_1);
	vos_dev_close(hUSBSLAVEBOMS);
	vos_dev_close(hGPIO_PORT_E);
}

/* Application Threads */

// This timer is used to determine if our device has successfully connected
// When the device is first enumerated this timer is set.  This thread then
// blocks till the timer expires.  When the timer expires we increment the
// index into our VID/PID list.  If the device is connected the timer is
// cancelled.
void timer()
{
	tmr_ioctl_cb_t tmr_iocb;

	// here we set up the timer, but don't start it
	// timer is started by the USB slave driver when someone
	// starts talking to it
	hTimer = vos_dev_open(TIMER0);
	tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_SET_TICK_SIZE;
	tmr_iocb.param = TIMER_TICK_MS;
	vos_dev_ioctl(hTimer, &tmr_iocb);
	tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_SET_COUNT;
	tmr_iocb.param = 1000; // 1s
	vos_dev_ioctl(hTimer, &tmr_iocb);
	tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_SET_DIRECTION;
	tmr_iocb.param = TIMER_COUNT_DOWN;
	vos_dev_ioctl(hTimer, &tmr_iocb);
	tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_SET_MODE;
	tmr_iocb.param = TIMER_MODE_SINGLE_SHOT;
	vos_dev_ioctl(hTimer, &tmr_iocb);

	// if our device is connected this never gets past blocking call
	while (1)
	{
		tmr_iocb.ioctl_code = VOS_IOCTL_TIMER_WAIT_ON_COMPLETE;
		vos_dev_ioctl(hTimer, &tmr_iocb);
		vos_lock_mutex(&vidPidMutex);
		if (autoMode)
		{
			currentVidPidIndex += 2;
			if (currentVidPidIndex > sizeof(vidPid))
				currentVidPidIndex = 0;
		}
		vos_unlock_mutex(&vidPidMutex);
	}
}

// This is the main thread.  It enumerates the attached drive and
// forwards commands to the drive if they are safe of if write
// blocking is disabled.
void hostEnum()
{
	unsigned char i;
	unsigned char status;
	unsigned char buf[64];
	unsigned short num_read;
	unsigned int handle;
	char *str1; // line one of display
	char *str2; // line two of display

	usbhostBoms_ioctl_t generic_iocb;
	usbhost_device_handle_ex ifDev;
	usbhost_ioctl_cb_t hc_iocb;
	usbhost_ioctl_cb_class_t hc_iocb_class;
	usbhostBoms_ioctl_cb_attach_t genericAtt;
	gpio_ioctl_cb_t gpio_iocb2;

	num_read = 0;  // just here to set breakpoint

	open_drivers();

	// display welcome greeting
	lcd_ini(hGPIO_PORT_B);
	lcd_clear(hGPIO_PORT_B);
	vos_delay_msecs(100); // delay a tad to reliably clear screen
	str1 = "All UR Endpoint";
	write_lcd_line1(hGPIO_PORT_B, str1);
	str2 = "  R belong 2 us";
	write_lcd_line2(hGPIO_PORT_B, str2);

	// now give them a chance to change the VID/PID
	vos_delay_msecs(1000);
	str1 = "Enter VID/PID  ";
	write_lcd_line1(hGPIO_PORT_B, str1);
	str2 = "or wait 4 auto ";
	write_lcd_line2(hGPIO_PORT_B, str2);
	vos_wait_semaphore(&setupDoneSemaphore); // wait for setup to complete
	vos_signal_semaphore(&setupDoneSemaphore); // reset semaphore for next guy

	attach_drivers(); // enumerate flash drive then connect slave

	do
	{
		// see if bus available
		if (usbhost_connect_state(hUSBHOST_2) == PORT_STATE_ENUMERATED)
		{
				hc_iocb_class.dev_class = USB_CLASS_MASS_STORAGE;
				hc_iocb_class.dev_subclass = USB_SUBCLASS_MASS_STORAGE_SCSI;
				hc_iocb_class.dev_protocol = USB_PROTOCOL_MASS_STORAGE_BOMS;

				// user ioctl to find first hub device
				hc_iocb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_FIND_HANDLE_BY_CLASS;
				hc_iocb.handle.dif = NULL;
				hc_iocb.set = &hc_iocb_class;
				hc_iocb.get = &ifDev;

				vos_dev_ioctl(hUSBHOST_2, &hc_iocb);

				genericAtt.hc_handle = hUSBHOST_2;
				genericAtt.ifDev = ifDev;

				generic_iocb.ioctl_code = VOS_IOCTL_USBHOSTBOMS_ATTACH;
				generic_iocb.set.att = &genericAtt;

				// we use a simple variable to indicate if the flash drive
				// is attached
				// this is not as elegent as using a semaphore, but
				// this is the only thread that updates this variable and
				// if the device is disconnected and reconnected that is hard
				// to handle with a semaphore
				if (vos_dev_ioctl(hUSBHOSTBOMS, &generic_iocb) == USBHOSTBOMS_OK)
				{
					slaveBomsCtx->flashConnected = 1;
					vos_signal_semaphore(&slaveBomsCtx->enumed);
					str1 = "Successfully   ";
					write_lcd_line1(hGPIO_PORT_B, str1);
					str2 = "  read drive   ";
					write_lcd_line2(hGPIO_PORT_B, str2);
				} else
				{
					slaveBomsCtx->flashConnected = 0;
					str1 = "Oh Snap!  UR   ";
					write_lcd_line1(hGPIO_PORT_B, str1);
					str2 = "drive !enumed  ";
					write_lcd_line2(hGPIO_PORT_B, str2);
				}// if attach
				// this code is in here so that if the drive gets disconnected
				// we can try to restart it
				// also, hopefully the the traffic every few seconds will keep
				// the drive from going to sleep
				vos_delay_msecs(2000);
		} // if enumerated
			vos_delay_msecs(10); // recheck every .01 seconds for new connect
	} // outer do
	while (1);

}

// The following functions forward commands and such to the attached
// mass storage device.
unsigned short forward_cbw_to_device(boms_cbw_t *cbw)
{
	unsigned short num_written;
	usbhostBoms_write((void*)cbw, sizeof(boms_cbw_t), &num_written, hostBomsCtx);

	return num_written;
}

unsigned short receive_data_from_device(void* buffer, unsigned short expected)
{
	unsigned short num_read;
	unsigned char status;

	status = usbhostBoms_read(buffer, expected, &num_read, hostBomsCtx);
	if (status == USBHOST_EP_HALTED)
	{
		// the endpoint is halted so let's halt the slave endpoint
		usbslaveboms_stall_bulk_in(slaveBomsCtx);
	}

	return num_read;
}

unsigned short forward_data_to_slave(void* buffer, unsigned short bytes)
{
	unsigned short num_written;
	usbSlaveBoms_write(buffer, bytes, &num_written, slaveBomsCtx);

	return num_written;
}

unsigned short forward_data_to_slave_then_stall(void* buffer, unsigned short bytes)
{
	unsigned short num_written;
	usbSlaveBoms_short_write(buffer, bytes, &num_written, slaveBomsCtx);

	return num_written;
}

unsigned short receive_csw_from_device(boms_csw_t *csw)
{
	unsigned short num_read;
	usbhostBoms_read((void*)csw, 13, &num_read, hostBomsCtx);

	return num_read;
}

unsigned short forward_csw_to_slave(boms_csw_t *csw)
{
	unsigned short num_written;
	usbSlaveBoms_write((void*)csw, 13, &num_written, slaveBomsCtx);

	return num_written;
}

// The handle_xxxxx functions are used to handle various requests
// of our faked mass storage device.  While it would be wonderful
// to implement this in a nice object-oriented fashion, there are
// too many variables and the microcontroller doesn't handle lots
// of function calls very well so we must live with lots of cut
// and paste action here.  Sorry!

void handle_inquiry(boms_cbw_t *cbw)
{
	unsigned char buffer[64];
	unsigned short responseSize;
	boms_csw_t csw;

	// forward the CBW to device
	if (forward_cbw_to_device(cbw))
	{
		// receive response from device
		// note we will assume that only the standard 36 bytes will be requested
		if (responseSize = receive_data_from_device(&buffer[0], 36))
		{
			// forward response to slave
			forward_data_to_slave(&buffer[0], responseSize);

			// receive CSW from device
			if (receive_csw_from_device(&csw))
			{
				// forward CSW to slave
				forward_csw_to_slave(&csw);
			}
		}
	}
}

void handle_test_unit_ready(boms_cbw_t *cbw)
{
	boms_csw_t csw;

	// forward the CBW to device
	if (forward_cbw_to_device(cbw))
	{
		// receive response from device
		if (receive_csw_from_device(&csw))
		{
			// forward CSW to slave
			forward_csw_to_slave(&csw);
		}
	}
}

void handle_read(boms_cbw_t *cbw)
{
	// this same routine handles all 3 possible read commands
	// most likely read command is read(10)

	unsigned long lba; // logical block address for start block
	unsigned short blocks; // number of blocks to read
	unsigned short i;
	boms_csw_t csw;
	unsigned char *buffer;
	unsigned short num_read;
	unsigned short num_written;

	switch (cbw->cb.formated.command)
	{
		case BOMS_READ_6:
			lba = cbw->cb.raw[1]*65536 + cbw->cb.raw[2]*256 + cbw->cb.raw[3];
			blocks = cbw->cb.raw[4];
			break;
		case BOMS_READ_10:
			lba = cbw->cb.raw[2]*16777216 + cbw->cb.raw[3]*65536 + cbw->cb.raw[4]*256 +cbw->cb.raw[5];
			blocks = cbw->cb.raw[7] * 256 + cbw->cb.raw[8];
			break;
		case BOMS_READ_12:
			lba = cbw->cb.raw[2]*16777216 + cbw->cb.raw[3]*65536 + cbw->cb.raw[4]*256 +cbw->cb.raw[5];
			// we are being a little bad here the number of blocks is actually a long
			// it is extremely unlikely that anyone would request this much at once, however
			blocks = cbw->cb.raw[8] * 256 + cbw->cb.raw[9];
			break;
	}

	// now forward the cbw to the device
	forward_cbw_to_device(cbw);

	// receive the appropriate number of blocks from the device
	// forward the blocks to the slave
	// most requests are probably 1 block of 512 bytes
	// read in 512 byte chunks (packet size is 64 bytes, but VOS should handle this)
	// If devices with larger blocks are encountered, 512 should still work
	buffer = vos_malloc(blockSize);
	while(blocks>0)
	{
		usbhostBoms_read((void*)buffer, blockSize, &num_read, hostBomsCtx);
		usbSlaveBoms_write((void*)buffer, num_read, &num_written, slaveBomsCtx);
		blocks--;
	}
	vos_free(buffer);

	// receive the csw from the device
	receive_csw_from_device(&csw);

	// forward the csw to the slave
	forward_csw_to_slave(&csw);
}

void handle_read_capacity(boms_cbw_t *cbw)
{
	boms_csw_t csw;
	unsigned char buffer[8];
	unsigned short received;

	// forward cbw to device
	forward_cbw_to_device(cbw);

	// receive response from device
	if (received = receive_data_from_device(&buffer[0], 8))
	{
		deviceCapacity = buffer[0]*16777216 + buffer[1]*65536 + buffer[2]*256 +buffer[3];
		blockSize = buffer[4]*16777216 + buffer[5]*65536 + buffer[6]*256 +buffer[7];
		// forward response to slave
		forward_data_to_slave(&buffer[0], received);
	}

	// receive csw from device
	receive_csw_from_device(&csw);

	// forward csw to slave
	forward_csw_to_slave(&csw);
}

void handle_report_luns(boms_cbw_t *cbw)
{
	boms_csw_t csw;
	unsigned char buffer[64];
	unsigned short received;

	// forward cbw
	forward_cbw_to_device(cbw);

	// receive response from device
	// response is 8 bytes + maxLuns * 8
	if (received = receive_data_from_device(&buffer[0], 8 + 8 * maxLuns))
	{
		// forward response to slave
		forward_data_to_slave(&buffer[0], received);
	}

	// receive csw from device
	receive_csw_from_device(&csw);

	// forward csw to slave
	forward_csw_to_slave(&csw);
}

void handle_request_sense(boms_cbw_t *cbw)
{
	boms_csw_t csw;
	unsigned char bytesRequested;
	unsigned short bytesRead, bytesWritten;
	unsigned char *buffer;
	request_sense_response_t rsr;

	if (illegalRequest)
	{
		// if we are here this a a request sense that came right after an illegal
		// command request - perhaps somebody tried to modify our drive!
		// we return the appropriate error directly and a CSW
		// the device is never touched

		illegalRequest = 0; // reset so next request goes to actual device

		rsr.formated.responseCode =0x70; //0x70 current error
		rsr.formated.valid = 0; // 1=INFORMATION field valid
		rsr.formated.obsolete = 0;
		rsr.formated.senseKey = 0x05; // 0x05 for illegal request
		rsr.formated.resvered = 0;
		rsr.formated.ili = 0; // incorrect length indicator
		rsr.formated.eom = 0; // end of media for streaming devices
		rsr.formated.filemark = 0; // for streaming devices
		rsr.formated.information = 0; // device specific info
		rsr.formated.addSenseLen = 0x0a; // additional bytes that follow 244 max
		rsr.formated.cmdSpecInfo = 0; // command specific info
		rsr.formated.asc = 0x20; // additional sense code 0x20 for illegal command
		rsr.formated.ascq = 0; // additional sense code qualifier 0-unused
		rsr.formated.fruc = 0; // field replaceable unit code set to 0
		rsr.formated.senseKeySpecific[0] = 0; //senses key spec info if b7=1
		rsr.formated.senseKeySpecific[1] = 0;
		rsr.formated.senseKeySpecific[2] = 0;
		bytesWritten = forward_data_to_slave(&rsr, 18);

		// now send an appropriate CSW to indicate success of this command
		csw.sig[0] = 'U'; //"USBS"
		csw.sig[1] = 'S';
		csw.sig[2] = 'B';
		csw.sig[3] = 'S';
		csw.tag = cbw->tag;
		csw.residue = 0;
		csw.status = 0; // 0x00=success 0x01=failure 0x02=phase error
		forward_csw_to_slave(&csw);
	} else
	{
		// forward cbw
		bytesRequested = cbw->cb.raw[4];
		forward_cbw_to_device(cbw);
		buffer = vos_malloc((unsigned short)bytesRequested);

		// receive data from device
		if (bytesRead = receive_data_from_device(buffer, (unsigned short)bytesRequested))
		{
			bytesWritten = forward_data_to_slave(buffer, bytesRead);
		}

		vos_free(buffer);
		// receive csw from device
		receive_csw_from_device(&csw);

		// forward csw to slave
		forward_csw_to_slave(&csw);
	}
}

void handle_mode_sense(boms_cbw_t *cbw)
{
	boms_csw_t csw;
	unsigned short allocLength=0;
	unsigned char *buffer=NULL;
	unsigned short bytesReceived=0;

	// forward the cbw to the device
	switch (cbw->cb.formated.command)
	{
		case BOMS_MODE_SENSE_6:
			allocLength = cbw->cb.raw[4];
			break;
		case BOMS_MODE_SENSE_10:
			allocLength = cbw->cb.raw[7]*256 + cbw->cb.raw[8];
			break;
	}
	forward_cbw_to_device(cbw);

	// receive data from device
	if (allocLength)
	{
		buffer = vos_malloc(allocLength);
		bytesReceived = receive_data_from_device(buffer, allocLength);
		// forward data to slave
		forward_data_to_slave(buffer, bytesReceived);
		vos_free(buffer);
	}

	// receive csw from device
	receive_csw_from_device(&csw);

	// forward csw to slave
	forward_csw_to_slave(&csw);
}

void handle_mode_select(boms_cbw_t *cbw)
{
	boms_csw_t csw;
	unsigned short allocLength=0;
	unsigned char *buffer=NULL;
	unsigned short bytesReceived=0;

	// forward the cbw to the device
	switch (cbw->cb.formated.command)
	{
		case BOMS_MODE_SELECT_6:
			allocLength = cbw->cb.raw[4];
			break;
		case BOMS_MODE_SELECT_10:
			allocLength = cbw->cb.raw[7]*256 + cbw->cb.raw[8];
			break;
	}
	forward_cbw_to_device(cbw);

	// receive data from device
	if (allocLength)
	{
		buffer = vos_malloc(allocLength);
		bytesReceived = receive_data_from_device(buffer, allocLength);
		// forward data to slave
		forward_data_to_slave(buffer, bytesReceived);
		vos_free(buffer);
	}

	// receive csw from device
	receive_csw_from_device(&csw);

	// forward csw to slave
	forward_csw_to_slave(&csw);
}

void handle_illegal_request(boms_cbw_t *cbw)
{
	usbslave_ioctl_cb_t iocb;
	boms_csw_t csw;

	// now send the CSW
	csw.sig[0]='U';
	csw.sig[1]='S';
	csw.sig[2]='B';
	csw.sig[3]='S';//"USBS"
	csw.tag=cbw->tag;
	csw.residue=0;
	csw.status=0x01; // 0x00=success 0x01=failure 0x02=phase error
	forward_csw_to_slave(&csw);

	// flag the error for the anticipated call to REQUEST SENSE
	illegalRequest=1;
}

void handle_illegal_write_request(boms_cbw_t *cbw)
{
	usbslave_ioctl_cb_t iocb;
	boms_csw_t csw;
	unsigned short blocks;
	unsigned char *buffer;
	unsigned short num_read;
	unsigned short i;


	// as strange as it may seem, there is no way to tell the host to quit
	// instead we need to receive all this data and throw it away!
	switch (cbw->cb.formated.command)
	{
		case BOMS_WRITE_6:
			blocks = cbw->cb.raw[4];
			break;
		case BOMS_WRITE_10:
			blocks = cbw->cb.raw[7] * 256 + cbw->cb.raw[8];
			break;
		case BOMS_WRITE_12:
			// we are being a little bad here the number of blocks is actually a long
			// it is extremely unlikely that anyone would request this much at once, however
			blocks = cbw->cb.raw[8] * 256 + cbw->cb.raw[9];
			break;
	}

	buffer = vos_malloc(512);
	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
	iocb.handle = slaveBomsCtx->out_ep;
	iocb.request.setup_or_bulk_transfer.buffer = buffer;
	iocb.request.setup_or_bulk_transfer.size = 512;
	iocb.request.setup_or_bulk_transfer.bytes_transferred = 0;
	for (i = 0; i < (blocks * (512/blockSize)); i++)
	{
		// process bytes received from host
		vos_dev_ioctl(slaveBomsCtx->handle,&iocb);
	}
	vos_free(buffer);

	// now send the CSW
	csw.sig[0]='U';
	csw.sig[1]='S';
	csw.sig[2]='B';
	csw.sig[3]='S';//"USBS"
	csw.tag=cbw->tag;
	csw.residue=0;
	csw.status=0x00; // 0x00=success 0x01=failure 0x02=phase error
	//forward_csw_to_slave(&csw);
	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
	iocb.handle = slaveBomsCtx->in_ep;
	iocb.request.setup_or_bulk_transfer.buffer = &csw;
	iocb.request.setup_or_bulk_transfer.size = sizeof(boms_csw_t);
	vos_dev_ioctl(slaveBomsCtx->handle, &iocb);

}

void handle_write_request(boms_cbw_t *cbw)
{
	usbslave_ioctl_cb_t iocb;
	boms_csw_t csw;
	unsigned short blocks;
	unsigned char *buffer;
	unsigned short num_read, num_written;
	unsigned short i;

	switch (cbw->cb.formated.command)
	{
		case BOMS_WRITE_6:
			blocks = cbw->cb.raw[4];
			break;
		case BOMS_WRITE_10:
			blocks = cbw->cb.raw[7] * 256 + cbw->cb.raw[8];
			break;
		case BOMS_WRITE_12:
			// we are being a little bad here the number of blocks is actually a long
			// it is extremely unlikely that anyone would request this much at once, however
			blocks = cbw->cb.raw[8] * 256 + cbw->cb.raw[9];
			break;
	}

	// forward the cbw to the device
	forward_cbw_to_device(cbw);

	// create a buffer for each 512 byte block
	// Note: we are assuming a 512 byte block size for our attached device.
	// While this is a fairly good assumption, I am told that there are devices
	// with larger block sizes out there.  If you have such a device don't
	// connect it or things will fail.  There are plenty of 512 byte block
	// devices to choose from.  If you don't like this limitation, feel free
	// to modify this code accordingly.

	buffer = vos_malloc(blockSize);

	while(blocks>0)
	{
		usbSlaveBoms_read((void*)buffer, blockSize, &num_read, slaveBomsCtx);
		usbhostBoms_write((void*)buffer, num_read, &num_written, hostBomsCtx);
		blocks--;
	}
	vos_free(buffer);


	// receive csw from device
	receive_csw_from_device(&csw);

	// forward csw to slave
	forward_csw_to_slave(&csw);
}


void handle_send_diagnostic(boms_cbw_t *cbw)
{
	usbslave_ioctl_cb_t iocb;
	boms_csw_t csw;

	// first send ZLDP to ACK the command
	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
	iocb.handle = slaveBomsCtx->in_ep;
	iocb.request.setup_or_bulk_transfer.buffer = NULL;
	iocb.request.setup_or_bulk_transfer.size = 0;
	vos_dev_ioctl(slaveBomsCtx->handle, &iocb);

	// now send the CSW
	csw.sig[0]='U';
	csw.sig[1]='S';
	csw.sig[2]='B';
	csw.sig[3]='S';//"USBS"
	csw.tag=cbw->tag;
	csw.residue=0;
	csw.status=0x00; // 0x00=success 0x01=failure 0x02=phase error
	forward_csw_to_slave(&csw);

}

void handle_start_stop_unit(boms_cbw_t *cbw)
{
	boms_csw_t csw;

	// forward the CBW to device
	if (forward_cbw_to_device(cbw))
	{
		// receive response from device
		if (receive_csw_from_device(&csw))
		{
			// forward CSW to slave
			forward_csw_to_slave(&csw);
		}
	}

}

void handle_synchronize_cache(boms_cbw_t *cbw)
{
	usbslave_ioctl_cb_t iocb;
	boms_csw_t csw;

	// first send ZLDP to ACK the command
	iocb.ioctl_code = VOS_IOCTL_USBSLAVE_TRANSFER;
	iocb.handle = slaveBomsCtx->in_ep;
	iocb.request.setup_or_bulk_transfer.buffer = NULL;
	iocb.request.setup_or_bulk_transfer.size = 0;
	vos_dev_ioctl(slaveBomsCtx->handle, &iocb);

	// now send the CSW
	csw.sig[0]='U';
	csw.sig[1]='S';
	csw.sig[2]='B';
	csw.sig[3]='S';//"USBS"
	csw.tag=cbw->tag;
	csw.residue=0;
	csw.status=0x00; // 0x00=success 0x01=failure 0x02=phase error
	forward_csw_to_slave(&csw);

}

void handle_read_format_capacities(boms_cbw_t *cbw)
{
	unsigned char *buffer;
	unsigned short responseSize;
	unsigned short allocLength;
	boms_csw_t csw;

	allocLength = cbw->cb.raw[7] * 256 + cbw->cb.raw[8];
	buffer = vos_malloc(allocLength);

	// forward the CBW to device
	if (forward_cbw_to_device(cbw))
	{
		// receive response from device
		if (responseSize = receive_data_from_device(buffer, allocLength))
		{
			// forward response to slave
			forward_data_to_slave(&buffer[0], responseSize);

			// receive CSW from device
			if (receive_csw_from_device(&csw))
			{
				// forward CSW to slave
				forward_csw_to_slave(&csw);
			}
		}
	}

	vos_free(buffer);
}

void handle_read_toc_pma_atip(boms_cbw_t *cbw)
{
	unsigned char *buffer;
	unsigned short responseSize;
	unsigned short allocLength;
	boms_csw_t csw;

	allocLength = cbw->cb.raw[7] * 256 + cbw->cb.raw[8];
	buffer = vos_malloc(allocLength);

	// forward the CBW to device
	if (forward_cbw_to_device(cbw))
	{
		// receive response from device
		if (responseSize = receive_data_from_device(buffer, allocLength))
		{
			// forward response to slave
			forward_data_to_slave(&buffer[0], responseSize);

			// receive CSW from device
			if (receive_csw_from_device(&csw))
			{
				// forward CSW to slave
				forward_csw_to_slave(&csw);
			}
		}
	}

	vos_free(buffer);
}

// This function handles the call to prevent/allow removal
// If we fail this command when prevent=1 (true) then
// Windows will not cache writes.  This actually leads
// to better performance.
void handle_prevent_allow_removal(boms_cbw_t *cbw)
{
	usbslave_ioctl_cb_t iocb;
	boms_csw_t csw;

	// now send the CSW
	csw.sig[0]='U';
	csw.sig[1]='S';
	csw.sig[2]='B';
	csw.sig[3]='S';//"USBS"
	csw.tag=cbw->tag;
	csw.residue=0;
	csw.status=0x01; // 0x00=success 0x01=failure 0x02=phase error
	forward_csw_to_slave(&csw);

	// flag the error for the anticipated call to REQUEST SENSE
	illegalRequest=1;

}
// This function runs in its own thread.  It processes
// incoming Command Block Wrappers and either passes them on
// or fake it.
void handleCbw()
{
	unsigned short num_read, num_written;
	boms_cbw_t *cbw = vos_malloc(sizeof(boms_cbw_t));

	// no point in doing anything until we can enum our attached
	// mass storage device
	vos_wait_semaphore(&slaveBomsCtx->enumed);
	vos_signal_semaphore(&slaveBomsCtx->enumed);

	while(1)
	{
		if(slaveBomsCtx)
		{
			while(slaveBomsCtx && slaveBomsCtx->flashConnected)
				{
				// get the CBW
				memset(cbw, 0, sizeof(boms_cbw_t));
				usbSlaveBoms_readCbw(cbw, slaveBomsCtx);
				// TO DO: Check for valid CBW

				switch (cbw->cb.formated.command)
				{
					case BOMS_INQUIRY:
						handle_inquiry(cbw);
						break;
					case BOMS_MODE_SELECT_6:
					case BOMS_MODE_SELECT_10:
						handle_mode_select(cbw);
						break;
					case BOMS_MODE_SENSE_6:
					case BOMS_MODE_SENSE_10:
						handle_mode_sense(cbw);
						break;
					case BOMS_READ_6:
					case BOMS_READ_10:
					case BOMS_READ_12:
						handle_read(cbw);
						break;
					case BOMS_READ_CAPACITY:
						handle_read_capacity(cbw);
						break;
					case BOMS_REPORT_LUNS:
						handle_report_luns(cbw);
						break;
					case BOMS_REQUEST_SENSE:
						handle_request_sense(cbw);
						break;
					case BOMS_TEST_UNIT_READY:
						handle_test_unit_ready(cbw);
						break;
					case BOMS_SEND_DIAGNOSTIC:
						handle_send_diagnostic(cbw);
						break;
					case BOMS_START_STOP_UNIT:
						handle_start_stop_unit(cbw);
						break;
					case BOMS_SYCHRONIZE_CACHE:
						handle_synchronize_cache(cbw);
						break;
					case BOMS_READ_FORMAT_CAPACITIES:
						handle_read_format_capacities(cbw);
						break;
					case BOMS_PREVENT_ALLOW_REMOVAL:
						handle_prevent_allow_removal(cbw);
						break;
					case BOMS_READ_TOC_PMA_ATIP:
						handle_read_toc_pma_atip(cbw);
						break;
					case BOMS_VERIFY:
					case BOMS_FORMAT_UNIT:
						// tell them NO! by failing command
						handle_illegal_request(cbw);
						break;
					case BOMS_WRITE_6:
					case BOMS_WRITE_10:
					case BOMS_WRITE_12:
						if (writeProtect)
							handle_illegal_write_request(cbw);
						else
							handle_write_request(cbw);
						break;
					default:
						handle_illegal_request(cbw);
						break;
				} // switch
			} // inner while
		} else
		{
			vos_delay_msecs(1000);
		}
	} // outer while

	vos_free(cbw);
}

// This function runs in a low priority thread.  Its only
// function is to read the buttons to see if someone has pressed
// them to toggle write protect or change the VID/PID.
// This could have been implemented using GPIO lines with
// interupt capabilities, but interupting the USB threads might
// not be a great idea.  Additionally, enabling interupts introduces
// additional overhead.
void handleButtons()
{
	unsigned char buttonBits, leds, counter=0, firstTime=1;
	char str1[17], str2[17];

	while (1)
	{
		vos_dev_read(hGPIO_PORT_E, &buttonBits, 1, NULL);

		// if this is non-zero, somebody is pushing buttons
		// we prioritize the write protect button then +, then -
		while (~buttonBits)
		{
			if ((buttonBits ^ 0xF7)==0) // write protect button pressed
			{
				// since this is pretty serious business we require
				// a long keypress to toggle
				vos_delay_msecs(1000);
				if((buttonBits ^ 0xF7)==0)
				{
					writeProtect = (~writeProtect & 0x01);
					leds = writeProtect?led_green:led_red;
					vos_dev_write(hGPIO_PORT_B, &leds, 1, NULL);
				}
			} else if((buttonBits ^ 0xFB)==0) // VID/PID +
			{
				autoMode=0; // disable VID/PID scan
				counter = 0; // reset the counter
				vos_lock_mutex(&vidPidMutex);
				currentVidPidIndex += 2;
				if (currentVidPidIndex > vidPidSize)
					currentVidPidIndex = 0;
				vos_unlock_mutex(&vidPidMutex);
				update_lcd_vidpid();
			} else if((buttonBits ^ 0xFD)==0) // VID/PID -
			{
				autoMode=0; // disable VID/PID scan
				counter = 0; // reset the counter
				vos_lock_mutex(&vidPidMutex);
				currentVidPidIndex -= 2;
				if (currentVidPidIndex < 0)
					currentVidPidIndex = 0;
				vos_unlock_mutex(&vidPidMutex);
				update_lcd_vidpid();
			}
			vos_dev_read(hGPIO_PORT_E, &buttonBits, 1, NULL);
			vos_delay_msecs(50);
		}

		vos_delay_msecs(100);
		// if we haven't hit a button for 5 seconds then it is time to
		// move on and start using the device
		if (firstTime)
			counter++; // increment the counter
		if (counter > 50)
		{
			firstTime=0;
			vos_signal_semaphore(&setupDoneSemaphore);
		}
	}
}

