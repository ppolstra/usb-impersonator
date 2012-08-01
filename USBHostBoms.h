/*
** Filename: USBHostGeneric.h
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

#ifndef _USBHostGeneric_H_
#define _USBHostGeneric_H_

#include "vos.h"

/* FTDI:SHF Header Files */
#include "USB.h"
#include "USBHost.h"
#include "ioctl.h"
#include "UART.h"
#include "string.h"
#include "errno.h"
/* FTDI:EHF */

/* FTDI:SDC Driver Constants */
#define VOS_DEV_USBHOST_1	   0
#define VOS_DEV_UART		   1

#define VOS_NUMBER_DEVICES	   3
/* FTDI:EDC */

// Additional Device Driver
#define VOS_DEV_USBHOSTGENERIC 2

/* FTDI:SXH Externs */
/* FTDI:EXH */

#endif                                 /* _USBHostGeneric_H_ */
