/* This file is based on Stephen J. Gowdy's list
 * It is used in the endpoint security bypass device by Philip A. Polstra, Sr.
 * March 2012
 * This software released under Creative Commons 2.5 Share & share alike.

** Part of the USB Mass Storage Device impersonator as presented at DEFCON 20
** Based on USB Write blocker presented at Blackhat Europe 2012
*
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

rom unsigned short vidPid[] = {
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
	0x0000, //  CD-R/RW Drive
0x03ee, //  Mitsumi
	0x6901, //  SmartDisk FDD
0x03ee, //  Mitsumi
	0x6902, //  Floppy Disk Drive
0x0402, //  ALi Corp.
	0x5635, //  M5635 Flash Card Reader
0x0404, //  NCR Corp.
	0x0323, //  5932-USB Enhanced Keyboard, Flash-Recovery/Download
0x0404, //  NCR Corp.
	0x0325, //  5953-USB Enhanced Dynakey Flash-Recovery/Download
0x0404, //  NCR Corp.
	0x032b, //  K016/K018: USB-MSR Flash-Recovery/Download
0x0409, //  NEC Corp.
	0x002c, //  Clik!-USB Drive
0x0411, //  BUFFALO INC. (formerly MelCo., Inc.)
	0x0089, //  Buffalo RUF-C/U2 Flash Drive
0x0411, //  BUFFALO INC. (formerly MelCo., Inc.)
	0x00db, //  External Hard Drive HD-PF32OU2 [Buffalo Ministation]
0x0411, //  BUFFALO INC. (formerly MelCo., Inc.)
	0x0157, //  External Hard Drive HD-PEU2
0x0413, //  Leadtek Research, Inc.
	0x6126, //  WinFast DTV Dongle BDA Driver
0x0416, //  Winbond Electronics Corp.
	0x0961, //  AVL Flash Card Reader
0x041e, //  Creative Technology, Ltd
	0x410f, //  NOMAD MuVo^2 (Flash)
0x0421, //  Nokia Mobile Phones
	0x0103, //  ADL Flashing Engine AVALON Parent
0x0421, //  Nokia Mobile Phones
	0x0104, //  ADL Re-Flashing Engine Parent
0x0426, //  Integrated Device Technology, Inc.
	0x0426, //  WDM Driver
0x0457, //  Silicon Integrated Systems Corp.
	0x0150, //  Super Talent 1GB Flash Drive
0x0457, //  Silicon Integrated Systems Corp.
	0x0151, //  Super Flash 1GB / GXT  64MB Flash Drive
0x045e, //  Microsoft Corp.
	0x00ce, //  Generic PPC Flash device
0x045e, //  Microsoft Corp.
	0x029c, //  Xbox360 HD-DVD Drive
0x045e, //  Microsoft Corp.
	0x029d, //  Xbox360 HD-DVD Drive
0x0471, //  Philips (or NXP)
	0x0844, //  SA2111/02 1GB Flash Audio Player
0x0474, //  Sanyo Electric Co., Ltd
	0x0401, //  Optical Drive
0x047f, //  Plantronics, Inc.
	0x0101, //  Bulk Driver
0x047f, //  Plantronics, Inc.
	0x0301, //  Bulk Driver
0x0480, //  Toshiba America Info. Systems, Inc.
	0xa007, //  External Disk USB 3.0
0x0483, //  SGS Thomson Microelectronics
	0x2302, //  Portable Flash Device (PFD)
0x0499, //  Yamaha Corp.
	0x6001, //  CRW2200UX Lightspeed 2 External CD-RW Drive
0x04b4, //  Cypress Semiconductor Corp.
	0x4616, //  Flash Disk (TPP)
0x04bb, //  I-O Data Device, Inc.
	0x0c01, //  FM-10 Pro Disk
0x04d8, //  Microchip Technology, Inc.
	0x000b, //  PIC18F2550 (32K Flashable 10 Channel, 10 Bit A/D USB Microcontroller)
0x04d8, //  Microchip Technology, Inc.
	0xfbba, //  DiscFerret Magnetic Disc Analyser (bootloader mode)
0x04d8, //  Microchip Technology, Inc.
	0xfbbb, //  DiscFerret Magnetic Disc Analyser (active mode)
0x04da, //  Panasonic (Matsushita)
	0x0b01, //  CD-R/RW Drive
0x04da, //  Panasonic (Matsushita)
	0x0b03, //  SuperDisk 240MB
0x04da, //  Panasonic (Matsushita)
	0x0d01, //  CD-R Drive KXL-840AN
0x04da, //  Panasonic (Matsushita)
	0x0d09, //  CD-R Drive KXL-RW32AN
0x04da, //  Panasonic (Matsushita)
	0x0d0a, //  CD-R Drive KXL-CB20AN
0x04da, //  Panasonic (Matsushita)
	0x1500, //  MFSUSB Driver
0x04da, //  Panasonic (Matsushita)
	0x2317, //  DVC USB-SERIAL Driver for WinXP
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
0x04e8, //  Samsung Electronics Co., Ltd
	0x60c4, //  M2 Portable Hard Drive USB 3.0
0x04e8, //  Samsung Electronics Co., Ltd
	0x689a, //  LTE Storage Driver [CMC2xx]
0x04e8, //  Samsung Electronics Co., Ltd
	0xe022, //  SERI E02 SCOM 6200 Flash Load Disk
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
0x04fc, //  Sunplus Technology Co., Ltd
	0x5720, //  Card Reader Driver
0x0506, //  3Com Corp.
	0x0100, //  HomeConnect ADSL Modem Driver
0x050d, //  Belkin Components
	0x0249, //  USB 2 Flash Media Device
0x0525, //  Netchip Technology, Inc.
	0xa141, //  (OME) PocketZip 40 MP3 Player Driver
0x052b, //  Tekom Technologies, Inc.
	0x2203, //  Sound Vision Stream Driver
0x0543, //  ViewSonic Corp.
	0x1e60, //  TA310 - ATSC/NTSC/PAL Driver(PCM4)
0x0546, //  Polaroid Corp.
	0xdccf, //  Sound Vision Stream Driver
0x0548, //  Tyan Computer Corp.
	0x1005, //  EZ Cart II GameBoy Flash Programmer
0x054c, //  Sony Corp.
	0x002c, //  USB Floppy Disk Drive
0x054c, //  Sony Corp.
	0x01d0, //  DVD+RW External Drive DRU-700A
0x054c, //  Sony Corp.
	0x023b, //  DVD+RW External Drive DRU-800UL
0x054c, //  Sony Corp.
	0x0243, //  MicroVault Flash Drive
0x054c, //  Sony Corp.
	0x02a5, //  MicroVault Flash Drive
0x055d, //  Samsung Electro-Mechanics Co.
	0x2020, //  Floppy Disk Drive
0x056e, //  Elecom Co., Ltd
	0x6008, //  Flash Disk
0x057b, //  Y-E Data, Inc.
	0x0000, //  FlashBuster-U Floppy
0x057b, //  Y-E Data, Inc.
	0x0020, //  HEXA Media Drive 6-in-1 Card Reader Writer
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
0x058f, //  Alcor Micro Corp.
	0x9320, //  Micro Storage Driver for Win98
0x058f, //  Alcor Micro Corp.
	0x9321, //  Micro Storage Driver for Win98
0x058f, //  Alcor Micro Corp.
	0x9331, //  Micro Storage Driver for Win98
0x058f, //  Alcor Micro Corp.
	0x9380, //  Flash Drive
0x058f, //  Alcor Micro Corp.
	0x9382, //  Acer/Sweex Flash drive
0x058f, //  Alcor Micro Corp.
	0x9384, //  qdi U2Disk T209M
0x059b, //  Iomega Corp.
	0x0021, //  Win98 Disk Controller
0x059b, //  Iomega Corp.
	0x0034, //  Zip 100 Driver
0x059b, //  Iomega Corp.
	0x0053, //  CDRW55292EXT CD-RW External Drive
0x059b, //  Iomega Corp.
	0x005f, //  CDRW64892EXT3-C CD-RW 52x24x52x External Drive
0x059b, //  Iomega Corp.
	0x007e, //  Mini 256MB/512MB Flash Drive [IOM2D5]
0x059b, //  Iomega Corp.
	0x00db, //  FotoShow Zip 250 Driver
0x059b, //  Iomega Corp.
	0x027a, //  LPHD250-U [Portable Hard Drive Silver Series 250 Go]
0x059b, //  Iomega Corp.
	0x0470, //  Prestige Portable Hard Drive
0x059b, //  Iomega Corp.
	0x047a, //  Select Portable Hard Drive
0x059b, //  Iomega Corp.
	0x0579, //  eGo Portable Hard Drive
0x059b, //  Iomega Corp.
	0x1052, //  DVD+RW External Drive
0x059f, //  LaCie, Ltd
	0x0201, //  StudioDrive USB2
0x059f, //  LaCie, Ltd
	0x0202, //  StudioDrive USB2
0x059f, //  LaCie, Ltd
	0x0203, //  StudioDrive USB2
0x059f, //  LaCie, Ltd
	0x0211, //  PocketDrive
0x059f, //  LaCie, Ltd
	0x0212, //  PocketDrive
0x059f, //  LaCie, Ltd
	0x0213, //  PocketDrive USB2
0x059f, //  LaCie, Ltd
	0x0323, //  LaCie d2 Drive USB2
0x059f, //  LaCie, Ltd
	0x0421, //  Big Disk G465
0x059f, //  LaCie, Ltd
	0x0641, //  Mobile Hard Drive
0x059f, //  LaCie, Ltd
	0x1010, //  Desktop Hard Drive
0x059f, //  LaCie, Ltd
	0x1019, //  Desktop Hard Drive
0x059f, //  LaCie, Ltd
	0x1021, //  Little Disk
0x059f, //  LaCie, Ltd
	0x102a, //  Rikiki Hard Drive
0x059f, //  LaCie, Ltd
	0xa601, //  HardDrive
0x05ab, //  In-System Design
	0x0130, //  Compact Flash and Microdrive Reader (TPP)
0x05ab, //  In-System Design
	0x0300, //  Portable Hard Drive (TPP)
0x05ab, //  In-System Design
	0x0301, //  Portable Hard Drive V2
0x05ab, //  In-System Design
	0x0350, //  Portable Hard Drive (TPP)
0x05ab, //  In-System Design
	0x0351, //  Portable Hard Drive V2
0x05ac, //  Apple, Inc.
	0xffff, //  Bluetooth in DFU mode - Driver
0x05da, //  Microtek International, Inc.
	0x1043, //  Take-It 1300 DSC Bulk Driver
0x05dc, //  Lexar Media, Inc.
	0x0001, //  jumpSHOT CompactFlash Reader
0x05dc, //  Lexar Media, Inc.
	0x0081, //  RBC Compact Flash Drive
0x05dc, //  Lexar Media, Inc.
	0x00a7, //  JumpDrive Impact
0x05dc, //  Lexar Media, Inc.
	0x0100, //  JumpDrive PRO
0x05dc, //  Lexar Media, Inc.
	0x0200, //  JumpDrive 2.0 Pro
0x05dc, //  Lexar Media, Inc.
	0x0301, //  JumpDrive Classic
0x05dc, //  Lexar Media, Inc.
	0x0310, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0311, //  JumpDrive Classic
0x05dc, //  Lexar Media, Inc.
	0x0320, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0330, //  JumpDrive Expression
0x05dc, //  Lexar Media, Inc.
	0x0340, //  JumpDrive TAD
0x05dc, //  Lexar Media, Inc.
	0x0410, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0411, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0420, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0421, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0xa300, //  JumpDrive2
0x05dc, //  Lexar Media, Inc.
	0xa400, //  JumpDrive trade; Pro 40-501
0x05dc, //  Lexar Media, Inc.
	0xa410, //  JumpDrive 128MB/256MB
0x05dc, //  Lexar Media, Inc.
	0xa411, //  JumpDrive Traveler
0x05dc, //  Lexar Media, Inc.
	0xa420, //  JumpDrive Pro
0x05dc, //  Lexar Media, Inc.
	0xa421, //  JumpDrive Pro II
0x05dc, //  Lexar Media, Inc.
	0xa422, //  JumpDrive Micro Pro
0x05dc, //  Lexar Media, Inc.
	0xa430, //  JumpDrive Secure
0x05dc, //  Lexar Media, Inc.
	0xa431, //  JumpDrive Secure II
0x05dc, //  Lexar Media, Inc.
	0xa432, //  JumpDrive Classic
0x05dc, //  Lexar Media, Inc.
	0xa440, //  JumpDrive Lightning
0x05dc, //  Lexar Media, Inc.
	0xa450, //  JumpDrive TouchGuard
0x05dc, //  Lexar Media, Inc.
	0xa501, //  JumpDrive Classic
0x05dc, //  Lexar Media, Inc.
	0xa510, //  JumpDrive Sport
0x05dc, //  Lexar Media, Inc.
	0xa530, //  JumpDrive Expression
0x05dc, //  Lexar Media, Inc.
	0xa531, //  JumpDrive Secure II
0x05dc, //  Lexar Media, Inc.
	0xa560, //  JumpDrive FireFly
0x05dc, //  Lexar Media, Inc.
	0xa701, //  JumpDrive FireFly
0x05dc, //  Lexar Media, Inc.
	0xa731, //  JumpDrive FireFly
0x05dc, //  Lexar Media, Inc.
	0xa790, //  JumpDrive 2GB
0x05e3, //  Genesys Logic, Inc.
	0x0700, //  SIIG US2256 CompactFlash Card Reader
0x05e3, //  Genesys Logic, Inc.
	0x070a, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
	0x070f, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
	0x0723, //  GL827L SD/MMC/MS Flash Card Reader
0x05e3, //  Genesys Logic, Inc.
	0x07a0, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
	0xa700, //  Pen Flash
0x0619, //  Seiko Instruments, Inc.
	0x0101, //  SLP-100 Driver
0x0619, //  Seiko Instruments, Inc.
	0x0102, //  SLP-200 Driver
0x0619, //  Seiko Instruments, Inc.
	0x0103, //  SLP-100N Driver
0x0619, //  Seiko Instruments, Inc.
	0x0104, //  SLP-200N Driver
0x0619, //  Seiko Instruments, Inc.
	0x0105, //  SLP-240 Driver
0x0619, //  Seiko Instruments, Inc.
	0x0501, //  SLP-440 Driver
0x0619, //  Seiko Instruments, Inc.
	0x0502, //  SLP-450 Driver
0x061a, //  Veridicom International, Inc.
	0x8200, //  VKI-A Fingerprint Sensor/Flash Storage (dumb)
0x061a, //  Veridicom International, Inc.
	0x9200, //  VKI-B Fingerprint Sensor/Flash Storage (smart)
0x0644, //  TEAC Corp.
	0x1000, //  CD-ROM Drive
0x0667, //  Aiwa Co., Ltd
	0x0fa1, //  TD-U8000 Tape Drive
0x066b, //  Linksys, Inc.
	0x010a, //  Melco MCR-U2 SmartMedia / CompactFlash Reader
0x0677, //  Aiwa Co., Ltd
	0x0fa1, //  TD-U8000 Tape Drive
0x067b, //  Prolific Technology, Inc.
	0x2315, //  Flash Disk Embedded Hub
0x067b, //  Prolific Technology, Inc.
	0x2316, //  Flash Disk Security Device
0x067b, //  Prolific Technology, Inc.
	0x2515, //  Flash Disk Embedded Hub
0x067b, //  Prolific Technology, Inc.
	0x3400, //  Hi-Speed Flash Disk with TruePrint AES3400
0x067b, //  Prolific Technology, Inc.
	0x3500, //  Hi-Speed Flash Disk with TruePrint AES3500
0x0693, //  Hagiwara Sys-Com Co., Ltd
	0x0002, //  FlashGate SmartMedia Card Reader
0x0693, //  Hagiwara Sys-Com Co., Ltd
	0x0003, //  FlashGate CompactFlash Card Reader
0x0693, //  Hagiwara Sys-Com Co., Ltd
	0x0005, //  FlashGate
0x0693, //  Hagiwara Sys-Com Co., Ltd
	0x0007, //  FlashGate ME (Authenticated)
0x06d6, //  Aashima Technology B.V.
	0x003f, //  Trust 735S POWERC@M ZOOM, WDM DSC Bulk Driver
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
0x0718, //  Imation Corp.
	0xd000, //  Disc Stakka CD/DVD Manager
0x072f, //  Advanced Card Systems, Ltd
	0x1000, //  PLDT Drive
0x072f, //  Advanced Card Systems, Ltd
	0x1001, //  PLDT Drive
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
0x0781, //  SanDisk Corp.
	0x8185, //  SDCZ2 Cruzer Mini Flash Drive (older, thick)
0x07ab, //  Freecom Technologies
	0xfcf8, //  Freecom Classic SL Network Drive
0x07ab, //  Freecom Technologies
	0xfcfe, //  Hard Drive 80GB
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
0x07b8, //  AboCom Systems Inc
	0xe4f0, //  Card Reader Driver
0x07c4, //  Datafab Systems, Inc.
	0xa000, //  CompactFlash Card Reader
0x07c4, //  Datafab Systems, Inc.
	0xa001, //  CompactFlash & SmartMedia Card Reader [eusb]
0x07c4, //  Datafab Systems, Inc.
	0xa002, //  Disk Drive
0x07c4, //  Datafab Systems, Inc.
	0xa004, //  USB to MMC Class Drive
0x07c4, //  Datafab Systems, Inc.
	0xa005, //  CompactFlash & SmartMedia Card Reader
0x07c4, //  Datafab Systems, Inc.
	0xa007, //  Memory Stick Class Drive
0x07c4, //  Datafab Systems, Inc.
	0xa107, //  USB to Memory Stick (LC1) Drive
0x07c4, //  Datafab Systems, Inc.
	0xa109, //  LC1 CompactFlash & SmartMedia Card Reader
0x07c4, //  Datafab Systems, Inc.
	0xa400, //  CompactFlash & Microdrive Reader
0x07c4, //  Datafab Systems, Inc.
	0xb00a, //  USB to CF+SD Drive(LC1)
0x07d0, //  Dazzle
	0x2001, //  eUSB CompactFlash Reader
0x07f7, //  Century Corp.
	0x011e, //  Century USB Disk Enclosure
0x07ff, //  Unknown
	0x00ff, //  Portable Hard Drive
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
0x08ca, //  Aiptek International, Inc.
	0x0100, //  Pen Drive
0x08ca, //  Aiptek International, Inc.
	0x0105, //  Mega DV(Disk)
0x08ca, //  Aiptek International, Inc.
	0x2043, //  Pocket DV5100M (Disk)
0x08ea, //  Ericsson, Inc., Blue Ridge Labs
	0xabba, //  USB Driver for Bluetooth Wireless Technology
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0001, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0002, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0005, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0008, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0010, //  DiskOnKey
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0011, //  DiskOnKey
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0012, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0014, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0020, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0021, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0022, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0023, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0024, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0025, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0026, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0027, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0028, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0029, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0030, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0822, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0834, //  M-Disk 220
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0998, //  Kingston Data Traveler2.0 Disk Driver
0x08ec, //  M-Systems Flash Disk Pioneers
	0x0999, //  Kingston Data Traveler2.0 Disk Driver
0x08ec, //  M-Systems Flash Disk Pioneers
	0x1000, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x2000, //  TravelDrive 2C
0x08ec, //  M-Systems Flash Disk Pioneers
	0x2038, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x2039, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x204a, //  TravelDrive
0x08ec, //  M-Systems Flash Disk Pioneers
	0x204b, //  TravelDrive
0x0901, //  VST Technologies
	0x0001, //  Hard Drive Adapter (TPP)
0x0901, //  VST Technologies
	0x0002, //  SigmaDrive Adapter (TPP)
0x090a, //  Trumpion Microelectronics, Inc.
	0x1001, //  T33520 Flash Card Controller
0x090a, //  Trumpion Microelectronics, Inc.
	0x1540, //  Digitex Container Flash Disk
0x090c, //  Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)
	0x6000, //  SD/SDHC Card Reader (SG365 / FlexiDrive XC+)
0x0917, //  SmartDisk Corp.
	0x0204, //  FlashTrax Storage
0x0930, //  Toshiba Corp.
	0x642f, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6506, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6507, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6508, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6509, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6510, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6517, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6518, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x651a, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x651b, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x651c, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x651d, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x651e, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x651f, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6520, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6521, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6522, //  TravelDrive 2C
0x0930, //  Toshiba Corp.
	0x6523, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6524, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6525, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6526, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6527, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6528, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6529, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x652a, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x652b, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x652c, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x652d, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x652f, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6530, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6531, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x6534, //  TravelDrive
0x0930, //  Toshiba Corp.
	0x653e, //  Flash Memory
0x0930, //  Toshiba Corp.
	0x6540, //  TransMemory Flash Memory
0x0930, //  Toshiba Corp.
	0x6545, //  Kingston DataTraveler 102 Flash Drive / HEMA Flash Drive 2 GB / PNY Attache 4GB Stick
0x0951, //  Kingston Technology
	0x1600, //  DataTraveler II Pen Drive
0x0951, //  Kingston Technology
	0x1601, //  DataTraveler II+ Pen Drive
0x0951, //  Kingston Technology
	0x1603, //  DataTraveler 1GB/2GB Pen Drive
0x0951, //  Kingston Technology
	0x1613, //  DataTraveler DT101C Flash Drive
0x0951, //  Kingston Technology
	0x1624, //  DataTraveler G2 4GB Pen Drive
0x0951, //  Kingston Technology
	0x162a, //  DataTraveler 112 4GB Pen Drive
0x0984, //  Apricorn
	0x0200, //  Hard Drive Storage (TPP)
0x09ef, //  Xitel
	0x0101, //  MD-Port DG2 MiniDisc Interface
0x0a12, //  Cambridge Silicon Radio, Ltd
	0x0101, //  Casira with BlueCore2-Flash Module
0x0a12, //  Cambridge Silicon Radio, Ltd
	0x0103, //  Casira with BlueCore3-Flash Module
0x0a16, //  Trek Technology (S) PTE, Ltd
	0x1111, //  ThumbDrive
0x0a4d, //  Evolution Electronics, Ltd
	0x0064, //  MK-225 Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0065, //  MK-225C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0066, //  MK-225C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0067, //  MK-425C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0078, //  MK-37 Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0079, //  MK-37C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x007a, //  MK-37C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x008d, //  MK-249C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x008f, //  MK-449C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0090, //  Keystation 49e Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x0091, //  Keystation 61es Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00a0, //  MK-361 Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00a1, //  MK-361C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00a2, //  MK-361C Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00b5, //  Keystation Pro 88 Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00d2, //  E-Keys Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00f0, //  UC-16 Driver
0x0a4d, //  Evolution Electronics, Ltd
	0x00f1, //  X-Session Driver
0x0a53, //  Portable Peripheral Co., Ltd
	0x2013, //  Media Drive A6 Scanner
0x0a53, //  Portable Peripheral Co., Ltd
	0x2014, //  Media Drive A6 Scanner
0x0a6b, //  Green House Co., Ltd
	0x0001, //  Compact Flash R/W with MP3 player
0x0a6b, //  Green House Co., Ltd
	0x000f, //  FlashDisk
0x0a8e, //  Japan Aviation Electronics Industry, Ltd
	0x2011, //  Filter Driver For JAE XMC R/W
0x0aa6, //  Perception Digital, Ltd
	0x1501, //  Store 'n' Go HD Drive
0x0ac9, //  Micro Solutions, Inc.
	0x0011, //  Backpack 40GB Hard Drive
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
	0x5100, //  XMC5100 Zippy Drive
0x0b86, //  Exputer Systems, Inc.
	0x5110, //  XMC5110 Flash Drive
0x0b86, //  Exputer Systems, Inc.
	0x5200, //  XMC5200 Zippy Drive
0x0b86, //  Exputer Systems, Inc.
	0x5201, //  XMC5200 Zippy Drive
0x0b86, //  Exputer Systems, Inc.
	0x5202, //  XMC5200 Zippy Drive
0x0b86, //  Exputer Systems, Inc.
	0x5280, //  XMC5280 Storage Drive
0x0bf1, //  Intracom S.A.
	0x0001, //  netMod Driver Ver 2.4.17 (CAPI)
0x0bf1, //  Intracom S.A.
	0x0002, //  netMod Driver Ver 2.4 (CAPI)
0x0bf1, //  Intracom S.A.
	0x0003, //  netMod Driver Ver 2.4 (CAPI)
0x0c0b, //  Dura Micro, Inc. (Acomdata)
	0x27cb, //  6-in-1 Flash Reader and Writer
0x0c45, //  Microdia
	0x1060, //  iFlash SM-Direct Card Reader
0x0c76, //  JMTek, LLC.
	0x0005, //  Transcend Flash disk
0x0c76, //  JMTek, LLC.
	0x0006, //  Transcend JetFlash
0x0caf, //  Buslink
	0x2515, //  Flash Disk Embedded Hub
0x0caf, //  Buslink
	0x2516, //  Flash Disk Security Device
0x0caf, //  Buslink
	0x3a00, //  Hard Drive
0x0ccd, //  TerraTec Electronic GmbH
	0x0015, //  Flash Update for TerraTec PHASE 26
0x0d49, //  Maxtor
	0x3000, //  Drive
0x0d49, //  Maxtor
	0x3010, //  3000LE Drive
0x0d49, //  Maxtor
	0x5000, //  5000XT Drive
0x0d49, //  Maxtor
	0x5010, //  5000LE Drive
0x0d49, //  Maxtor
	0x5020, //  Mobile Hard Disk Drive
0x0d49, //  Maxtor
	0x7410, //  Mobile Hard Disk Drive (1TB)
0x0d62, //  Darfon Electronics Corp.
	0x0004, //  Filter Driver
0x0d64, //  DXG Technology Corp.
	0x3105, //  Dual Mode Digital Camera Disk
0x0d7d, //  Phison Electronics Corp.
	0x0100, //  PS1001/1011/1006/1026 Flash Disk
0x0d7d, //  Phison Electronics Corp.
	0x0110, //  Gigabyte FlexDrive
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
	0x1420, //  PS2044 Pen Drive
0x0d7d, //  Phison Electronics Corp.
	0x1470, //  Vosonic X's-Drive II+ VP2160
0x0d7d, //  Phison Electronics Corp.
	0x1620, //  USB Disk Pro
0x0d7d, //  Phison Electronics Corp.
	0x1900, //  USB Thumb Drive
0x0d98, //  Mars Semiconductor Corp.
	0x1007, //  Discovery Kids Digital Camera
0x0db0, //  Micro Star International
	0x4011, //  Medion Flash XL V2.0 Card Reader
0x0db0, //  Micro Star International
	0x6982, //  Medion Flash XL Card Reader
0x0dbf, //  Jess-Link International
	0x0707, //  ZIV Drive
0x0dc3, //  Athena Smartcard Solutions, Inc.
	0x0801, //  ASEDrive III
0x0dc3, //  Athena Smartcard Solutions, Inc.
	0x0802, //  ASEDrive IIIe
0x0dc3, //  Athena Smartcard Solutions, Inc.
	0x1104, //  ASEDrive IIIe KB
0x0dd8, //  Netac Technology Co., Ltd
	0xe007, //  OnlyDisk U222 Pendrive
0x0dd8, //  Netac Technology Co., Ltd
	0xf607, //  OnlyDisk U208 1G flash drive [U-SAFE]
0x0dda, //  Integrated Circuit Solution, Inc.
	0x0003, //  Flash Disk
0x0dda, //  Integrated Circuit Solution, Inc.
	0x1001, //  Multi-Flash Disk
0x0ea0, //  Ours Technology, Inc.
	0x2168, //  Transcend JetFlash 2.0 / Astone USB Drive
0x0ea0, //  Ours Technology, Inc.
	0x6803, //  OTI-6803 Flash Disk
0x0ea0, //  Ours Technology, Inc.
	0x6808, //  OTI-6808 Flash Disk
0x0ea0, //  Ours Technology, Inc.
	0x6828, //  OTI-6828 Flash Disk
0x0ecd, //  Lite-On IT Corp.
	0xa100, //  LDW-411SX DVD/CD Rewritable Drive
0x0ed1, //  WinMaxGroup
	0x6660, //  Flash Disk 64M-C
0x0ed1, //  WinMaxGroup
	0x6680, //  Flash Disk 64M-B
0x0ef5, //  PointChips
	0x2202, //  Flash Disk
0x0ef5, //  PointChips
	0x2366, //  Flash Disk
0x0f5d, //  NewAge International, LLC
	0x9455, //  Compact Drive
0x0f6e, //  INTELLIGENT SYSTEMS
	0x0201, //  GameBoy Advance Flash Gang Writer
0x1019, //  Elitegroup Computer Systems (ECS)
	0x0c55, //  Flash Reader, Desknote UCR-61S2B
0x1043, //  iCreate Technologies Corp.
	0x8006, //  Flash Disk 32-256 MB
0x1043, //  iCreate Technologies Corp.
	0x8012, //  Flash Disk 256 MB
0x104d, //  Newport Corporation
	0x1003, //  Model-52 LED Light Source Power Supply and Driver
0x1058, //  Western Digital Technologies, Inc.
	0x1001, //  External Hard Disk [Elements]
0x1065, //  CCYU Technology
	0x2136, //  EasyDisk ED1064
0x10fd, //  Anubis Electronics, Ltd
	0xde00, //  WinFast WalkieTV WDM Capture Driver.
0x116f, //  Silicon 10 Technology Corp.
	0x0005, //  Flash Card Reader
0x116f, //  Silicon 10 Technology Corp.
	0xc108, //  Flash Card Reader
0x116f, //  Silicon 10 Technology Corp.
	0xc109, //  Flash Card Reader
0x125f, //  A-DATA Technology Co., Ltd.
	0xc81a, //  Flash drive
0x125f, //  A-DATA Technology Co., Ltd.
	0xc93a, //  4GB Pen Drive
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
0x1370, //  Swissbit
	0x6828, //  Victorinox Flash Drive
0x13d3, //  IMC Networks
	0x3212, //  DTV-DVB UDTT704C - DVBT/NTSC/PAL Driver(PCM4)
0x13d3, //  IMC Networks
	0x3213, //  DTV-DVB UDTT704D - DVBT/NTSC/PAL Driver (PCM4)
0x13d3, //  IMC Networks
	0x3214, //  DTV-DVB UDTT704F -(MiniCard) DVBT/NTSC/PAL Driver(Without HID)
0x13d3, //  IMC Networks
	0x3215, //  DTV-DVB UDAT7240 - ATSC/NTSC/PAL Driver(PCM4)
0x13d3, //  IMC Networks
	0x3216, //  DTV-DVB UDTT 7047-USB 2.0 DVB-T Driver
0x13d3, //  IMC Networks
	0x3219, //  DTV-DVB UDTT7049 - DVB-T Driver(Without HID)
0x13d3, //  IMC Networks
	0x3220, //  DTV-DVB UDTT 7047M-USB 2.0 DVB-T Driver
0x13d3, //  IMC Networks
	0x3236, //  DTV-DVB UDTT 7047A-USB 2.0 DVB-T Driver
0x13d3, //  IMC Networks
	0x3237, //  DTV-DVB UDTT 704J - dual DVB-T Driver
0x13d3, //  IMC Networks
	0x3239, //  DTV-DVB UDTT704D - DVBT/NTSC/PAL Driver(Without HID)
0x13d3, //  IMC Networks
	0x3240, //  DTV-DVB UDXTTM6010 - A/D Driver(Without HID)
0x13d3, //  IMC Networks
	0x3241, //  DTV-DVB UDXTTM6010 - A/D Driver(Without HID)
0x13d3, //  IMC Networks
	0x3242, //  DTV-DVB UDAT7240LP - ATSC/NTSC/PAL Driver(Without HID)
0x13d3, //  IMC Networks
	0x3243, //  DTV-DVB UDXTTM6010 - A/D Driver(Without HID)
0x13d3, //  IMC Networks
	0x3244, //  DTV-DVB UDTT 7047Z-USB 2.0 DVB-T Driver
0x13fd, //  Initio Corporation
	0x1840, //  Shintaro SH23SDOCK Hard Drive Docker [INIC-1608L]
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
0x1462, //  Micro Star International
	0x5512, //  MegaStick-1 Flash Stick
0x1514, //  Actel
	0x2003, //  FlashPro3 Programmer
0x1514, //  Actel
	0x2004, //  FlashPro3 Programmer
0x1514, //  Actel
	0x2005, //  FlashPro3 Programmer
0x1516, //  CompUSA
	0x1603, //  Flash Drive
0x1516, //  CompUSA
	0x8628, //  Pen Drive
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
0x18a5, //  Verbatim, Ltd
	0x0214, //  Portable Hard Drive
0x18a5, //  Verbatim, Ltd
	0x0216, //  External Hard Drive
0x18a5, //  Verbatim, Ltd
	0x0218, //  External Hard Drive
0x18a5, //  Verbatim, Ltd
	0x0227, //  Pocket Hard Drive
0x1976, //  Chipsbrand Microelectronics (HK) Co., Ltd.
	0x6025, //  Flash Drive 512 MB
0x1b1c, //  Corsair
	0x0890, //  Flash Padlock
0x1b1c, //  Corsair
	0x1a90, //  Flash Voyager GT
0x22b8, //  Motorola PCS
	0x0833, //  2386C-HT820 [Flash Mode]
0x22b8, //  Motorola PCS
	0x2823, //  Flash Interface
0x22b8, //  Motorola PCS
	0x6026, //  Flash RAM Downloader/miniOS
0x2304, //  Pinnacle Systems, Inc.
	0x0228, //  PCTV DVB-T Flash Stick
0x3538, //  Power Quotient International Co., Ltd
	0x0001, //  Travel Flash
0x3538, //  Power Quotient International Co., Ltd
	0x0042, //  Cool Drive U339 Flash Disk
0x3538, //  Power Quotient International Co., Ltd
	0x0054, //  Flash Drive (2GB)
0x413c, //  Dell Computer Corp.
	0x8105, //  U2 in HID - Driver
0x4146, //  USBest Technology
	0x9281, //  Iomega Micro Mini 128MB Flash Drive
0x4146, //  USBest Technology
	0xba01, //  Intuix Flash Drive
0x4586, //  Panram
	0x1026, //  Crystal Bar Flash Drive
0x4971, //  SimpleTech
	0xce17, //  1TB SimpleDrive II USB External Hard Drive
0x55aa, //  OnSpec Electronic, Inc.
	0x0015, //  Hard Drive
0x55aa, //  OnSpec Electronic, Inc.
	0x0102, //  SuperDisk
0x55aa, //  OnSpec Electronic, Inc.
	0x0103, //  IDE Hard Drive
0x55aa, //  OnSpec Electronic, Inc.
	0xb000, //  USB to CompactFlash Card Reader
0x55aa, //  OnSpec Electronic, Inc.
	0xb200, //  Compact Flash Reader
0x8086, //  Intel Corp.
	0xf1a5, //  Z-U130 [Value Solid State Drive]
0x8341, //  EGO Systems, Inc.
	0x2000 //  Flashdisk
};
