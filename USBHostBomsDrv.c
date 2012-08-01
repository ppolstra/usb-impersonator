/*
** USBHostBomsDrv.c
**
** Based on USBHostGeneric example by FTDI
**
** Modifications by Philip A. Polstra, Sr.
**
** Part of the USB Mass Storage Device impersonator as presented at DEFCON 20
** Based on USB Write blocker presented at Blackhat Europe 2012
***
** Note that we could try to use the FTDI-supplied BOMS driver, but for our
** purposes we really just want to forward most of the packets.  Use of the
** standard driver might make things difficult when attempting to filter packets
** to/from our flash drive.
**
*/

#include "vos.h"
#include "USBHost.h"
#include "USB.h"
#include "string.h"
#include "USBHostBomsDrv.h"

vos_driver_t usbhostBoms_cb;

// open function
void usbhostBoms_open();

// close function
void usbhostBoms_close();


// USB Host IOCTL function
unsigned char usbhostBoms_ioctl(usbhostBoms_ioctl_t *cb,
								   usbhostBoms_context_t *ctx);

usbhostBoms_context_t *hostBomsCtx=NULL;

// This function must be called before the scheduler is started.
// The function registers our driver with the VOS device manager.
unsigned char usbhostBoms_init(unsigned char vos_dev_num)
{

	hostBomsCtx = vos_malloc(sizeof(usbhostBoms_context_t));
	memset(hostBomsCtx, 0, sizeof(usbhostBoms_context_t));

	// Set up function pointers for our driver
	usbhostBoms_cb.flags = 0;
	usbhostBoms_cb.read = usbhostBoms_read;
	usbhostBoms_cb.write = usbhostBoms_write;
	usbhostBoms_cb.ioctl = usbhostBoms_ioctl;
	usbhostBoms_cb.interrupt = (PF_INT) NULL;
	usbhostBoms_cb.open = usbhostBoms_open;
	usbhostBoms_cb.close = usbhostBoms_close;

	// OK - register with device manager
	vos_dev_init(vos_dev_num, &usbhostBoms_cb, hostBomsCtx);

	return USBHOSTBOMS_OK;
}

// open function
void usbhostBoms_open()
{
}

// close function
void usbhostBoms_close()
{
}

// USBHOSTBoms read function
unsigned char usbhostBoms_read(char *buf,
								  unsigned short num_to_read,
								  unsigned short *num_read,
								  usbhostBoms_context_t *ctx)
{
	unsigned short actual_read = 0;
	unsigned char status = USBHOSTBOMS_NOT_FOUND;
	usbhost_xfer_t xfer;
	vos_semaphore_t s;

	if (ctx->hc)
	{
		vos_init_semaphore(&s, 0);

		vos_memset(&xfer, 0, sizeof(usbhost_xfer_t));
		xfer.buf = buf;
		xfer.len = num_to_read;
		xfer.ep = ctx->epBulkIn;
		xfer.s = &s;
		xfer.cond_code = USBHOST_CC_NOTACCESSED;
		xfer.flags = USBHOST_XFER_FLAG_START_BULK_ENDPOINT_LIST | USBHOST_XFER_FLAG_ROUNDING;

		status = vos_dev_read(ctx->hc, (unsigned char *) &xfer, sizeof(usbhost_xfer_t), NULL);

		if (status == USBHOST_OK)
		{
			status = (unsigned char)USBHOSTBOMS_OK;
			actual_read = xfer.len;
		}
		else
		{
			status |= (unsigned char)USBHOSTBOMS_USBHOST_ERROR;
		}
	}

	if (num_read)
	{
		*num_read = actual_read;
	}

	return status;
}

// USBHOSTBoms write function
unsigned char usbhostBoms_write(char *buf,
								   unsigned short num_to_write,
								   unsigned short *num_written,
								   usbhostBoms_context_t *ctx)
{
	unsigned short actual_write = 0;
	unsigned char status = USBHOSTBOMS_NOT_FOUND;
	usbhost_xfer_t xfer;
	vos_semaphore_t s;

	if (ctx->hc)
	{
		vos_memset(&xfer, 0, sizeof(usbhost_xfer_t));
		vos_init_semaphore(&s, 0);

		xfer.buf = buf;
		xfer.len = num_to_write;
		xfer.ep = ctx->epBulkOut;
		xfer.s = &s;
		xfer.cond_code = USBHOST_CC_NOTACCESSED;
		xfer.flags = USBHOST_XFER_FLAG_START_BULK_ENDPOINT_LIST;
		status = vos_dev_write(ctx->hc, (unsigned char *) &xfer, sizeof(usbhost_xfer_t), NULL);

		if (status == USBHOST_OK)
		{
			status = (unsigned char)USBHOSTBOMS_OK;
			actual_write = xfer.len;
		}
		else
		{
			status |= (unsigned char)USBHOSTBOMS_USBHOST_ERROR;
		}
	}

	if (num_written)
	{
		*num_written = actual_write;
	}

	return status;
}

// SETUP for IOCTL call
unsigned char usbhostBoms_ioctl_setup(usbhostBoms_ioctl_t *cb, usbhostBoms_context_t *ctx)
{
	// USBHost IOCTL structure
	usbhost_ioctl_cb_t hc_ioctl;
	// setup transfer descriptor
	usb_deviceRequest_t desc_dev;
	unsigned char buf[2];
	unsigned char status;

	// setup Boms device
	desc_dev.bmRequestType = USB_BMREQUESTTYPE_DEV_TO_HOST |
		USB_BMREQUESTTYPE_STANDARD |
		USB_BMREQUESTTYPE_DEVICE;
	desc_dev.bRequest = USB_REQUEST_CODE_GET_STATUS;
	desc_dev.wValue = 0;
	desc_dev.wIndex = 0;
	desc_dev.wLength = 2;

	hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_SETUP_TRANSFER;
	hc_ioctl.handle.ep = ctx->epCtrl;
	hc_ioctl.set = &desc_dev;
	hc_ioctl.get = buf;

	status = vos_dev_ioctl(ctx->hc, &hc_ioctl);

	if (status == USBHOST_OK)
	{
		// return status low byte to caller
		cb->get.data = buf[0];
		return USBHOSTBOMS_OK;
	}

	return status | USBHOSTBOMS_USBHOST_ERROR;
}

// attach for IOCTL call
unsigned char usbhostBoms_attach(usbhostBoms_ioctl_t *cb, usbhostBoms_context_t *ctx)
{
	usbhostBoms_ioctl_cb_attach_t *atInfo;
	// ioctl request block
	usbhost_ioctl_cb_t hc_ioctl;
	usbhost_ioctl_cb_class_t hc_iocb_class;

	unsigned char status = USBHOSTBOMS_INVALID_PARAMETER;

	atInfo = cb->set.data;
	ctx->hc = atInfo->hc_handle;

	hc_iocb_class.dev_class = USB_CLASS_MASS_STORAGE;
	hc_iocb_class.dev_subclass = USB_SUBCLASS_MASS_STORAGE_SCSI;
	hc_iocb_class.dev_protocol = USB_PROTOCOL_MASS_STORAGE_BOMS;

	// user ioctl to find first hub device
	hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_FIND_HANDLE_BY_CLASS;
	hc_ioctl.handle.dif = NULL;
	hc_ioctl.set = &hc_iocb_class;
	hc_ioctl.get = &atInfo->ifDev;

	if (vos_dev_ioctl(ctx->hc, &hc_ioctl) != USBHOST_OK)
	{
		return USBHOSTBOMS_NOT_FOUND;
	}

	do
	{
		// user ioctl to find control endpoint on this device
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_GET_CONTROL_ENDPOINT_HANDLE;
		hc_ioctl.handle.dif = atInfo->ifDev;
		hc_ioctl.get = &ctx->epCtrl;

		if (vos_dev_ioctl(ctx->hc, &hc_ioctl) != USBHOST_OK)
		{
			status = (unsigned char)USBHOSTBOMS_NOT_FOUND;
			break;
		}

		// user ioctl to find bulk endpoint on this device
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_GET_BULK_IN_ENDPOINT_HANDLE;
		hc_ioctl.handle.dif = atInfo->ifDev;
		hc_ioctl.get = &ctx->epBulkIn;

		if (vos_dev_ioctl(ctx->hc, &hc_ioctl) != USBHOST_OK)
		{
			status = (unsigned char)USBHOSTBOMS_NOT_FOUND;
			break;
		}

		// user ioctl to find bulk endpoint on this device
		hc_ioctl.ioctl_code = VOS_IOCTL_USBHOST_DEVICE_GET_BULK_OUT_ENDPOINT_HANDLE;
		hc_ioctl.handle.dif = atInfo->ifDev;
		hc_ioctl.get = &ctx->epBulkOut;

		if (vos_dev_ioctl(ctx->hc, &hc_ioctl) != USBHOST_OK)
		{
			status = (unsigned char)USBHOSTBOMS_NOT_FOUND;
			break;
		}

		status = (unsigned char)USBHOSTBOMS_OK;
	}
	while (0);

	return status;
}

// detach for IOCTL call
void usbhostBoms_detach(usbhostBoms_context_t *ctx)
{
	// remove link to host controller and endpoints
	ctx->hc = NULL;
	ctx->epCtrl = NULL;
	ctx->epBulkIn = NULL;
	ctx->epBulkOut = NULL;
}

// USBHOSTBoms IOCTL function
unsigned char usbhostBoms_ioctl(usbhostBoms_ioctl_t *cb, usbhostBoms_context_t *ctx)
{
	unsigned char status = USBHOSTBOMS_INVALID_PARAMETER;

	switch (cb->ioctl_code)
	{
	case VOS_IOCTL_USBHOSTBOMS_STATUS:
		status = usbhostBoms_ioctl_setup(cb, ctx);
		break;

	case VOS_IOCTL_USBHOSTBOMS_ATTACH:
		status = usbhostBoms_attach(cb, ctx);
		break;

	case VOS_IOCTL_USBHOSTBOMS_DETACH:
		usbhostBoms_detach(ctx);
		status = (unsigned char)USBHOSTBOMS_OK;
		break;

	default:
		break;
	}

	return status;
}

