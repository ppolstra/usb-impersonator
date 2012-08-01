/*
** USBHostBomsDrv.h
**
** Based on USBHostGeneric example by FTDI
**
** Modifications by Philip A. Polstra, Sr.
**
** Part of the USB Mass Storage Device impersonator as presented at DEFCON 20
** Based on USB Write blocker presented at Blackhat Europe 2012
**
** Note that we could try to use the FTDI-supplied BOMS driver, but for our
** purposes we really just want to forward most of the packets.  Use of the
** standard driver might make things difficult when attempting to filter packets
** to/from our flash drive.
**
*/

#ifndef USBHOSTBOMSDRV_H
#define USBHOSTBOMSDRV_H

#include "BomsDefs.h" // include CBW and CSW defs

enum USBHOSTBOMS_STATUS {
	USBHOSTBOMS_OK = 0,
	USBHOSTBOMS_INVALID_PARAMETER,
	USBHOSTBOMS_ERROR,
	USBHOSTBOMS_NOT_FOUND,
	USBHOSTBOMS_USBHOST_ERROR = 0x80
};

// USBHostBoms Context
//
// Holds a context structure required by each instance of the driver
typedef struct _usbhostBoms_context_t
{
	// host controller handle
	VOS_HANDLE			 hc;

	// endpoint handles
	usbhost_ep_handle_ex epCtrl;
	usbhost_ep_handle_ex epBulkIn;
	usbhost_ep_handle_ex epBulkOut;
} usbhostBoms_context_t;

#define VOS_IOCTL_USBHOSTBOMS_ATTACH 1
#define VOS_IOCTL_USBHOSTBOMS_DETACH 2
#define VOS_IOCTL_USBHOSTBOMS_STATUS 3

// USBHostBoms IOCTL attach structure
typedef struct _usbhostBoms_ioctl_cb_attach_t
{
	VOS_HANDLE				 hc_handle;
	usbhost_device_handle_ex ifDev;
} usbhostBoms_ioctl_cb_attach_t;

// USBHostBoms IOCTL structure
typedef struct _usbhostBoms_ioctl_t {
	unsigned char ioctl_code;
	union
	{
		unsigned char					 *data;
		usbhostBoms_ioctl_cb_attach_t *att;
	} set;
	union
	{
		unsigned char *data;
	} get;
} usbhostBoms_ioctl_t;

unsigned char usbhostBoms_init(unsigned char vos_dev_num);

// read function
unsigned char usbhostBoms_read(
	char *xfer,
	unsigned short num_to_read,
	unsigned short *num_read,
	usbhostBoms_context_t *ctx);

// write function
unsigned char usbhostBoms_write(
	char *xfer,
	unsigned short num_to_write,
	unsigned short *num_written,
	usbhostBoms_context_t *ctx);


#endif                                 /* USBHOSTBOMSDRV_H */

