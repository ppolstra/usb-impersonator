/*
** Filename: USBSlaveBoms.h
**
** Automatically created by Application Wizard 1.4.2
**
** Part of solution USBSlaveBoms in project USBSlaveBoms
**
** Based on USBSlaveHIDKbd example by FTDI
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

#ifndef _USBSlaveBoms_H_
#define _USBSlaveBoms_H_

#include "vos.h"
#include "USB.h"
#include "USBSlave.h"
#include "USBHost.h"
#include "BomsDefs.h"

#define VOS_NUMBER_DEVICES	   7

// for additional drivers
#define VOS_DEV_USBHOST_2 	 0
#define VOS_DEV_USBHOSTBOMS  1
#define VOS_DEV_USBSLAVE_1   2
#define VOS_DEV_USBSLAVEBOMS 3
#define VOS_DEV_GPIO_PORT_E  4
#define TIMER0				 5
#define VOS_DEV_GPIO_PORT_B  6

// define standard SCSI requests to be handled
#define BOMS_FORMAT_UNIT 0x04 //definitely block!
#define BOMS_INQUIRY 0x12
#define BOMS_MODE_SELECT_6 0x15
#define BOMS_MODE_SELECT_10 0x55
#define BOMS_MODE_SENSE_6 0x1a
#define BOMS_MODE_SENSE_10 0x5a
#define BOMS_PREVENT_ALLOW_REMOVAL 0x1e
#define BOMS_READ_6 0x08
#define BOMS_READ_10 0x28
#define BOMS_READ_12 0xa8
#define BOMS_READ_CAPACITY 0x25
#define BOMS_READ_FORMAT_CAPACITIES 0x23
#define BOMS_READ_TOC_PMA_ATIP 0x43
#define BOMS_REPORT_LUNS 0xa0
#define BOMS_REQUEST_SENSE 0x03
#define BOMS_SEND_DIAGNOSTIC 0x1d
#define BOMS_START_STOP_UNIT 0x1b
#define BOMS_SYCHRONIZE_CACHE 0x35
#define BOMS_TEST_UNIT_READY 0x00
#define BOMS_VERIFY 0x2f
#define BOMS_WRITE_6 0x0a //block?
#define BOMS_WRITE_10 0x2a //block?
#define BOMS_WRITE_12 0xaa //block?

#endif                                 /* _USBSlaveBoms_H_ */
