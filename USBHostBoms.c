/*
** Filename: USBHostGeneric.c
**
** Automatically created by Application Wizard 1.4.2
**
** Part of solution USBHostGeneric in project USBHostGeneric
**
** Comments:
**
** Important: Sections between markers "FTDI:S*" and "FTDI:E*" will be overwritten by
** the Application Wizard
*/

#include "USBHostGeneric.h"
#include "USBHostGenericDrv.h"

/* FTDI:STP Thread Prototypes */
vos_tcb_t *tcbFIRMWARE;

void firmware();
/* FTDI:ETP */

/* FTDI:SDH Driver Handles */
VOS_HANDLE hUSBHOST_1;                 // USB Host Port 1
VOS_HANDLE hUART;                      // UART Interface Driver
/* FTDI:EDH */

VOS_HANDLE hUSBHOSTGENERIC;            // USB Host Generic Driver (Additional Device)

/* Declaration for IOMUx setup function */
void iomux_setup(void);

/* Main code - entry point to firmware */
void main(void)
{
	/* FTDI:SDD Driver Declarations */
	// UART Driver configuration context
	uart_context_t uartContext;
	// USB Host configuration context
	usbhost_context_t usbhostContext;

	/* FTDI:EDD */

	/* FTDI:SKI Kernel Initialisation */
	vos_init(50, VOS_TICK_INTERVAL, VOS_NUMBER_DEVICES);
	vos_set_clock_frequency(VOS_48MHZ_CLOCK_FREQUENCY);
	vos_set_idle_thread_tcb_size(512);
	/* FTDI:EKI */

	iomux_setup();

	/* FTDI:SDI Driver Initialisation */
	// Initialise UART
	uartContext.buffer_size = VOS_BUFFER_SIZE_128_BYTES;
	uart_init(VOS_DEV_UART, &uartContext);

	// Initialise USB Host
	usbhostContext.if_count = 8;
	usbhostContext.ep_count = 16;
	usbhostContext.xfer_count = 2;
	usbhostContext.iso_xfer_count = 2;
	usbhost_init(VOS_DEV_USBHOST_1, -1, &usbhostContext);
	/* FTDI:EDI */

	usbhostGeneric_init(VOS_DEV_USBHOSTGENERIC);

	/* FTDI:SCT Thread Creation */
	tcbFIRMWARE = vos_create_thread_ex(20, 4096, firmware, "Application", 0);
	/* FTDI:ECT */

	vos_start_scheduler();

main_loop:
	goto main_loop;
}

/* FTDI:SSP Support Functions */

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

/* FTDI:ESP */

void open_drivers(void)
{
	/* Code for opening and closing drivers - move to required places in Application Threads */
	/* FTDI:SDA Driver Open */
	hUSBHOST_1 = vos_dev_open(VOS_DEV_USBHOST_1);
	hUART = vos_dev_open(VOS_DEV_UART);
	/* FTDI:EDA */
}

void attach_drivers(void)
{
	/* FTDI:SUA Layered Driver Attach Function Calls */
	/* FTDI:EUA */
}

void close_drivers(void)
{
	/* FTDI:SDB Driver Close */
	vos_dev_close(hUSBHOST_1);
	vos_dev_close(hUART);
	/* FTDI:EDB */
}

/* Application Threads */

void writeString(VOS_HANDLE hDev, char *str)
{
	vos_dev_write(hDev, (unsigned char *) str, strlen(str), NULL);
}

void writeShort(VOS_HANDLE hDev, unsigned short val)
{
	char str[4];
	unsigned char ch;

	ch = val >> 12;
	ch = ch & 0x0f;

	if (ch > 9)
		str[0] = 'A' - 10 + ch;
	else
		str[0] = '0' + ch;

	ch = val >> 8;
	ch = ch & 0x0f;

	if (ch > 9)
		str[1] = 'A' - 10 + ch;
	else
		str[1] = '0' + ch;

	ch = val >> 4;
	ch = ch & 0x0f;

	if (ch > 9)
		str[2] = 'A' - 10 + ch;
	else
		str[2] = '0' + ch;

	ch = val & 0x0f;

	if (ch > 9)
		str[3] = 'A' - 10 + ch;
	else
		str[3] = '0' + ch;

	vos_dev_write(hDev, (unsigned char *) str, 4, NULL);
}

void firmware(void)
{
	unsigned char i;
	unsigned char status;
	unsigned char buf[64];
	unsigned short num_read;
	unsigned int handle;
	char *startMsg = "Started\r\n";
	char *foundMsg = "Found\r\n";
	char *vidMsg = "VID: ";
	char *pidMsg = "PID: ";
	char *crMsg = "\r\n";
	common_ioctl_cb_t uart_iocb;
	usbhostGeneric_ioctl_t generic_iocb;
	usbhostGeneric_ioctl_cb_attach_t genericAtt;
	usbhost_device_handle_ex ifDev;
	usbhost_ioctl_cb_t hc_iocb;
	usbhost_ioctl_cb_vid_pid_t hc_iocb_vid_pid;

	open_drivers();

	/* UART ioctl call to enable DMA and link to DMA driver */
	uart_iocb.ioctl_code = VOS_IOCTL_COMMON_ENABLE_DMA;
	vos_dev_ioctl(hUART, &uart_iocb);

	writeString(hUART, startMsg);

	do
	{
		// see if bus available
		if (usbhost_connect_state(hUSBHOST_1) == PORT_STATE_ENUMERATED)
		{
			// user ioctl to find first hub device
			hc_iocb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_GET_NEXT_HANDLE;
			hc_iocb.handle.dif = NULL;
			hc_iocb.set = NULL;
			hc_iocb.get = &ifDev;

			if (vos_dev_ioctl(hUSBHOST_1, &hc_iocb) == USBHOST_OK)
			{
				writeString(hUART, foundMsg);

				hc_iocb.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_GET_VID_PID;
				hc_iocb.handle.dif = ifDev;
				hc_iocb.get = &hc_iocb_vid_pid;

				if (vos_dev_ioctl(hUSBHOST_1, &hc_iocb) == USBHOST_OK)
				{
					writeString(hUART, vidMsg);
					writeShort(hUART, hc_iocb_vid_pid.vid);
					writeString(hUART, crMsg);
					writeString(hUART, pidMsg);
					writeShort(hUART, hc_iocb_vid_pid.pid);
					writeString(hUART, crMsg);
				}

				hUSBHOSTGENERIC = vos_dev_open(VOS_DEV_USBHOSTGENERIC);

				genericAtt.hc_handle = hUSBHOST_1;
				genericAtt.ifDev = ifDev;

				generic_iocb.ioctl_code = VOS_IOCTL_USBHOSTGENERIC_ATTACH;
				generic_iocb.set.att = &genericAtt;

				if (vos_dev_ioctl(hUSBHOSTGENERIC, &generic_iocb) == USBHOSTGENERIC_OK)
				{
					while (1)
					{
						if (vos_dev_read(hUSBHOSTGENERIC, buf, 64, &num_read) == USBHOSTGENERIC_OK)
						{
							vos_dev_write(hUART, buf, num_read, NULL);
						}
						else
						{
							break;
						}
					}

					;
				}

				vos_dev_close(hUSBHOSTGENERIC);
			}
		}
	}
	while (1);
}

