/* This file is based on Stephen J. Gowdy's list
 * It is used in the endpoint security bypass device by Philip A. Polstra, Sr.
 * March 2012
 * This software released under Creative Commons 2.5 Share & share alike.
#
#	List of USB ID's
#
#	Maintained by Stephen J. Gowdy <linux.usb.ids@gmail.com>
#	If you have any new entries, please submit them via
#		http://www.linux-usb.org/usb-ids.html
#	or send entries as patches (diff -u old new) in the
#	body of your email (a bot will attempt to deal with it).
#	The latest version can be obtained from
#		http://www.linux-usb.org/usb.ids
#
# Version: 2012.02.08
# Date:    2012-02-08 20:34:02
#

# Vendors, devices and interfaces. Please keep sorted.

# Syntax:
# vendor  vendor_name
#	device  device_name				<-- single tab
#		interface  interface_name		<-- two tabs
*/

unsigned short [] vidPid =
{
0x0204, //  Chipsbank Microelectronics Co., Ltd
 	0x6025, //  CBM2080 Flash drive controller
0x0204, //  Chipsbank Microelectronics Co., Ltd
 	0x6026, //  CBM1180 Flash drive controller
0x0324, //  OCZ Technology Inc
 	0xbc06, //  OCZ ATV USB 2.0 Flash Drive
0x0324, //  OCZ Technology Inc
 	0xbc08, //  OCZ Rally2/ATV USB 2.0 Flash Drive
0x0325, //  OCZ Technology Inc
 	0xac02, //  ATV Turbo / Rally2 Dual Channel USB 2.0 Flash Drive
0x03ee, //  Mitsumi
 	0x6901, //  SmartDisk FDD
0x03ee, //  Mitsumi
 	0x6902, //  Floppy Disk Drive
0x03f0, //  Hewlett-Packard
 	0x3207, //  4 GB flash drive
0x03f0, //  Hewlett-Packard
 	0x4002, //  PhotoSmart 635/715/720/735/935 (storage)
0x0402, //  ALi Corp.
 	0x5635, //  M5635 Flash Card Reader
0x0402, //  ALi Corp.
 	0x5636, //  USB 2.0 Storage Device
0x0404, //  NCR Corp.
 	0x0323, //  5932-USB Enhanced Keyboard, Flash-Recovery/Download
0x0404, //  NCR Corp.
 	0x0325, //  5953-USB Enhanced Dynakey Flash-Recovery/Download
0x0404, //  NCR Corp.
 	0x032b, //  K016/K018: USB-MSR Flash-Recovery/Download
0x0411, //  BUFFALO INC. (formerly MelCo., Inc.)
 	0x0089, //  Buffalo RUF-C/U2 Flash Drive
0x0416, //  Winbond Electronics Corp.
 	0x0961, //  AVL Flash Card Reader
0x041e, //  Creative Technology, Ltd
 	0x410f, //  NOMAD MuVo^2 (Flash)
0x0421, //  Nokia Mobile Phones
 	0x0024, //  5610 XpressMusic (Storage mode)
0x0421, //  Nokia Mobile Phones
 	0x002d, //  6120 Phone (Mass storage mode)
0x0421, //  Nokia Mobile Phones
 	0x006c, //  5310 Xpress music (Storage mode)
0x0421, //  Nokia Mobile Phones
 	0x006d, //  N95 (Storage mode)
0x0421, //  Nokia Mobile Phones
 	0x00aa, //  E71 (Mass storage mode)
0x0421, //  Nokia Mobile Phones
 	0x0103, //  ADL Flashing Engine AVALON Parent
0x0421, //  Nokia Mobile Phones
 	0x0104, //  ADL Re-Flashing Engine Parent
0x0421, //  Nokia Mobile Phones
 	0x0156, //  5800 XpressMusic (Storage mode)
0x0421, //  Nokia Mobile Phones
 	0x01b1, //  6303 classic Phone (Mass storage mode)
0x0421, //  Nokia Mobile Phones
 	0x01c7, //  N900 (Storage Mode)
0x0421, //  Nokia Mobile Phones
 	0x026a, //  N97 (mass storage)
0x0457, //  Silicon Integrated Systems Corp.
 	0x0150, //  Super Talent 1GB Flash Drive
0x0457, //  Silicon Integrated Systems Corp.
 	0x0151, //  Super Flash 1GB / GXT  64MB Flash Drive
0x045e, //  Microsoft Corp.
 	0x00ce, //  Generic PPC Flash device
0x0461, //  Primax Electronics, Ltd
 	0x081a, //  Fujifilm IX-30 Camera [storage mode]
0x0461, //  Primax Electronics, Ltd
 	0x081d, //  Elitegroup ECS-C11 Storage
0x0471, //  Philips (or NXP)
 	0x0844, //  SA2111/02 1GB Flash Audio Player
0x0474, //  Sanyo Electric Co., Ltd
 	0x022f, //  C5 Digital Media Camera (mass storage mode)
0x0480, //  Toshiba America Info. Systems, Inc.
 	0xa007, //  External Disk USB 3.0
0x0483, //  SGS Thomson Microelectronics
 	0x2302, //  Portable Flash Device (PFD)
0x0489, //  Foxconn / Hon Hai
 	0xd00c, //  Rollei Compactline (Storage Mode)
0x04a9, //  Canon, Inc.
 	0x1035, //  PD Printer Storage
0x04a9, //  Canon, Inc.
 	0x1715, //  MP180 Storage
0x04a9, //  Canon, Inc.
 	0x1718, //  MP600 Storage
0x04a9, //  Canon, Inc.
 	0x171a, //  MP810 Storage
0x04b0, //  Nikon Corp.
 	0x010e, //  Coolpix 4300 (storage)
0x04b0, //  Nikon Corp.
 	0x0114, //  Coolpix 3100 (storage)
0x04b0, //  Nikon Corp.
 	0x0124, //  Coolpix 8400 (mass storage mode)
0x04b0, //  Nikon Corp.
 	0x012c, //  Coolpix 4100 (storage)
0x04b0, //  Nikon Corp.
 	0x0136, //  Coolpix 7900 (storage)
0x04b0, //  Nikon Corp.
 	0x013a, //  Coolpix 100 (storage)
0x04b0, //  Nikon Corp.
 	0x0141, //  Coolpix P2 (storage)
0x04b0, //  Nikon Corp.
 	0x0203, //  Coolpix 4200 (mass storage mode)
0x04b0, //  Nikon Corp.
 	0x0205, //  Coolpix 5200 (storage)
0x04b0, //  Nikon Corp.
 	0x0301, //  Coolpix 2000 (storage)
0x04b0, //  Nikon Corp.
 	0x0403, //  D2H (mass storage mode)
0x04b0, //  Nikon Corp.
 	0x0405, //  D70 (mass storage mode)
0x04b0, //  Nikon Corp.
 	0x040f, //  D200 (mass storage mode)
0x04b0, //  Nikon Corp.
 	0x0413, //  D40 (mass storage mode)
0x04b4, //  Cypress Semiconductor Corp.
 	0x4611, //  Storage Adapter FX2 (CY)
0x04b4, //  Cypress Semiconductor Corp.
 	0x4616, //  Flash Disk (TPP)
0x04b4, //  Cypress Semiconductor Corp.
 	0x6831, //  Storage Adapter ISD-300LP (CY)
0x04b8, //  Seiko Epson Corp.
 	0x0804, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x0809, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x080a, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x0822, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x0824, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x0826, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x082c, //  Storage Device
0x04b8, //  Seiko Epson Corp.
 	0x082d, //  Storage Device
0x04bb, //  I-O Data Device, Inc.
 	0x0301, //  Storage Device
0x04bb, //  I-O Data Device, Inc.
 	0x0c01, //  FM-10 Pro Disk
0x04d8, //  Microchip Technology, Inc.
 	0x000b, //  PIC18F2550 (32K Flashable 10 Channel, 10 Bit A/D USB Microcontroller)
0x04da, //  Panasonic (Matsushita)
 	0x0b03, //  SuperDisk 240MB
0x04e6, //  SCM Microsystems, Inc.
 	0x0005, //  eUSB SmartMedia/CompactFlash Card Reader
0x04e6, //  SCM Microsystems, Inc.
 	0x000a, //  eUSB CompactFlash Adapter
0x04e6, //  SCM Microsystems, Inc.
 	0x1010, //  USBAT-2 CompactFlash Card Reader
0x04e8, //  Samsung Electronics Co., Ltd
 	0x0100, //  Kingston Flash Drive (128MB)
0x04e8, //  Samsung Electronics Co., Ltd
 	0x0110, //  Connect3D Flash Drive
0x04e8, //  Samsung Electronics Co., Ltd
 	0x0111, //  Connect3D Flash Drive
0x04f1, //  Victor Company of Japan, Ltd
 	0x0006, //  DV Camera Storage
0x04f9, //  Brother Industries, Ltd
 	0x0132, //  MFC-5200C RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x013e, //  MFC-4420C RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x013f, //  MFC-4820C RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x0144, //  DCP-4020C RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x0163, //  MFC-410CN RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x0166, //  MFC-610CLN RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x0169, //  DCP-110C RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x016b, //  DCP-310CN RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x0174, //  MFC-3340CN RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x01ae, //  DCP-750CW RemovableDisk
0x04f9, //  Brother Industries, Ltd
 	0x01be, //  DCP-750CN RemovableDisk
0x050d, //  Belkin Components
 	0x0249, //  USB 2 Flash Media Device
0x0525, //  Netchip Technology, Inc.
 	0x1265, //  File-backed Storage Gadget
0x0525, //  Netchip Technology, Inc.
 	0xa4a5, //  Linux-USB File Storage Gadget
0x052b, //  Tekom Technologies, Inc.
 	0x1514, //  Aosta CX100 Webcam Storage
0x0548, //  Tyan Computer Corp.
 	0x1005, //  EZ Cart II GameBoy Flash Programmer
0x054c, //  Sony Corp.
 	0x0022, //  Storage Adapter V2 (TPP)
0x054c, //  Sony Corp.
 	0x002c, //  USB Floppy Disk Drive
0x054c, //  Sony Corp.
 	0x0030, //  Storage Adapter V2 (TPP)
0x055d, //  Samsung Electro-Mechanics Co.
 	0x2020, //  Floppy Disk Drive
0x056e, //  Elecom Co., Ltd
 	0x6008, //  Flash Disk
0x057b, //  Y-E Data, Inc.
 	0x0000, //  FlashBuster-U Floppy
0x058c, //  In Focus Systems
 	0x0007, //  Flash
0x058f, //  Alcor Micro Corp.
 	0x1234, //  Flash Drive
0x058f, //  Alcor Micro Corp.
 	0x6232, //  Hi-Speed 16-in-1 Flash Card Reader/Writer
0x058f, //  Alcor Micro Corp.
 	0x6362, //  Flash Card Reader/Writer
0x058f, //  Alcor Micro Corp.
 	0x6366, //  Multi Flash Reader
0x058f, //  Alcor Micro Corp.
 	0x6387, //  Transcend JetFlash Flash Drive
0x0595, //  Zoran Microelectronics, Ltd
 	0x1001, //  Digitrex DSC-1300/DSC-2100 (mass storage mode)
0x059b, //  Iomega Corp.
 	0x0021, //  Win98 Disk Controller
0x059f, //  LaCie, Ltd
 	0x0421, //  Big Disk G465
0x059f, //  LaCie, Ltd
 	0x1021, //  Little Disk
0x05ab, //  In-System Design
 	0x0030, //  Storage Adapter V2 (TPP)
0x05ab, //  In-System Design
 	0x0061, //  Storage Adapter V3 (TPP-I)
0x05ab, //  In-System Design
 	0x0101, //  Storage Adapter (TPP)
0x05ab, //  In-System Design
 	0x0130, //  Compact Flash and Microdrive Reader (TPP)
0x05ab, //  In-System Design
 	0x0201, //  Storage Adapter (TPP)
0x05ab, //  In-System Design
 	0x5700, //  Storage Adapter V2 (TPP)
0x05ab, //  In-System Design
 	0x5701, //  USB Storage Adapter V2
0x05ab, //  In-System Design
 	0x5a01, //  ATI Storage Adapter (TPP)
0x05dc, //  Lexar Media, Inc.
 	0x0001, //  jumpSHOT CompactFlash Reader
0x05dc, //  Lexar Media, Inc.
 	0x0081, //  RBC Compact Flash Drive
0x05e3, //  Genesys Logic, Inc.
 	0x0700, //  SIIG US2256 CompactFlash Card Reader
0x05e3, //  Genesys Logic, Inc.
 	0x070a, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
 	0x070f, //  Pen Flash
0x061a, //  Veridicom International, Inc.
 	0x8200, //  VKI-A Fingerprint Sensor/Flash Storage (dumb)
0x061a, //  Veridicom International, Inc.
 	0x9200, //  VKI-B Fingerprint Sensor/Flash Storage (smart)
0x066b, //  Linksys, Inc.
 	0x010a, //  Melco MCR-U2 SmartMedia / CompactFlash Reader
0x067b, //  Prolific Technology, Inc.
 	0x2315, //  Flash Disk Embedded Hub
0x067b, //  Prolific Technology, Inc.
 	0x2316, //  Flash Disk Security Device
0x0693, //  Hagiwara Sys-Com Co., Ltd
 	0x0002, //  FlashGate SmartMedia Card Reader
0x0693, //  Hagiwara Sys-Com Co., Ltd
 	0x0003, //  FlashGate CompactFlash Card Reader
0x0693, //  Hagiwara Sys-Com Co., Ltd
 	0x0005, //  FlashGate
0x0693, //  Hagiwara Sys-Com Co., Ltd
 	0x0007, //  FlashGate ME (Authenticated)
0x06d6, //  Aashima Technology B.V.
 	0x003a, //  Trust PowerC@m 770Z (mass storage mode)
0x0718, //  Imation Corp.
 	0x0002, //  SuperDisk 120MB
0x0718, //  Imation Corp.
 	0x0003, //  SuperDisk 120MB (Authenticated)
0x0718, //  Imation Corp.
 	0x0060, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0061, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0062, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0063, //  Swivel Flash Drive
0x0718, //  Imation Corp.
 	0x0064, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0065, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0066, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0067, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0068, //  Flash Drive
0x0718, //  Imation Corp.
 	0x0084, //  Flash Drive Mini
0x0718, //  Imation Corp.
 	0x0582, //  Revo Flash Drive
0x0781, //  SanDisk Corp.
 	0x0001, //  SDDR-05a ImageMate CompactFlash Reader
0x0781, //  SanDisk Corp.
 	0x0002, //  SDDR-31 ImageMate II CompactFlash Reader
0x0781, //  SanDisk Corp.
 	0x0005, //  SDDR-05b (CF II) ImageMate CompactFlash Reader
0x0781, //  SanDisk Corp.
 	0x1234, //  Cruzer Mini Flash Drive
0x0781, //  SanDisk Corp.
 	0x5150, //  SDCZ2 Cruzer Mini Flash Drive (thin)
0x0781, //  SanDisk Corp.
 	0x5151, //  Cruzer Micro Flash Drive
0x0781, //  SanDisk Corp.
 	0x5153, //  Cruzer Flash Drive
0x0781, //  SanDisk Corp.
 	0x540e, //  Cruzer Contour Flash Drive
0x0781, //  SanDisk Corp.
 	0x7101, //  Pen Flash
0x0781, //  SanDisk Corp.
 	0x7104, //  Cruzer Micro Mini 256MB Flash Drive
0x0781, //  SanDisk Corp.
 	0x7112, //  Cruzer Micro 128MB Flash Drive
0x0781, //  SanDisk Corp.
 	0x7113, //  Cruzer Micro 256MB Flash Drive
0x0781, //  SanDisk Corp.
 	0x8181, //  Pen Flash
0x07af, //  Microtech
 	0x0006, //  CameraMate SmartMedia and CompactFlash Card Reader [eusb/shuttle]
0x07b8, //  AboCom Systems Inc
 	0xb02c, //  BCM92045DG-Flash with trace filter
0x07b8, //  AboCom Systems Inc
 	0xb02d, //  BCM92045DG-Flash with trace filter
0x07b8, //  AboCom Systems Inc
 	0xb02e, //  BCM92045DG-Flash with trace filter
0x07b8, //  AboCom Systems Inc
 	0xb030, //  BCM92045DG-Flash with trace filter
0x07b8, //  AboCom Systems Inc
 	0xb031, //  BCM92045DG-Flash with trace filter
0x07b8, //  AboCom Systems Inc
 	0xb032, //  BCM92045DG-Flash with trace filter
0x07b8, //  AboCom Systems Inc
 	0xb033, //  BCM92045DG-Flash with trace filter
0x07c4, //  Datafab Systems, Inc.
 	0xa000, //  CompactFlash Card Reader
0x07c4, //  Datafab Systems, Inc.
 	0xa001, //  CompactFlash & SmartMedia Card Reader [eusb]
0x07c4, //  Datafab Systems, Inc.
 	0xa002, //  Disk Drive
0x07c4, //  Datafab Systems, Inc.
 	0xa005, //  CompactFlash & SmartMedia Card Reader
0x07c4, //  Datafab Systems, Inc.
 	0xa109, //  LC1 CompactFlash & SmartMedia Card Reader
0x07c4, //  Datafab Systems, Inc.
 	0xa400, //  CompactFlash & Microdrive Reader
0x07cf, //  Casio Computer Co., Ltd
 	0x1133, //  Exilim EX-Z350 Digital Camera (mass storage mode)
0x07d0, //  Dazzle
 	0x2001, //  eUSB CompactFlash Reader
0x07f7, //  Century Corp.
 	0x011e, //  Century USB Disk Enclosure
0x081b, //  Indigita Corp.
 	0x0600, //  Storage Adapter
0x081b, //  Indigita Corp.
 	0x0601, //  Storage Adapter
0x0840, //  Argosy Research, Inc.
 	0x0060, //  Storage Adapter Bridge Module
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1002, //  Eumex 504PC (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1004, //  TA33 (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1006, //  Eumex 604PC HomeNet (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1008, //  Eumex 704PC DSL (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x100a, //  Eumex 724PC DSL (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x100c, //  OpenCom 30 (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x100e, //  BeeTel Home 100 (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1012, //  USB2DECT (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1014, //  Eumex 704PC LAN (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x101a, //  Eumex 504 SE (Flash-Mode)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1022, //  OpenCom 40 (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1024, //  OpenCom 45 (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x102c, //  Eumex 604PC HomeNet [FlashLoad]
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1030, //  Eumex 704PC DSL [FlashLoad]
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1032, //  OpenCom 40 [FlashLoad]
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1034, //  OpenCom 30 plus (FlashLoad)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1042, //  Eumex 220PC (FlashMode)
0x086c, //  DeTeWe - Deutsche Telephonwerke AG & Co.
 	0x1056, //  Eumex 220 Version 2 ISDN TA (Flash-Mode)
0x0871, //  SanDisk, Inc.
 	0x0001, //  SDDR-01 Compact Flash Reader
0x0871, //  SanDisk, Inc.
 	0x0002, //  SDDR-31 Compact Flash Reader
0x0871, //  SanDisk, Inc.
 	0x0005, //  SDDR-05 Compact Flash Reader
0x088e, //  iLok
 	0x5036, //  Portable secure storage for software licenses
0x08ca, //  Aiptek International, Inc.
 	0x0105, //  Mega DV(Disk)
0x08ec, //  M-Systems Flash Disk Pioneers
 	0x0010, //  DiskOnKey
0x08ec, //  M-Systems Flash Disk Pioneers
 	0x0011, //  DiskOnKey
0x090a, //  Trumpion Microelectronics, Inc.
 	0x1001, //  T33520 Flash Card Controller
0x090a, //  Trumpion Microelectronics, Inc.
 	0x1540, //  Digitex Container Flash Disk
0x0917, //  SmartDisk Corp.
 	0x0204, //  FlashTrax Storage
0x0930, //  Toshiba Corp.
 	0x653e, //  Flash Memory
0x0930, //  Toshiba Corp.
 	0x6540, //  TransMemory Flash Memory
0x0930, //  Toshiba Corp.
 	0x6545, //  Kingston DataTraveler 102 Flash Drive / HEMA Flash Drive 2 GB / PNY Attache 4GB Stick
0x093b, //  Plextor Corp.
 	0x0010, //  Storage Adapter
0x0951, //  Kingston Technology
 	0x1613, //  DataTraveler DT101C Flash Drive
0x0984, //  Apricorn
 	0x0200, //  Hard Drive Storage (TPP)
0x0a12, //  Cambridge Silicon Radio, Ltd
 	0x0101, //  Casira with BlueCore2-Flash Module
0x0a12, //  Cambridge Silicon Radio, Ltd
 	0x0103, //  Casira with BlueCore3-Flash Module
0x0a17, //  Pentax Corp.
 	0x000c, //  Optio 43WR (mass storage mode)
0x0a17, //  Pentax Corp.
 	0x003b, //  Optio 50 (mass storage mode)
0x0a6b, //  Green House Co., Ltd
 	0x0001, //  Compact Flash R/W with MP3 player
0x0a6b, //  Green House Co., Ltd
 	0x000f, //  FlashDisk
0x0aec, //  Neodio Technologies Corp.
 	0x2102, //  CompactFlash Card Reader
0x0aec, //  Neodio Technologies Corp.
 	0x2201, //  SmartMedia+CompactFlash Card Reader
0x0aec, //  Neodio Technologies Corp.
 	0x2204, //  CompactFlash+MMC/SD Card Reader
0x0aec, //  Neodio Technologies Corp.
 	0x2205, //  CompactFlash+MemoryStick Card Reader
0x0aec, //  Neodio Technologies Corp.
 	0x2301, //  SmartMedia+CompactFlash+MMC/SD Card Reader
0x0aec, //  Neodio Technologies Corp.
 	0x2302, //  SmartMedia+CompactFlash+MemoryStick Card Reader
0x0aec, //  Neodio Technologies Corp.
 	0x2304, //  CompactFlash+MMC/SD+MemoryStick Card Reader
0x0b86, //  Exputer Systems, Inc.
 	0x5110, //  XMC5110 Flash Drive
0x0b86, //  Exputer Systems, Inc.
 	0x5280, //  XMC5280 Storage Drive
0x0bc2, //  Seagate RSS LLC
 	0x2000, //  Storage Adapter V3 (TPP)
0x0bf6, //  Addonics Technologies, Inc.
 	0x0103, //  Storage Device
0x0bf6, //  Addonics Technologies, Inc.
 	0x1234, //  Storage Device
0x0c08, //  Agate
 	0x0378, //  Q 16MB Storage Device
0x0c0b, //  Dura Micro, Inc. (Acomdata)
 	0x27cb, //  6-in-1 Flash Reader and Writer
0x0c0b, //  Dura Micro, Inc. (Acomdata)
 	0x5fab, //  Storage Adaptor
0x0caf, //  Buslink
 	0x2515, //  Flash Disk Embedded Hub
0x0caf, //  Buslink
 	0x2516, //  Flash Disk Security Device
0x0ccd, //  TerraTec Electronic GmbH
 	0x0015, //  Flash Update for TerraTec PHASE 26
0x0d08, //  UTStarcom
 	0x0603, //  DV007 [storage]
0x0d46, //  Kobil Systems GmbH
 	0x4000, //  mIDentity (mass storage)
0x0d49, //  Maxtor
 	0x3200, //  Personal Storage 3200
0x0d49, //  Maxtor
 	0x5020, //  Mobile Hard Disk Drive
0x0d49, //  Maxtor
 	0x7410, //  Mobile Hard Disk Drive (1TB)
0x0d7d, //  Phison Electronics Corp.
 	0x0100, //  PS1001/1011/1006/1026 Flash Disk
0x0d7d, //  Phison Electronics Corp.
 	0x0120, //  Disk Pro 64MB
0x0d7d, //  Phison Electronics Corp.
 	0x0124, //  GIGABYTE Disk
0x0d7d, //  Phison Electronics Corp.
 	0x1300, //  Flash Disk
0x0d7d, //  Phison Electronics Corp.
 	0x1320, //  PS2031 Flash Disk
0x0d7d, //  Phison Electronics Corp.
 	0x1400, //  Attache 256MB USB 2.0 Flash Drive
0x0d7d, //  Phison Electronics Corp.
 	0x1620, //  USB Disk Pro
0x0db0, //  Micro Star International
 	0x4011, //  Medion Flash XL V2.0 Card Reader
0x0dbf, //  Jess-Link International
 	0x0200, //  HDD Storage Solution
0x0dbf, //  Jess-Link International
 	0x0300, //  Storage Adapter
0x0dbf, //  Jess-Link International
 	0x0333, //  Storage Adapter
0x0dd8, //  Netac Technology Co., Ltd
 	0xe007, //  OnlyDisk U222 Pendrive
0x0dd8, //  Netac Technology Co., Ltd
 	0xf607, //  OnlyDisk U208 1G flash drive [U-SAFE]
0x0dda, //  Integrated Circuit Solution, Inc.
 	0x0003, //  Flash Disk
0x0dda, //  Integrated Circuit Solution, Inc.
 	0x1001, //  Multi-Flash Disk
0x0dee, //  Lifetime Memory Products
 	0x4010, //  Storage Adapter
0x0e90, //  WiebeTech, LLC
 	0x0100, //  Storage Adapter V1
0x0ea0, //  Ours Technology, Inc.
 	0x2168, //  Transcend JetFlash 2.0 / Astone USB Drive
0x0ea0, //  Ours Technology, Inc.
 	0x6803, //  OTI-6803 Flash Disk
0x0ea0, //  Ours Technology, Inc.
 	0x6808, //  OTI-6808 Flash Disk
0x0ea0, //  Ours Technology, Inc.
 	0x6828, //  OTI-6828 Flash Disk
0x0ed1, //  WinMaxGroup
 	0x6660, //  Flash Disk 64M-C
0x0ed1, //  WinMaxGroup
 	0x6680, //  Flash Disk 64M-B
0x0ef5, //  PointChips
 	0x2202, //  Flash Disk
0x0ef5, //  PointChips
 	0x2366, //  Flash Disk
0x0f6e, //  INTELLIGENT SYSTEMS
 	0x0201, //  GameBoy Advance Flash Gang Writer
0x1005, //  Apacer Technology, Inc.
 	0xb223, //  CD-RW + 6in1 Card Reader Digital Storage / Converter
0x1019, //  Elitegroup Computer Systems (ECS)
 	0x0c55, //  Flash Reader, Desknote UCR-61S2B
0x1043, //  iCreate Technologies Corp.
 	0x8006, //  Flash Disk 32-256 MB
0x1043, //  iCreate Technologies Corp.
 	0x8012, //  Flash Disk 256 MB
0x1058, //  Western Digital Technologies, Inc.
 	0x1001, //  External Hard Disk [Elements]
0x1065, //  CCYU Technology
 	0x2136, //  EasyDisk ED1064
0x116f, //  Silicon 10 Technology Corp.
 	0x0005, //  Flash Card Reader
0x116f, //  Silicon 10 Technology Corp.
 	0xc108, //  Flash Card Reader
0x116f, //  Silicon 10 Technology Corp.
 	0xc109, //  Flash Card Reader
0x125f, //  A-DATA Technology Co., Ltd.
 	0xc81a, //  Flash drive
0x126f, //  TwinMOS
 	0x1325, //  Mobile Disk
0x126f, //  TwinMOS
 	0x2168, //  Mobile Disk III
0x1291, //  Qualcomm Flarion Technologies, Inc. / Leadtek Research, Inc.
 	0x0010, //  FDM 2xxx Flash-OFDM modem
0x1291, //  Qualcomm Flarion Technologies, Inc. / Leadtek Research, Inc.
 	0x0011, //  LR7F06/LR7F14 Flash-OFDM modem
0x12f7, //  Memorex Products, Inc.
 	0x1e23, //  TravelDrive 2007 Flash Drive
0x1307, //  Transcend Information, Inc.
 	0x0163, //  256MB/512MB/1GB Flash Drive
0x1307, //  Transcend Information, Inc.
 	0x0165, //  2GB/4GB Flash Drive
0x1307, //  Transcend Information, Inc.
 	0x1169, //  TS2GJF210 JetFlash 210 2GB
0x132b, //  Konica Minolta
 	0x000d, //  Dimage X50 Camera [storage?]
0x1370, //  Swissbit
 	0x6828, //  Victorinox Flash Drive
0x1398, //  Q-tec
 	0x2103, //  USB 2.0 Storage Device
0x13fe, //  Kingston Technology Company Inc.
 	0x1a00, //  512MB/1GB Flash Drive
0x13fe, //  Kingston Technology Company Inc.
 	0x1a23, //  512MB Flash Drive
0x13fe, //  Kingston Technology Company Inc.
 	0x1d00, //  DataTraveler 2.0 1GB/4GB Flash Drive / Patriot Xporter 4GB Flash Drive
0x13fe, //  Kingston Technology Company Inc.
 	0x1e00, //  Flash Drive 2 GB [ICIDU 2 GB]
0x13fe, //  Kingston Technology Company Inc.
 	0x1f00, //  DataTraveler 2.0 4GB Flash Drive / Patriot Xporter 32GB (PEF32GUSB) Flash Drive
0x13fe, //  Kingston Technology Company Inc.
 	0x3800, //  Rage XT Flash Drive
0x1457, //  First International Computer, Inc.
 	0x5121, //  OpenMoko Neo1973 kernel mass storage (g_storage) mode
0x1462, //  Micro Star International
 	0x5512, //  MegaStick-1 Flash Stick
0x14c2, //  Gemlight Computer, Ltd
 	0x0250, //  Storage Adapter V2
0x14c2, //  Gemlight Computer, Ltd
 	0x0350, //  Storage Adapter V2
0x1514, //  Actel
 	0x2003, //  FlashPro3 Programmer
0x1514, //  Actel
 	0x2004, //  FlashPro3 Programmer
0x1514, //  Actel
 	0x2005, //  FlashPro3 Programmer
0x1516, //  CompUSA
 	0x1603, //  Flash Drive
0x152d, //  JMicron Technology Corp. / JMicron USA Technology Corp.
 	0x2336, //  Hard Disk Drive
0x154b, //  PNY
 	0x0010, //  USB 2.0 Flash Drive
0x15a4, //  Afatech Technologies, Inc.
 	0x1336, //  SDHC/MicroSD/MMC/MS/M2/CF/XD Flash Card Reader
0x1687, //  Kingmax Digital Inc.
 	0x5289, //  FlashDisk
0x1687, //  Kingmax Digital Inc.
 	0x6211, //  FlashDisk
0x16c0, //  VOTI
 	0x0484, //  Teensyduino Disk
0x1976, //  Chipsbrand Microelectronics (HK) Co., Ltd.
 	0x6025, //  Flash Drive 512 MB
0x1b1c, //  Corsair
 	0x0890, //  Flash Padlock
0x1b1c, //  Corsair
 	0x1a90, //  Flash Voyager GT
0x1de1, //  Actions Microelectronics Co.
 	0x1101, //  Generic Display Device (Mass storage mode)
0x22b8, //  Motorola PCS
 	0x0833, //  2386C-HT820 [Flash Mode]
0x22b8, //  Motorola PCS
 	0x1801, //  Rainbow chipset flash
0x22b8, //  Motorola PCS
 	0x2823, //  Flash Interface
0x22b8, //  Motorola PCS
 	0x2a03, //  MSM6050 chipset flash
0x22b8, //  Motorola PCS
 	0x2a23, //  MSM6100 chipset flash
0x22b8, //  Motorola PCS
 	0x2a43, //  MSM6300 chipset flash
0x22b8, //  Motorola PCS
 	0x2a63, //  MSM6500 chipset flash
0x22b8, //  Motorola PCS
 	0x2a83, //  MSM6025 chipset flash
0x22b8, //  Motorola PCS
 	0x2ac3, //  MSM6100 chipset flash
0x22b8, //  Motorola PCS
 	0x3803, //  Neptune LT chipset flash
0x22b8, //  Motorola PCS
 	0x4003, //  OMAP 1.0 chipset flash
0x22b8, //  Motorola PCS
 	0x4285, //  Droid X (Mass storage)
0x22b8, //  Motorola PCS
 	0x4803, //  Neptune LTS chipset flash
0x22b8, //  Motorola PCS
 	0x4810, //  Triplet GSM Phone (storage)
0x22b8, //  Motorola PCS
 	0x4903, //  Neptune LTE chipset flash
0x22b8, //  Motorola PCS
 	0x4a03, //  Neptune LTX chipset flash
0x22b8, //  Motorola PCS
 	0x5803, //  Neptune ULS chipset flash
0x22b8, //  Motorola PCS
 	0x5903, //  Neptune VLT chipset flash
0x22b8, //  Motorola PCS
 	0x6003, //  Dalhart flash
0x22b8, //  Motorola PCS
 	0x6023, //  JUIX chipset flash
0x22b8, //  Motorola PCS
 	0x6026, //  Flash RAM Downloader/miniOS
0x22b8, //  Motorola PCS
 	0x604c, //  EZX GSM Phone (Storage)
0x22b8, //  Motorola PCS
 	0x6403, //  Argon chipset flash
0x2304, //  Pinnacle Systems, Inc.
 	0x0228, //  PCTV DVB-T Flash Stick
0x2406, //  SANHO Digital Electronics Co., Ltd.
 	0x6688, //  PD7X Portable Storage
0x3538, //  Power Quotient International Co., Ltd
 	0x0001, //  Travel Flash
0x4146, //  USBest Technology
 	0x9281, //  Iomega Micro Mini 128MB Flash Drive
0x4146, //  USBest Technology
 	0xba01, //  Intuix Flash Drive
0x4586, //  Panram
 	0x1026, //  Crystal Bar Flash Drive
0x55aa, //  OnSpec Electronic, Inc.
 	0x0102, //  SuperDisk
0x55aa, //  OnSpec Electronic, Inc.
 	0xb000, //  USB to CompactFlash Card Reader
0x55aa, //  OnSpec Electronic, Inc.
 	0xb200, //  Compact Flash Reader
0x5656, //  Uni-Trend Group Limited
 	0x0832, //  UT2000/UT3000 Digital Storage Oscilloscope
0x8086, //  Intel Corp.
 	0xf001, //  XScale PXA27x Bulverde flash
0x8341, //  EGO Systems, Inc.
 	0x2000, //  Flashdisk
};