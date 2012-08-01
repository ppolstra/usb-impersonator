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

unsigned short vidPid[] = {
0x0001,  // Fry's Electronics
	0x142b, //  Arbiter Systems, Inc.
0x0145,  // Unknown
	0x0112,  // Card Reader
0x0204, //  Chipsbank Microelectronics Co., Ltd
	0x6025, //  CBM2080 Flash drive controller
0x0204, //  Chipsbank Microelectronics Co., Ltd
	0x6026, //  CBM1180 Flash drive controller
0x02ad, //  HUMAX Co., Ltd.
	0x138c, //  PVR Mass Storage
0x0324, //  OCZ Technology Inc
	0xbc06, //  OCZ ATV USB 2.0 Flash Drive
0x0324, //  OCZ Technology Inc
	0xbc08, //  OCZ Rally2/ATV USB 2.0 Flash Drive
0x0325, //  OCZ Technology Inc
	0xac02, //  ATV Turbo / Rally2 Dual Channel USB 2.0 Flash Drive
0x03eb, //  Atmel Corp.
	0x2002, //  Mass Storage Device
0x03f0, //  Hewlett-Packard
	0x3207, //  4 GB flash drive
0x03f0, //  Hewlett-Packard
	0xefbe, //  NEC Picty900
0x03f0, //  Hewlett-Packard
	0xf0be, //  NEC Picty920
0x03f0, //  Hewlett-Packard
	0xf1be, //  NEC Picty800
0x0402, // ALi Corp.
	0x5636, //  USB 2.0 Storage Device
0x0457, //  Silicon Integrated Systems Corp.
	0x0151, //  Super Flash 1GB / GXT  64MB Flash Drive
0x045e, //  Microsoft Corp.
	0x00ce, //  Generic PPC Flash device
0x045e, //  Microsoft Corp.
	0xffff, //  Windows CE Mass Storage
0x0483, //  SGS Thomson Microelectronics
	0x2302, //  Portable Flash Device (PFD)
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6001,  // Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6002, //  Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6004, //  Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6005, //  Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6006, //  Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6007, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6008, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6009, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x600a, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x600b, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x600c, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x600d, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x600e, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x600f, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6010, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6011, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6012, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6013, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6014, //   Mass Storage Device
0x04a5, //  Acer Peripherals Inc. (now BenQ Corp.)
	0x6015, //   Mass Storage Device
0x04b4, //  Cypress Semiconductor Corp.
	0x4611, //  Storage Adapter FX2 (CY)
0x04b4, //  Cypress Semiconductor Corp.
	0x4616, //  Flash Disk (TPP)
0x04b8, //  Seiko Epson Corp.
	0x0804, //  Storage Device
0x04b8, //  Seiko Epson Corp.
	0x0809, //  Storage Device
0x04b8, //  Seiko Epson Corp.
	0x080a, //  Storage Device
0x04b8, //  Seiko Epson Corp.
	0x0822, //   Storage Device
0x04b8, //  Seiko Epson Corp.
	0x0824, //   Storage Device
0x04b8, //  Seiko Epson Corp.
	0x0826, //   Storage Device
0x04b8, //  Seiko Epson Corp.
	0x082c, //   Storage Device
0x04b8, //  Seiko Epson Corp.
	0x082d, //   Storage Device
0x04cf, //  Myson Century, Inc.
	0x0800, //  MTP800 Mass Storage Device
0x04cf, //  Myson Century, Inc.
	0x8810, //  CS8810 Mass Storage Device
0x04cf, //  Myson Century, Inc.
	0x8811, //  CS8811 Mass Storage Device
0x04cf, //  Myson Century, Inc.
	0x8813, //  CS8813 Mass Storage Device
0x04cf, //  Myson Century, Inc.
	0x9920, //  CS8819A2-114 Mass Storage Device
0x04e8, //  Samsung Electronics Co., Ltd
	0x0100, //  Kingston Flash Drive (128MB)
0x04e8, //  Samsung Electronics Co., Ltd
	0x0110, //  Connect3D Flash Drive
0x04e8, //  Samsung Electronics Co., Ltd
	0x0111, //  Connect3D Flash Drive
0x04e8, //  Samsung Electronics Co., Ltd
	0x1f06, //  HX-MU064DA portable harddisk
0x04e8, //  Samsung Electronics Co., Ltd
	0x6032, //  G2 Portable hard drive
0x04e8, //  Samsung Electronics Co., Ltd
	0x60c4, //  M2 Portable Hard Drive USB 3.0
0x04e8, //  Samsung Electronics Co., Ltd
	0x675a, //  D900e Mass Storage
0x04fc, //  Sunplus Technology Co., Ltd
	0x1533, //  Mass Storage
0x054c, //  Sony Corp.
	0x0022, //  Storage Adapter V2 (TPP)
0x054c, //  Sony Corp.
	0x002b, //  Portable USB Harddrive V2
0x054c, //  Sony Corp.
	0x002c, //  USB Floppy Disk Drive
0x054c, //  Sony Corp.
	0x0030, //  Storage Adapter V2 (TPP)
0x054c, //  Sony Corp.
	0x0073, //  Storage CRX1750U
0x054c, //  Sony Corp.
	0x0076, //  Storage Adapter ACR-U20
0x054c, //  Sony Corp.
	0x007c, //  Net MD
0x054c, //  Sony Corp.
	0x02a5, //  MicroVault Flash Drive
0x056e, //  Elecom Co., Ltd
	0x6008, //  Flash Disk
0x058f, //  Alcor Micro Corp.
	0x1234, //  Flash Drive
0x058f, //  Alcor Micro Corp.
	0x9310, //  Mass Storage (UID4/5A & UID7A)
0x058f, //  Alcor Micro Corp.
	0x9380, //   Flash Drive
0x058f, //  Alcor Micro Corp.
	0x9382, //  Acer/Sweex Flash drive
0x059b, //  Iomega Corp.
	0x0057, //  Mass Storage Device
0x059b, //  Iomega Corp.
	0x005d, //  Mass Storage Device
0x059b, //  Iomega Corp.
	0x007d, //  HTC42606 0G9AT00 [Iomega HDD]
0x059b, //  Iomega Corp.
	0x007e, //  Mini 256MB/512MB Flash Drive [IOM2D5]
0x059b, //  Iomega Corp.
	0x0150, //  Mass Storage Device
0x059b, //  Iomega Corp.
	0x017b, //  HDD/1394A
0x059b, //  Iomega Corp.
	0x017c, //  HDD/1394B
0x059b, //  Iomega Corp.
	0x027a, //  LPHD250-U [Portable Hard Drive Silver Series 250 Go]
0x059b, //  Iomega Corp.
	0x0470, //  Prestige Portable Hard Drive
0x059b, //  Iomega Corp.
	0x047a, //  Select Portable Hard Drive
0x059b, //  Iomega Corp.
	0x0579 , // eGo Portable Hard Drive
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
	0x1027, //  iamaKey V2
0x059f, //  LaCie, Ltd
	0x102a, //  Rikiki Hard Drive
0x059f, //  LaCie, Ltd
	0x1049, //  rikiki Harddrive
0x059f, //  LaCie, Ltd
	0xa601, //  HardDrive
0x05ab, //  In-System Design
	0x0061, //  Storage Adapter V3 (TPP-I)
0x05ab, //  In-System Design
	0x0101, //  Storage Adapter (TPP)
0x05ab, //  In-System Design
	0x0130, //  Compact Flash and Microdrive Reader (TPP)
0x05ab, //  In-System Design
	0x0201, //  Storage Adapter (TPP)
0x05ab, //  In-System Design
	0x0300, //  Portable Hard Drive (TPP)
0x05ab, //  In-System Design
	0x0301, //  Portable Hard Drive V2
0x05ab, //  In-System Design
	0x0350, //  Portable Hard Drive (TPP)
0x05ab, //  In-System Design
	0x0351, //  Portable Hard Drive V2
0x05ab, //  In-System Design
	0x5700, //  Storage Adapter V2 (TPP)
0x05ab, //  In-System Design
	0x5701, //  USB Storage Adapter V2
0x05ab, //  In-System Design
	0x5a01, //  ATI Storage Adapter (TPP)
0x05c6, //  Qualcomm, Inc.
	0x1000, //  Mass Storage Device
0x05da, //  Microtek International, Inc.
	0x1052, //  Mass Storage Device
0x05da, //  Microtek International, Inc.
	0x1054, //  Mass Storage Device
0x05da, //  Microtek International, Inc.
	0x1056, //  Mass Storage Device
0x05da, //  Microtek International, Inc.
	0x1058, //  Mass Storage Device
0x05dc, //  Lexar Media, Inc.
	0x0002, //  JumpShot
0x05dc, //  Lexar Media, Inc.
	0x0003, //  JumpShot
0x05dc, //  Lexar Media, Inc.
	0x0080, //  Jumpdrive Secure 64MB
0x05dc, //  Lexar Media, Inc.
	0x0081, //  RBC Compact Flash Drive
0x05dc, //  Lexar Media, Inc.
	0x00a7, //  JumpDrive Impact
0x05dc, //  Lexar Media, Inc.
	0x0100, //  JumpDrive PRO
0x05dc, //  Lexar Media, Inc.
	0x0200, //  JumpDrive 2.0 Pro
0x05dc, //  Lexar Media, Inc.
	0x0300, //  Jumpdrive Geysr
0x05dc, //  Lexar Media, Inc.
	0x0301, //  JumpDrive Classic
0x05dc, //  Lexar Media, Inc.
	0x0302, //  JD Micro
0x05dc, //  Lexar Media, Inc.
	0x0303, //  JD Micro Pro
0x05dc, //  Lexar Media, Inc.
	0x0304, //  JD Secure II
0x05dc, //  Lexar Media, Inc.
	0x0310, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0311, //  JumpDrive Classic
0x05dc, //  Lexar Media, Inc.
	0x0312, //  JD Micro
0x05dc, //  Lexar Media, Inc.
	0x0313, //  JD Micro Pro
0x05dc, //  Lexar Media, Inc.
	0x0320, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0321, //  JD Micro
0x05dc, //  Lexar Media, Inc.
	0x0322, //  JD Micro Pro
0x05dc, //  Lexar Media, Inc.
	0x0323, //  UFC
0x05dc, //  Lexar Media, Inc.
	0x0330, //  JumpDrive Expression
0x05dc, //  Lexar Media, Inc.
	0x0340, //  JumpDrive TAD
0x05dc, //  Lexar Media, Inc.
	0x0350, //  Express Card
0x05dc, //  Lexar Media, Inc.
	0x0400, //  UFDC
0x05dc, //  Lexar Media, Inc.
	0x0401, //  UFDC
0x05dc, //  Lexar Media, Inc.
	0x0403, //  Locked B Device
0x05dc, //  Lexar Media, Inc.
	0x0405, //  Locked C Device
0x05dc, //  Lexar Media, Inc.
	0x0407, //  Locked D Device
0x05dc, //  Lexar Media, Inc.
	0x0409, //  Locked E Device
0x05dc, //  Lexar Media, Inc.
	0x040b, //  Locked F Device
0x05dc, //  Lexar Media, Inc.
	0x040d, //  Locked G Device
0x05dc, //  Lexar Media, Inc.
	0x040f, //  Locked H Device
0x05dc, //  Lexar Media, Inc.
	0x0410, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0411, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0413, //  Locked J Device
0x05dc, //  Lexar Media, Inc.
	0x0415, //  Locked K Device
0x05dc, //  Lexar Media, Inc.
	0x0417, //  Locked L Device
0x05dc, //  Lexar Media, Inc.
	0x0419, //  Locked M Device
0x05dc, //  Lexar Media, Inc.
	0x041b, //  Locked N Device
0x05dc, //  Lexar Media, Inc.
	0x041d, //  Locked O Device
0x05dc, //  Lexar Media, Inc.
	0x041f, //  Locked P Device
0x05dc, //  Lexar Media, Inc.
	0x0420, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0421, //  JumpDrive
0x05dc, //  Lexar Media, Inc.
	0x0423, //  Locked R Device
0x05dc, //  Lexar Media, Inc.
	0x0425, //  Locked S Device
0x05dc, //  Lexar Media, Inc.
	0x0427, //  Locked T Device
0x05dc, //  Lexar Media, Inc.
	0x0429, //  Locked U Device
0x05dc, //  Lexar Media, Inc.
	0x042b, //  Locked V Device
0x05dc, //  Lexar Media, Inc.
	0x042d, //  Locked W Device
0x05dc, //  Lexar Media, Inc.
	0x042f, //  Locked X Device
0x05dc, //  Lexar Media, Inc.
	0x0431, //  Locked Y Device
0x05dc, //  Lexar Media, Inc.
	0x0433, //  Locked Z Device
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
	0xa460, //  JD Mercury
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
0x05dc, //  Lexar Media, Inc.
	0xa811, //  16GB Gizmo!
0x05e3, //  Genesys Logic, Inc.
	0x070a, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
	0x070f, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
	0x0712, //  Delkin Mass Storage Device
0x05e3, //  Genesys Logic, Inc.
	0x0761, //  Genesys Mass Storage Device
0x05e3, //  Genesys Logic, Inc.
	0x07a0, //  Pen Flash
0x05e3, //  Genesys Logic, Inc.
	0xa700, //  Pen Flash
0x0634, //  Micron Technology, Inc.
	0x0655, //  Embedded Mass Storage Drive [RealSSD]
0x067b, //  Prolific Technology, Inc.
	0x2316, //  Flash Disk Security Device
0x067b, //  Prolific Technology, Inc.
	0x2317, //  Mass Storage Device
0x067b, //  Prolific Technology, Inc.
	0x2517, //  Flash Disk Mass Storage Device
0x067b, //  Prolific Technology, Inc.
	0x3400, //  Hi-Speed Flash Disk with TruePrint AES3400
0x067b, //  Prolific Technology, Inc.
	0x3500, //  Hi-Speed Flash Disk with TruePrint AES3500
0x06e1, //  ADS Technologies, Inc.
	0x0833, //  Mass Storage Device
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
	0x0068 , // Flash Drive
0x0718, //  Imation Corp.
	0x0084, //  Flash Drive Mini
0x0718, //  Imation Corp.
	0x0582, //  Revo Flash Drive
0x0781, //  SanDisk Corp.
	0x1234, //  Cruzer Mini Flash Drive
0x0781, //  SanDisk Corp.
	0x5150, //  SDCZ2 Cruzer Mini Flash Drive (thin)
0x0781, //  SanDisk Corp.
	0x5151, //  Cruzer Micro Flash Drive
0x0781, //  SanDisk Corp.
	0x5153, //  Cruzer Flash Drive
0x0781, //  SanDisk Corp.
	0x5402, //  U3 Cruzer Micro
0x0781, //  SanDisk Corp.
	0x5406, //  Cruzer Micro U3
0x0781, //  SanDisk Corp.
	0x5408, //  Cruzer Titanium U3
0x0781, //  SanDisk Corp.
	0x540e, //  Cruzer Contour Flash Drive
0x0781, //  SanDisk Corp.
	0x5530, //  Cruzer
0x0781, //  SanDisk Corp.
	0x5567, //  Cruzer Blade
0x0781, //  SanDisk Corp.
	0x5e10, //  Encrypted
0x0781, //  SanDisk Corp.
	0x6100, //  Ultra II SD Plus 2GB
0x0781, //  SanDisk Corp.
	0x7100, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7101, //  Pen Flash
0x0781, //  SanDisk Corp.
	0x7102, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7103, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7104, //  Cruzer Micro Mini 256MB Flash Drive
0x0781, //  SanDisk Corp.
	0x7105, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7106, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7112, //  Cruzer Micro 128MB Flash Drive
0x0781, //  SanDisk Corp.
	0x7113, //  Cruzer Micro 256MB Flash Drive
0x0781, //  SanDisk Corp.
	0x7114, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7115, //  Cruzer Mini
0x0781, //  SanDisk Corp.
	0x7301, //  Sansa e100 series (mtp)
0x0781, //  SanDisk Corp.
	0x7302, //  Sansa e100 series (msc)
0x0781, //  SanDisk Corp.
	0x7400, //  Sansa M200 series (mtp)
0x0781, //  SanDisk Corp.
	0x7401, //  Sansa M200 series (msc)
0x0781, //  SanDisk Corp.
	0x7420, //  Sansa E200 series (mtp)
0x0781, //  SanDisk Corp.
	0x7421, //  Sansa E200 Series (msc)
0x0781, //  SanDisk Corp.
	0x7422, //  Sansa E200 series v2 (mtp)
0x0781, //  SanDisk Corp.
	0x7423, //  Sansa E200 series v2 (msc)
0x0781, //  SanDisk Corp.
	0x7430, //  Sansa M200 series
0x0781, //  SanDisk Corp.
	0x7431, //  Sansa M200 series V4 (msc)
0x0781, //  SanDisk Corp.
	0x7432, //  Sansa Clip (mtp)
0x0781, //  SanDisk Corp.
	0x7433, //  Sansa Clip (msc)
0x0781, //  SanDisk Corp.
	0x7434, //  Sansa Clip V2 (mtp)
0x0781, //  SanDisk Corp.
	0x7435, //  Sansa Clip V2 (msc)
0x0781, //  SanDisk Corp.
	0x7450, //  Sansa C250
0x0781, //  SanDisk Corp.
	0x7451, //  Sansa C240
0x0781, //  SanDisk Corp.
	0x7460, //  Sansa Express
0x0781, //  SanDisk Corp.
	0x7480, //  Sansa Connect
0x0781, //  SanDisk Corp.
	0x7481, //  Sansa Connect (in recovery mode)
0x0781, //  SanDisk Corp.
	0x74b0, //  Sansa View (msc)
0x0781, //  SanDisk Corp.
	0x74b1, //  Sansa View (mtp)
0x0781, //  SanDisk Corp.
	0x74c0, //  Sansa Fuze (mtp)
0x0781, //  SanDisk Corp.
	0x74c1, //  Sansa Fuze (msc)
0x0781, //  SanDisk Corp.
	0x74c2, //  Sansa Fuze V2 (mtp)
0x0781, //  SanDisk Corp.
	0x74c3, //  Sansa Fuze V2 (msc)
0x0781, //  SanDisk Corp.
	0x74d0, //  Sansa Clip+ (mtp)
0x0781, //  SanDisk Corp.
	0x74d1, //  Sansa Clip+ (msc)
0x0781, //  SanDisk Corp.
	0x8181, //  Pen Flash
0x0781, //  SanDisk Corp.
	0x8183, //  Hi-Speed Mass Storage Device
0x0781, //  SanDisk Corp.
	0x8185, //  SDCZ2 Cruzer Mini Flash Drive (older, thick)
0x07b8, //  AboCom Systems Inc
	0xe001, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe002, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe003, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe004, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe005, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe006, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe007, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe008, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe009, //  Mass Storage Device
0x07b8, //  AboCom Systems Inc
	0xe00a, //  Mass Storage Device
0x07c4, //  Datafab Systems, Inc.
	0xa002, //  Disk Drive
0x07c4, //  Datafab Systems, Inc.
	0xad01, //  Mass Storage Device
0x07c4, //  Datafab Systems, Inc.
	0xae01, //  Mass Storage Device
0x07c4, //  Datafab Systems, Inc.
	0xaf01, //  Mass Storage Device
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0030, //  Mass Storage (UISDMC12S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0040, //  Mass Storage (UISDMC13S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0201, //  Mass Storage (UISDMC1S & UISDMC3S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0202, //  Mass Storage (UISDMC5S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0203, //  Mass Storage (UISMC5S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0204, //  Mass Storage (UIM4/5S & UIM7S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0205, //  Mass Storage (UIS4/5S & UIS7S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0206, //  Mass Storage (UISDMC10S & UISDMC11S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0207, //  Mass Storage (UPIDMA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0208, //  Mass Storage (UCFC II)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0210, //  Mass Storage (UPIXXA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0213, //  Mass Storage (UPIDA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0214, //  Mass Storage (UPIMA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0215, //  Mass Storage (UPISA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0217, //  Mass Storage (UPISDMA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0223, //  Mass Storage (UCIDA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0224, //  Mass Storage (UCIMA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0225, //  Mass Storage (UIS7S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0227, //  Mass Storage (UCIDMA)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0234, //  Mass Storage (UIM7S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0235, //  Mass Storage (UIS4S-S)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0303, //  Mass Storage (UID10W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0304, //  Mass Storage (UIM10W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0305, //  Mass Storage (UIS10W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0308, //  Mass Storage (UIC10W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0309, // Mass Storage (UISC3W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0310, //  Mass Storage (UISDMA2W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0311, //  Mass Storage (UISDMC14W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0320, //  Mass Storage (UISDMC4W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0321, //  Mass Storage (UISDMC37W)
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0500, //  Mass Storage
0x07cc, //  Carry Computer Eng., Co., Ltd
	0x0501, //  Mass Storage
0x07ff, //  Unknown
	0x00ff, //  Portable Hard Drive

	
	
	
	
	
080b  Cross Match Technologies
	0002  Fingerprint Scanner (After ReNumeration)
	0010  300LC Series Fingerprint Scanner (Before ReNumeration)
080c  Datalogic S.p.A.
	0300  Gryphon D120 Barcode Scanner
	0400  Gryphon D120 Barcode Scanner
	0500  Gryphon D120 Barcode Scanner
	0600  Gryphon M100 Barcode Scanner
080d  Teco Image Systems Co., Ltd
	0102  Hercules Scan@home 48
	0104  3.2Slim
	0110  UMAX AstraSlim 1200 Scanner
0810  Personal Communication Systems, Inc.
	0001  Dual PSX Adaptor
	0002  Dual PCS Adaptor
0813  Mattel, Inc.
	0001  Intel Play QX3 Microscope
	0002  Dual Mode Camera Plus
0819  eLicenser
	0101  License Management and Copy Protection
081a  MG Logic
	1000  Duo Pen Tablet
081b  Indigita Corp.
	0600  Storage Adapter
	0601  Storage Adapter
081c  Mipsys
081e  AlphaSmart, Inc.
	df00  Handheld
0822  Reudo Corp.
	2001  IRXpress Infrared Device
0825  GC Protronics
0826  Data Transit
0827  BroadLogic, Inc.
0828  Sato Corp.
0829  DirecTV Broadband, Inc. (Telocity)
082d  Handspring
	0100  Visor
	0200  Treo
	0300  Treo 600
	0400  Handheld
	0500  Handheld
	0600  Handheld
0830  Palm, Inc.
	0001  m500
	0002  m505
	0003  m515
	0004  Handheld
	0005  Handheld
	0006  Handheld
	0010  Handheld
	0011  Handheld
	0012  Handheld
	0013  Handheld
	0014  Handheld
	0020  i705
	0021  Handheld
	0022  Handheld
	0023  Handheld
	0024  Handheld
	0030  Handheld
	0031  Tungsten W
	0032  Handheld
	0033  Handheld
	0034  Handheld
	0040  m125
	0041  Handheld
	0042  Handheld
	0043  Handheld
	0044  Handheld
	0050  m130
	0051  Handheld
	0052  Handheld
	0053  Handheld
	0054  Handheld
	0060  Tungsten C/E/T/T2/T3 / Zire 71
	0061  Lifedrive / Treo 650/680 / Tunsten E2/T5/TX / Centro / Zire 21/31/72 / Z22
	0062  Handheld
	0063  Handheld
	0064  Handheld
	0070  Zire
	0071  Handheld
	0072  Handheld
	0080  Serial Adapter [for Palm III]
	0081  Handheld
	0082  Handheld
	00a0  Treo 800w
	0101  Pre
0832  Kouwell Electronics Corp.
	5850  Cable
0833  Sourcenext Corp.
	012e  KeikaiDenwa 8 with charger
	039f  KeikaiDenwa 8
0835  Action Star Enterprise Co., Ltd
0839  Samsung Techwin Co., Ltd
	0005  Digimax Camera
	0008  Digimax 230 Camera
	0009  Digimax 340
	000a  Digimax 410
	000e  Digimax 360
	0010  Digimax 300
	1003  Digimax 210SE
	1005  Digimax 220
	1009  Digimax V4
	1012  6500 Document Camera
	1058  S730 Camera
	1064  Digimax D830 Camera
	1542  Digimax 50 Duo
	3000  Digimax 35 MP3
083a  Accton Technology Corp.
	1046  10/100 Ethernet [pegasus]
	1060  HomeLine Adapter
	1f4d  SMC8013WG Broadband Remote NDIS Device
	3046  10/100 Series Adapter
	3060  1/10/100 Adapter
	3501  2664W
	3502  WN3501D Wireless Adapter
	3503  T-Sinus 111 Wireless Adapter
	4501  T-Sinus 154data
	4502  Siemens S30853-S1016-R107 802.11g Wireless Adapter [Intersil ISL3886]
	4505  SMCWUSB-G 802.11bg
	4507  SMCWUSBT-G2 802.11g Wireless Adapter [Atheros AR5523]
	4521  Siemens S30863-S1016-R107-2 802.11g Wireless Adapter [Intersil ISL3887]
	5046  SpeedStream 10/100 Ethernet [pegasus]
	5501  Wireless Adapter 11g
	6500  Cable Modem
	6618  802.11n Wireless Adapter
	7511  Arcadyan 802.11N Wireless Adapter
	7512  Arcadyan 802.11N Wireless Adapter
	7522  Arcadyan 802.11N Wireless Adapter
	8522  Arcadyan 802.11N Wireless Adapter
	8541  WN4501F 802.11g Wireless Adapter [Intersil ISL3887]
	a512  Arcadyan 802.11N Wireless Adapter
	a618  SMCWUSBS-N EZ Connect N Draft 11n Wireless Adapter [Ralink RT2870]
	a701  SMCWUSBS-N3 EZ Connect N Wireless Adapter [Ralink RT3070]
	b004  CPWUE001 USB/Ethernet Adapter
	b522  SMCWUSBS-N2 EZ Connect N Wireless Adapter [Ralink RT2870]
	bb01  BlueExpert Bluetooth Device
	c003  802.11b Wireless Adapter
	c501  Zoom Wireless-G
	c561  802.11a/g Wireless Adapter
	d522  Speedport W 102 Stick IEEE 802.11n USB 2.0 Adapter
	e501  ZD1211B
	e503  Arcadyan WN4501 802.11b/g
	e506  WUS-201 802.11bg
	f501  802.11g Wireless Adapter
	f502  802.11g Wireless Adapter
	f522  Arcadyan WN7512 802.11n
083f  Global Village
	b100  TelePort V.90 Fax/Modem
0840  Argosy Research, Inc.
	0060  Storage Adapter Bridge Module
0841  Rioport.com, Inc.
	0001  Rio 500
0844  Welland Industrial Co., Ltd
0846  NetGear, Inc.
	1001  EA101 10 Mbps 10BASE-T Ethernet [Kawasaki LSI KL5KLUSB101B]
	1002  Ethernet
	1020  FA101 Fast Ethernet USB 1.1
	1040  FA120 Fast Ethernet USB 2.0 [Asix AX88172 / AX8817x]
	4110  MA111(v1) 802.11b Wireless [Intersil Prism 3.0]
	4200  WG121(v1) 54 Mbps Wireless [Intersil ISL3886]
	4210  WG121(v2) 54 Mbps Wireless [Intersil ISL3886]
	4220  WG111(v1) 54 Mbps Wireless [Intersil ISL3886]
	4230  MA111(v2) 802.11b Wireless [SIS SIS 162]
	4240  WG111(v1) rev 2 54 Mbps Wireless [Intersil ISL3887]
	4250  WG111T 802.11g Wireless Adapter [Atheros AR5523]
	4260  WG111v3 54 Mbps Wireless [realtek RTL8187B]
	4300  WG111U Double 108 Mbps Wireless [Atheros AR5004X / AR5005UX]
	4301  WG111U (no firmware) Double 108 Mbps Wireless [Atheros AR5004X / AR5005UX]
	5f00  WPN111 802.11g Wireless Adapter [Atheros AR5523]
	6a00  WG111v2 54 Mbps Wireless [RealTek RTL8187L]
	7100  WN121T RangeMax Next Wireless-N [Marvell TopDog]
	9000  WN111(v1) RangeMax Next Wireless [Marvell 88W8362+88W8060]
	9001  WN111(v2) RangeMax Next Wireless [Atheros AR9170+AR9101]
	9010  WNDA3100v1 802.11abgn [Atheros AR9170+AR9104]
	9011  WNDA3100v2 802.11abgn [Broadcom BCM4323]
	9018  WNDA3200 802.11abgn Wireless Adapter [Atheros AR7010+AR9280]
	9020  WNA3100(v1) Wireless-N 300 [Broadcom BCM43231]
	9030  WNA1100 Wireless-N 150 [Atheros AR9271]
	9040  WNA1000 Wireless-N 150 [Atheros AR9170+AR9101]
	9041  WNA1000M 802.11bgn [Realtek RTL8188CUS]
	a001  PA101 10 Mbps HPNA Home Phoneline RJ-1
084d  Minton Optic Industry Co., Inc.
	0001  Jenoptik JD800i
	0003  S-Cam F5/D-Link DSC-350 Digital Camera
	0011  Argus DC3500 Digital Camera
	0014  Praktica DC 32
	0019  Praktica DPix3000
	0025  Praktica DC 60
	1001  ScanHex SX-35d
084e  KB Gear
	0001  JamCam Camera
	1001  Jam Studio Tablet
	1002  Pablo Tablet
084f  Empeg
	0001  Empeg-Car Mark I/II Player
0850  Fast Point Technologies, Inc.
0851  Macronix International Co., Ltd
	1542  SiPix Blink
	1543  Maxell WS30 Slim Digital Camera, or Pandigital PI8004W01 digital photo frame
	a168  MXIC
0852  CSEM
0853  Topre Corporation
	0100  HHKB Professional
0854  ActiveWire, Inc.
	0100  I/O Board
	0101  I/O Board, rev1
0856  B&B Electronics
	ac01  uLinks USOTL4 RS422/485 Adapter
0858  Hitachi Maxell, Ltd
	3102  Bluetooth Device
	ffff  Maxell module with BlueCore in DFU mode
0859  Minolta Systems Laboratory, Inc.
085a  Xircom
	0001  Portstation Dual Serial Port
	0003  Portstation Paraller Port
	0008  Ethernet
	0009  Ethernet
	000b  Portstation Dual PS/2 Port
	0021  1 port to Serial Converter
	0022  Parallel Port
	0023  2 port to Serial Converter
	0024  Parallel Port
	0027  1 port to Serial Converter
	0028  PortGear to SCSI Converter
	0032  PortStation SCSI Module
	003c  Bluetooth Adapter
	0299  Colorvision, Inc. Monitor Spyder
	8021  1 port to Serial
	8023  2 port to Serial
	8027  PGSDB9 Serial Port
085c  ColorVision, Inc.
	0200  Monitor Spyder
0862  Teletrol Systems, Inc.
0863  Filanet Corp.
0864  NetGear, Inc.
	4100  MA101 802.11b Adapter
	4102  MA101 802.11b Adapter
0867  Data Translation, Inc.
	9812  ECON Data acquisition unit
	9816  DT9816 ECON data acquisition module
	9836  DT9836 data acquisition card
086a  Emagic Soft- und Hardware GmbH
	0001  Unitor8
	0002  AMT8
	0003  MT4
086c  DeTeWe - Deutsche Telephonwerke AG & Co.
	1001  Eumex 504PC ISDN TA
	1002  Eumex 504PC (FlashLoad)
	1003  TA33 ISDN TA
	1004  TA33 (FlashLoad)
	1005  Eumex 604PC HomeNet
	1006  Eumex 604PC HomeNet (FlashLoad)
	1007  Eumex 704PC DSL
	1008  Eumex 704PC DSL (FlashLoad)
	1009  Eumex 724PC DSL
	100a  Eumex 724PC DSL (FlashLoad)
	100b  OpenCom 30
	100c  OpenCom 30 (FlashLoad)
	100d  BeeTel Home 100
	100e  BeeTel Home 100 (FlashLoad)
	1011  USB2DECT
	1012  USB2DECT (FlashLoad)
	1013  Eumex 704PC LAN
	1014  Eumex 704PC LAN (FlashLoad)
	1019  Eumex 504 SE
	101a  Eumex 504 SE (Flash-Mode)
	1021  OpenCom 40
	1022  OpenCom 40 (FlashLoad)
	1023  OpenCom 45
	1024  OpenCom 45 (FlashLoad)
	1025  Sinus 61 data
	1029  dect BOX
	102c  Eumex 604PC HomeNet [FlashLoad]
	1030  Eumex 704PC DSL [FlashLoad]
	1032  OpenCom 40 [FlashLoad]
	1033  OpenCom 30 plus
	1034  OpenCom 30 plus (FlashLoad)
	1041  Eumex 220PC
	1042  Eumex 220PC (FlashMode)
	1055  Eumex 220 Version 2 ISDN TA
	1056  Eumex 220 Version 2 ISDN TA (Flash-Mode)
	2000  OpenCom 1000
086e  System TALKS, Inc.
	1920  SGC-X2UL
086f  MEC IMEX, Inc.
0870  Metricom
	0001  Ricochet GS
0871  SanDisk, Inc.
	0001  SDDR-01 Compact Flash Reader
	0002  SDDR-31 Compact Flash Reader
	0005  SDDR-05 Compact Flash Reader
0873  Xpeed, Inc.
0874  A-Tec Subsystem, Inc.
0879  Comtrol Corp.
087c  Adesso/Kbtek America, Inc.
087d  Jaton Corp.
	5704  Ethernet
087e  Fujitsu Computer Products of America
087f  Virtual IP Group, Inc.
0880  APT Technologies, Inc.
0883  Recording Industry Association of America (RIAA)
0885  Boca Research, Inc.
0886  XAC Automation Corp.
	0630  Intel PC Camera CS630
0887  Hannstar Electronics Corp.
088b  MassWorks, Inc.
	4944  MassWorks ID-75 TouchScreen
088c  Swecoin AB
	2030  Ticket Printer TTP 2030
088e  iLok
	5036  Portable secure storage for software licenses
0892  DioGraphy, Inc.
	0101  Smartdio Reader/Writer
0897  Lauterbach
	0002  Power Debug/Power Debug II
089c  United Technologies Research Cntr.
089d  Icron Technologies Corp.
089e  NST Co., Ltd
089f  Primex Aerospace Co.
08a5  e9, Inc.
08a8  Andrea Electronics
08ae  Macally (Mace Group, Inc.)
08b4  Sorenson Vision, Inc.
08b7  NATSU
	0001  Playstation adapter
08b8  J. Gordon Electronic Design, Inc.
	01f4  USBSIMM1
08b9  RadioShack Corp. (Tandy)
08bb  Texas Instruments Japan
	2702  Speakers
	2900  PCM2900 Audio Codec
	2901  PCM2901 Audio Codec
	2902  PCM2902 Audio Codec
	2904  PCM2904 Audio Codec
	2910  PCM2912 Audio Codec
	29b0  PCM2900B Audio CODEC
	29b2  PCM2902 Audio CODEC
	29b3  PCM2903B Audio CODEC
	29b6  PCM2906B Audio CODEC
	29c0  PCM2900C Audio CODEC
	29c2  PCM2902C Audio CODEC
	29c3  PCM2903C Audio CODEC
	29c6  PCM2906C Audio CODEC
08bd  Citizen Watch Co., Ltd
	0208  CLP-521 Label Printer
	1100  X1-USB Floppy
08c3  Precise Biometrics
	0001  100 SC
	0002  100 A
	0003  100 SC BioKeyboard
	0006  100 A BioKeyboard
	0100  100 MC ISP
	0101  100 MC FingerPrint and SmartCard Reader
	0300  100 AX
	0400  100 SC
	0401  150 MC
	0402  200 MC FingerPrint and SmartCard Reader
	0404  100 SC Upgrade
	0405  150 MC Upgrade
	0406  100 MC Upgrade
08c4  Proxim, Inc.
	0100  Skyline 802.11b Wireless Adapter
	02f2  Farallon Home Phoneline Adapter
08c7  Key Nice Enterprise Co., Ltd
08c8  2Wire, Inc.
08c9  Nippon Telegraph and Telephone Corp.
08ca  Aiptek International, Inc.
	0001  Tablet
	0010  Tablet
	0020  APT-6000U Tablet
	0021  APT-2 Tablet
	0022  Tablet
	0023  Tablet
	0024  Tablet
	0100  Pen Drive
	0102  DualCam
	0103  Pocket DV Digital Camera
	0104  Pocket DVII
	0105  Mega DV(Disk)
	0106  Pocket DV3100+
	0107  Pocket DV3100
	0109  Nisis DV4 Digital Camera
	010a  Trust 738AV LCD PV Mass Storage
	0111  PenCam VGA Plus
	2008  Mini PenCam 2
	2010  Pocket CAM 3 Mega (webcam)
	2011  Pocket CAM 3 Mega (storage)
	2016  PocketCam 2 Mega
	2018  Pencam SD 2M
	2020  Slim 3000F
	2022  Slim 3200
	2024  Pocket DV3500
	2028  Pocket Cam4M
	2040  Pocket DV4100M
	2042  Pocket DV5100M Composite Device
	2043  Pocket DV5100M (Disk)
	2060  Pocket DV5300
08cd  Jue Hsun Ind. Corp.
08ce  Long Well Electronics Corp.
08cf  Productivity Enhancement Products
08d1  smartBridges, Inc.
	0001  smartNIC Ethernet [catc]
	0003  smartNIC 2 PnP Ethernet
08d3  Virtual Ink
08d4  Fujitsu Siemens Computers
	0009  SCR SmartCard Reader
08d8  IXXAT Automation GmbH
	0002  USB-to-CAN compact
	0003  USB-to-CAN II
	0100  USB-to-CAN
08d9  Increment P Corp.
08dd  Billionton Systems, Inc.
	0112  Wireless LAN Adapter
	0113  Wireless LAN Adapter
	0986  USB-100N Ethernet [pegasus]
	0987  USBLP-100 HomePNA Ethernet [pegasus]
	0988  USBEL-100 Ethernet [pegasus]
	1986  10/100 LAN Adapter
	2103  DVB-T TV-Tuner Card-R
	8511  USBE-100 Ethernet [pegasus2]
	90ff  USB2AR Ethernet
08de  ???
	7a01  802.11b Adapter
08df  Spyrus, Inc.
	0001  Rosetta Token V1
	0002  Rosetta Token V2
	0003  Rosetta Token V3
	0a00  Lynks Interface
08e3  Olitec, Inc.
	0002  USB-RS232 Bridge
	0100  Interface ADSL
	0101  Interface ADSL
	0102  ADSL
	0301  RNIS
08e4  Pioneer Corp.
08e5  Litronic
08e6  Gemplus
	0001  GemPC-Touch 430
	0430  GemPC430 SmartCard Reader
	0432  GemPC432 SmartCard Reader
	0435  GemPC435 SmartCard Reader
	0437  GemPC433 SL SmartCard Reader
	1359  UA SECURE STORAGE TOKEN
	2202  Gem e-Seal Pro Token
	3437  GemPC Twin SmartCard Reader
	3438  GemPC Key SmartCard Reader
	3478  PinPad Smart Card Reader
	4433  GemPC433-Swap
	5501  GemProx-PU Contactless Smart Card Reader
	ace0  UA HYBRID TOKEN
08e7  Pan-International Wire & Cable
08e8  Integrated Memory Logic
08e9  Extended Systems, Inc.
	0100  XTNDAccess IrDA Dongle
08ea  Ericsson, Inc., Blue Ridge Labs
	00c9  ADSL Modem HM120dp Loader
	00ca  ADSL WAN Modem HM120dp
	00ce  HM230d Virtual Bus for Helium
	abba  USB Driver for Bluetooth Wireless Technology
	abbb  Bluetooth Device in DFU State
08ec  M-Systems Flash Disk Pioneers
	0001  TravelDrive 2C
	0002  TravelDrive 2C
	0005  TravelDrive 2C
	0008  TravelDrive 2C
	0010  DiskOnKey
	0011  DiskOnKey
	0012  TravelDrive 2C
	0014  TravelDrive 2C
	0015  Kingston DataTraveler ELITE
	0016  Kingston DataTraveler U3
	0020  TravelDrive
	0021  TravelDrive
	0022  TravelDrive
	0023  TravelDrive
	0024  TravelDrive
	0025  TravelDrive
	0026  TravelDrive
	0027  TravelDrive
	0028  TravelDrive
	0029  TravelDrive
	0030  TravelDrive
	0822  TravelDrive 2C
	0832  Hi-Speed Mass Storage Device
	0834  M-Disk 220
	0998  Kingston Data Traveler2.0 Disk Driver
	0999  Kingston Data Traveler2.0 Disk Driver
	1000  TravelDrive 2C
	2000  TravelDrive 2C
	2038  TravelDrive
	2039  TravelDrive
	204a  TravelDrive
	204b  TravelDrive
08ed  MediaTek Inc.
	0002  CECT M800 memory card
08ee  CCSI/Hesso
08f0  Corex Technologies
08f1  CTI Electronics Corp.
08f2  Gotop Information Inc.
	007f  Super Q2 Tablet
08f5  SysTec Co., Ltd
08f6  Logic 3 International, Ltd
08f7  Vernier
	0001  LabPro
	0002  EasyTemp/Go!Temp
	0003  Go!Link
	0004  Go!Motion
08f8  Keen Top International Enterprise Co., Ltd
08f9  Wipro Technologies
08fa  Caere
08fb  Socket Communications
08fc  Sicon Cable Technology Co., Ltd
08fd  Digianswer A/S
	0001  Bluetooth Device
08ff  AuthenTec, Inc.
	1600  AES1600
	1610  AES1600
	1660  AES1660 Fingerprint Sensor
	1680  AES1660 Fingerprint Sensor
	168f  AES1660 Fingerprint Sensor
	2500  AES2501
	2501  AES2501
	2502  AES2501
	2503  AES2501
	2504  AES2501
	2505  AES2501
	2506  AES2501
	2507  AES2501
	2508  AES2501
	2509  AES2501
	250a  AES2501
	250b  AES2501
	250c  AES2501
	250d  AES2501
	250e  AES2501
	250f  AES2501
	2510  AES2510
	2550  AES2550 Fingerprint Sensor
	2580  AES2501 Fingerprint Sensor
	2588  AES2501
	2589  AES2501
	258a  AES2501
	258b  AES2501
	258c  AES2501
	258d  AES2501
	258e  AES2501
	258f  AES2501
	2660  AES2660 Fingerprint Sensor
	2680  AES2660 Fingerprint Sensor
	268f  AES2660 Fingerprint Sensor
	2810  AES2810
	3400  AES3400 TruePrint Sensor
	3401  AES3400 Sensor
	3402  AES3400 Sensor
	3403  AES3400 Sensor
	3404  AES3400 TruePrint Sensor
	3405  AES3400 TruePrint Sensor
	3406  AES3400 TruePrint Sensor
	3407  AES3400 TruePrint Sensor
	4902  BioMV with TruePrint AES3500
	4903  BioMV with TruePrint AES3400
	5500  AES4000
	5501  AES4000 TruePrint Sensor
	5503  AES4000 TruePrint Sensor
	5505  AES4000 TruePrint Sensor
	5507  AES4000 TruePrint Sensor
	55ff  AES4000 TruePrint Sensor.
	5700  AES3500 Fingerprint Reader
	5701  AES3500 TruePrint Sensor
	5702  AES3500 TruePrint Sensor
	5703  AES3500 TruePrint Sensor
	5704  AES3500-BZ TruePrint Sensor
	5705  AES3500-BZ TruePrint Sensor
	5706  AES3500-BZ TruePrint Sensor
	5707  AES3500-BZ TruePrint Sensor
	5710  AES3500 TruePrint Sensor
	5711  AES3500 TruePrint Sensor
	5712  AES3500 TruePrint Sensor
	5713  AES3500 TruePrint Sensor
	5714  AES3500-BZ TruePrint Sensor
	5715  AES3500-BZ TruePrint Sensor
	5716  AES3500-BZ TruePrint Sensor
	5717  AES3500-BZ TruePrint Sensor
	5730  AES3500 TruePrint Sensor
	5731  AES3500 TruePrint Sensor
	5732  AES3500 TruePrint Sensor
	5733  AES3500 TruePrint Sensor
	5734  AES3500-BZ TruePrint Sensor
	5735  AES3500-BZ TruePrint Sensor
	5736  AES3500-BZ TruePrint Sensor
	5737  AES3500-BZ TruePrint Sensor
	afe3  FingerLoc Sensor Module (Anchor)
	afe4  FingerLoc Sensor Module (Anchor)
	afe5  FingerLoc Sensor Module (Anchor)
	afe6  FingerLoc Sensor Module (Anchor)
	fffd  AES2510 Sensor (USB Emulator)
	ffff  Sensor (Emulator)
0900  Pinnacle Systems, Inc.
0901  VST Technologies
	0001  Hard Drive Adapter (TPP)
	0002  SigmaDrive Adapter (TPP)
0906  Faraday Technology Corp.
0908  ShenZhen SANZHAI Technology Co.,Ltd
	2701  Spy Pen VGA
0909  Audio-Technica Corp.
090a  Trumpion Microelectronics, Inc.
	1001  T33520 Flash Card Controller
	1100  Comotron C3310 MP3 player
	1200  MP3 player
	1540  Digitex Container Flash Disk
090b  Neurosmith
090c  Silicon Motion, Inc. - Taiwan (formerly Feiya Technology Corp.)
	0371  Silicon Motion SM371 Camera
	0373  Silicon Motion Camera
	037a  Silicon Motion Camera
	037b  Silicon Motion Camera
	1000  64MB QDI U2 DISK
	1132  5-in-1 Card Reader
	337b  Silicon Motion Camera
	3710  Silicon Motion Camera
	3720  Silicon Motion Camera
	37bc  HP Webcam-101 Integrated Camera
	37c0  Silicon Motion Camera
	6000  SD/SDHC Card Reader (SG365 / FlexiDrive XC+)
	6200  microSD card reader
	837b  Silicon Motion Camera
	937b  Silicon Motion Camera
	b370  Silicon Motion SM370 Camera
	b371  Silicon Motion SM371 Camera
090d  Multiport Computer Vertriebs GmbH
090e  Shining Technology, Inc.
090f  Fujitsu Devices, Inc.
0910  Alation Systems, Inc.
0911  Philips Speech Processing
	149a  SpeechMike II Pro Plus LFH5276
	2512  SpeechMike Pro
0912  Voquette, Inc.
0915  GlobeSpan, Inc.
	0001  DSL Modem
	0002  ADSL ATM Modem
	0005  LAN Modem
	2000  802.11 Adapter
	2002  802.11 Adapter
	8000  ADSL LAN Modem
	8005  DSL-302G Modem
	8101  ADSL WAN Modem
	8102  DSL-200 ADSL Modem
	8103  DSL-200 ADSL Modem
	8104  DSL-200 Modem
	8400  DSL Modem
	8401  DSL Modem
	8402  DSL Modem
	8500  DSL Modem
	8501  DSL Modem
0917  SmartDisk Corp.
	0001  eFilm Reader-11 SM/CF
	0002  eFilm Reader-11 SM
	0003  eFilm Reader-11 CF
	0200  FireFly
	0201  FireLite
	0202  STORAGE ADAPTER (FirePower)
	0204  FlashTrax Storage
	0205  STORAGE ADAPTER (CrossFire)
	0206  FireFly 20G HDD
	0207  FireLite
	020f  STORAGE ADAPTER (FireLite)
	da01  eFilm Reader-11 Test
	ffff  eFilm Reader-11 (Class/PDR)
0919  Tiger Electronics
	0100  Fast Flicks Digital Camera
091e  Garmin International
	0003  GPS (various models)
	0004  iQue 3600
	0200  Data Card Programmer (install)
	1200  Data Card Programmer
	21a5  etrex Cx (msc)
	2271  Edge 605/705
	2295  Colorado 300
	22b6  eTrex Vista HCx (Mass Storage mode)
	2353  Nüvi 205T
	2519  eTrex 30
	2535  Edge 800
0920  Echelon Co.
	7500  Network Interface
0921  GoHubs, Inc.
	1001  GoCOM232 Serial
0922  Dymo-CoStar Corp.
	0007  LabelWriter 330
	0009  LabelWriter 310
	001a  LabelWriter 400 Turbo
	0020  LabelWriter 450
0923  IC Media Corp.
	010f  SIIG MobileCam
0924  Xerox
	23dd  DocuPrint M760 (X760_USB)
	3ce8  Phaser 3428 Printer
	3d5b  Phaser 6115MFP TWAIN Scanner
	420f  WorkCentre PE220 Series
	421f  M20 Scanner
	423b  Printing Support
	ffef  WorkCenter M15
	fffb  DocuPrint M750 (X750_USB)
0925  Lakeview Research
	0005  Gamtec.,Ltd SmartJoy PLUS Adapter
	8101  Phidgets, Inc., 1-Motor PhidgetServo v2.0
	8104  Phidgets, Inc., 4-Motor PhidgetServo v2.0
	8800  WiseGroup Ltd, MP-8800 Quad Joypad
	8866  WiseGroup Ltd, MP-8866 Dual Joypad
0927  Summus, Ltd
0928  Oxford Semiconductor, Ltd
0929  American Biometric Co.
092a  Toshiba Information & Industrial Sys. And Services
092b  Sena Technologies, Inc.
092f  Northern Embedded Science/CAVNEX
	0004  JTAG-4
	0005  JTAG-5
0930  Toshiba Corp.
	0009  Gigabeat F/X (HDD audio player)
	000c  Gigabeat F (mtp)
	0010  Gigabeat S (mtp)
	0301  PCX1100U Cable Modem (WDM)
	0302  PCX2000 Cable Modem (WDM)
	0305  Cable Modem PCX3000
	0307  Cable Modem PCX2500
	0308  PCX2200 Cable Modem (WDM)
	0309  PCX5000 Cable Modem (WDM)
	030b  Cable Modem PCX2600
	0501  Bluetooth Controller
	0502  Integrated Bluetooth
	0503  Bluetooth Controller
	0505  Integrated Bluetooth
	0506  Integrated Bluetooth
	0507  Bluetooth Adapter
	0508  Integrated Bluetooth HCI
	0509  BT EDR Dongle
	0706  PocketPC e740
	0707  Pocket PC e330 Series
	0708  Pocket PC e350 Series
	0709  Pocket PC e750 Series
	070a  Pocket PC e400 Series
	070b  Pocket PC e800 Series
	0a07  WLM-10U1 802.11abgn Wireless Adapter [Ralink RT3572]
	0b05  PX1220E-1G25 External hard drive
	0b09  PX1396E-3T01 External hard drive
	1300  Wireless Broadband (CDMA EV-DO) SM-Bus Minicard Status Port
	1301  Wireless Broadband (CDMA EV-DO) Minicard Status Port
	1302  Wireless Broadband (3G HSDPA) SM-Bus Minicard Status Port
	1303  Wireless Broadband (3G HSDPA) Minicard Status Port
	1308  Broadband (3G HSDPA) SM-Bus Minicard Diagnostics Port
	130b  F3507g Mobile Broadband Module
	130c  F3607gw Mobile Broadband Module
	1311  F3607gw v2 Mobile Broadband Module
	1400  Memory Stick 2GB
	642f  TravelDrive
	6506  TravelDrive 2C
	6507  TravelDrive 2C
	6508  TravelDrive 2C
	6509  TravelDrive 2C
	6510  TravelDrive 2C
	6517  TravelDrive 2C
	6518  TravelDrive 2C
	6519  Kingston DataTraveler 2.0 USB Stick
	651a  TravelDrive 2C
	651b  TravelDrive 2C
	651c  TravelDrive 2C
	651d  TravelDrive 2C
	651e  TravelDrive 2C
	651f  TravelDrive 2C
	6520  TravelDrive 2C
	6521  TravelDrive 2C
	6522  TravelDrive 2C
	6523  TravelDrive
	6524  TravelDrive
	6525  TravelDrive
	6526  TravelDrive
	6527  TravelDrive
	6528  TravelDrive
	6529  TravelDrive
	652a  TravelDrive
	652b  TravelDrive
	652c  TravelDrive
	652d  TravelDrive
	652f  TravelDrive
	6530  TravelDrive
	6531  TravelDrive
	6532  256M Stick
	6533  512M Stick
	6534  TravelDrive
	653c  Kingston DataTraveler 2.0 Stick (512M)
	653d  Kingston DataTraveler 2.0 Stick (1GB)
	653e  Flash Memory
	6540  TransMemory Flash Memory
	6544  Kingston DataTraveler 2.0 Stick (2GB)
	6545  Kingston DataTraveler 102 Flash Drive / HEMA Flash Drive 2 GB / PNY Attache 4GB Stick
0931  Harmonic Data Systems, Ltd
0932  Crescentec Corp.
	0300  VideoAdvantage
	0302  Syntek DC-112X
	0320  VideoAdvantage
	0482  USB2.0 TVBOX
	1100  DC-1100 Video Enhamcement Device
	1112  Veo Web Camera
	a311  Video Enhancement Device
0933  Quantum Corp.
0934  Netcom Systems
0936  NuTesla
	0030  Composite Device, Mass Storage Device (Flash Drive) amd HID
	003c  Rhythmedics HID Bootloader
0939  Lumberg, Inc.
	0b15  Toshiba Stor.E Alu 2 1TB (PX1710E-1HJ0)
093a  Pixart Imaging, Inc.
	0007  CMOS 100K-R Rev. 1.90
	010e  Digital camera, CD302N/Elta Medi@ digi-cam/HE-501A
	010f  Argus DC-1610/DC-1620/Emprex PCD3600/Philips P44417B keychain camera/Precision Mini,Model HA513A/Vivitar Vivicam 55
	020f  Bullet Line Photo Viewer
	050f  Mars-Semi Pc-Camera
	2460  Q-TEC WEBCAM 100
	2468  SoC PC-Camera
	2470  SoC PC-Camera
	2471  SoC PC-Camera
	2500  USB Optical Mouse
	2510  Optical Mouse
	2600  Typhoon Easycam USB 330K (newer)/Typhoon Easycam USB 2.0 VGA 1.3M/Sansun SN-508
	2601  SPC 610NC Laptop Camera
	2603  PAC7312 Camera
	2608  PAC7311 Trust WB-3300p
	260e  PAC7311 Gigaware VGA PC Camera:Trust WB-3350p:SIGMA cam 2350
	260f  PAC7311 SnakeCam
	2621  PAC731x Trust Webcam
	2624  Webcam
093b  Plextor Corp.
	0010  Storage Adapter
	0011  PlexWriter 40/12/40U
	0041  PX-708A DVD RW
	0042  PX-712UF DVD RW
	a002  ConvertX M402U XLOADER
	a003  ConvertX AV100U A/V Capture Audio
	a004  ConvertX TV402U XLOADER
	a005  ConvertX TV100U A/V Capture
	a102  ConvertX M402U A/V Capture
	a104  ConvertX PX-TV402U/NA
093c  Intrepid Control Systems, Inc.
	0601  ValueCAN
	0701  NeoVI Blue vehicle bus interface
093d  InnoSync, Inc.
093e  J.S.T. Mfg. Co., Ltd
093f  Olympia Telecom Vertriebs GmbH
0940  Japan Storage Battery Co., Ltd
0941  Photobit Corp.
0942  i2Go.com, LLC
0943  HCL Technologies India Private, Ltd
0944  KORG, Inc.
	0001  PXR4 4-Track Digital Recorder
	0020  KAOSS Pad KP3 Dynamic Effect/Sampler
	0023  KAOSSILATOR PRO Dynamic Phrase Synthesizer
	010d  nanoKEY MIDI keyboard
	010e  nanoPAD pad controller
	010f  nanoKONTROL studio controller
	0117  nanoKONTROL2 MIDI Controller
	0f03  K-Series K61P MIDI studio controller
0945  Pasco Scientific
0948  Kronauer music in digital
	0301  USB Pro (24/48)
	0302  USB Pro (24/96 playback)
	0303  USB Pro (24/96 record)
	0304  USB Pro (16/48)
	1105  USB One
094b  Linkup Systems Corp.
	0001  neonode N2
094d  Cable Television Laboratories
094f  Yano
	0101  U640MO-03
	05fc  METALWEAR-HDD
0951  Kingston Technology
	0008  Ethernet
	000a  KNU101TX 100baseTX Ethernet
	1600  DataTraveler II Pen Drive
	1601  DataTraveler II+ Pen Drive
	1602  DataTraveler Mini
	1603  DataTraveler 1GB/2GB Pen Drive
	1606  Eee PC 701 SD Card Reader [ENE UB6225]
	1607  DataTraveler 100
	1613  DataTraveler DT101C Flash Drive
	1616  DataTraveler Locker 4GB
	1624  DataTraveler G2 4GB Pen Drive
	1625  DataTraveler 101 II
	162a  DataTraveler 112 4GB Pen Drive
	1643  DataTraveler G3 4GB
	1653  Data Traveler 100 G2 8 GiB
0954  RPM Systems Corp.
0955  NVidia Corp.
	7100  Notion Ink Adam
0956  BSquare Corp.
0957  Agilent Technologies, Inc.
	0200  E-Video DC-350 Camera
	0202  E-Video DC-350 Camera
0958  CompuLink Research, Inc.
0959  Cologne Chip AG
	2bd0  Intelligent ISDN (Ver. 3.60.04)
095a  Portsmith
	3003  Express Ethernet
095b  Medialogic Corp.
095c  K-Tec Electronics
095d  Polycom, Inc.
	0001  Polycom ViaVideo
0967  Acer (??)
	0204  WarpLink 802.11b Adapter
0968  Catalyst Enterprises, Inc.
096e  Feitian Technologies, Inc.
	0802  ePass2000 (G&D STARCOS SPK 2.4)
0971  Gretag-Macbeth AG
	2003  Eye-One display
	2005  Huey
	2007  ColorMunki
0973  Schlumberger
	0001  e-gate Smart Card
0974  Datagraphix, a business unit of Anacomp
0975  OL'E Communications, Inc.
0976  Adirondack Wire & Cable
0977  Lightsurf Technologies
0978  Beckhoff GmbH
0979  Jeilin Technology Corp., Ltd
	0224  JL2005A Toy Camera
	0226  JL2005A Toy Camera
	0227  JL2005B/C/D Toy Camera
097a  Minds At Work LLC
	0001  Digital Wallet
097b  Knudsen Engineering, Ltd
097c  Marunix Co., Ltd
097d  Rosun Technologies, Inc.
097f  Barun Electronics Co., Ltd
0981  Oak Technology, Ltd
0984  Apricorn
	0200  Hard Drive Storage (TPP)
0985  cab Produkttechnik GmbH & Co KG
	0045  Mach4/200 Label Printer
	00a3  A3/200 or A3/300 Label Printer
0986  Matsushita Electric Works, Ltd.
098c  Vitana Corp.
098d  INDesign
098e  Integrated Intellectual Property, Inc.
098f  Kenwood TMI Corp.
0993  Gemstar eBook Group, Ltd
	0001  REB1100 eBook Reader
	0002  eBook
0996  Integrated Telecom Express, Inc.
099a  Zippy Technology Corp.
	0638  Sanwa Supply Inc. Small Keyboard
	610c  EL-610 Super Mini Electron luminescent Keyboard
	7160  Hyper Slim Keyboard
09a3  PairGain Technologies
09a4  Contech Research, Inc.
09a5  VCON Telecommunications
09a6  Poinchips
	8001  Mass Storage Device
09a7  Data Transmission Network Corp.
09a8  Lin Shiung Enterprise Co., Ltd
09a9  Smart Card Technologies Co., Ltd
09aa  Intersil Corp.
	1000  Prism GT 802.11b/g Adapter
	3642  Prism 2.x 802.11b Adapter
09ab  Japan Cash Machine Co., Ltd.
09ae  Tripp Lite
09b2  Franklin Electronic Publishers, Inc.
	0001  eBookman Palm Computer
09b3  Altius Solutions, Inc.
09b4  MDS Telephone Systems
09b5  Celltrix Technology Co., Ltd
09bc  Grundig
	0002  MPaxx MP150 MP3 Player
09be  MySmart.Com
	0001  MySmartPad
09bf  Auerswald GmbH & Co. KG
	00c0  COMpact 2104 ISDN PBX
	00db  COMpact 4410/2206 ISDN
	00dc  COMpact 4406 DSL (PBX)
	00dd  COMpact 2204 (PBX)
	00de  COMpact 2104 (Rev.2 PBX)
	00e0  COMmander Business (PBX)
	00e2  COMmander Basic.2 (PBX)
	00f1  COMfort 2000 (System telephone)
	00f2  COMfort 1200 (System telephone)
	00f5  COMfortel 2500 (System telephone)
	8000  COMpact 2104 DSL (DSL modem)
	8001  COMpact 4406 DSL (DSL modem)
	8002  Analog/ISDN Converter (Line converter)
	8005  WG-640 (Automatic event dialer)
09c0  Genpix Electronics, LLC
	0136  Axon CNS, MultiClamp 700B
	0202  8PSK DVB-S tuner
	0203  Skywalker-1 DVB-S tuner
	0204  Skywalker-CW3K DVB-S tuner
	0205  Skywalker-CW3K DVB-S tuner
	0206  Skywalker-2 DVB-S tuner
09c1  Arris Interactive LLC
	1337  TOUCHSTONE DEVICE
09c2  Nisca Corp.
09c3  ActivCard, Inc.
	0007  Reader V2
	0008  ZFG-9800-AC SmartCard Reader
	0014  ActivIdentity ActivKey SIM USB Token
09c4  ACTiSYS Corp.
	0011  ACT-IR2000U IrDA Dongle
09c5  Memory Corp.
09cc  Workbit Corp.
	0404  BAFO USB-ATA/ATAPI Bridge Controller
09cd  Psion Dacom Home Networks, Ltd
	2001  Psion WaveFinder DAB radio receiver
09ce  City Electronics, Ltd
09cf  Electronics Testing Center, Taiwan
09d1  NeoMagic, Inc.
09d2  Vreelin Engineering, Inc.
09d3  Com One
	0001  ISDN TA
09d7  Novatel Wireless
	0100  NovAtel FlexPack GPS receiver
09d9  KRF Tech, Ltd
09da  A4 Tech Co., Ltd
	0006  Optical Mouse WOP-35 / Trust 450L Optical Mouse
	000a  Optical Mouse Opto 510D
	0018  Trust Human Interface Device
	001a  Wireless Mouse & RXM-15 Receiver
	002a  Wireless Optical Mouse NB-30
	022b  Wireless Mouse (Battery Free)
	024f  RF Receiver and G6-20D Wireless Optical Mouse
	032b  Wireless Mouse (Battery Free)
	8090  X-718BK Oscar Optical Gaming Mouse
	9090  XL-750BK Laser Mouse
09db  Measurement Computing Corp.
	0075  MiniLab 1008
	0076  PMD-1024
	007a  PMD-1208LS
	0081  USB-1616FS
	0082  USB-1208FS
	0088  USB-1616FS internal hub
09dc  Aimex Corp.
09dd  Fellowes, Inc.
09df  Addonics Technologies Corp.
09e1  Intellon Corp.
	5121  MicroLink dLAN
09e5  Jo-Dan International, Inc.
09e6  Silutia, Inc.
09e7  Real 3D, Inc.
09e8  AKAI  Professional M.I. Corp.
	0062  MPD16 MIDI Pad Controller Unit
	006d  EWI electronic wind instrument
	0071  MPK25 MIDI Keyboard
	0076  LPK25 MIDI Keyboard
09e9  Chen-Source, Inc.
09eb  IM Networks, Inc.
	4331  iRhythm Tuner Remote
09ef  Xitel
	0101  MD-Port DG2 MiniDisc Interface
09f3  GoFlight, Inc.
	0018  GF-46 Multi-Mode Display Module
	0028  RP-48 Combination Pushbutton-Rotary Module
	0048  LGTII - Landing Gear and Trim Control Module
	0064  MCPPro - Airliner Mode Control Panel (Autopilot)
	0300  EFIS - Electronic Flight Information System
09f5  AresCom
	0168  Network Adapter
	0188  LAN Adapter
	0850  Adapter
09f6  RocketChips, Inc.
09f7  Edu-Science (H.K.), Ltd
09f8  SoftConnex Technologies, Inc.
09f9  Bay Associates
09fa  Mtek Vision
09fb  Altera
	6001  Blaster
09ff  Gain Technology Corp.
0a00  Liquid Audio
0a01  ViA, Inc.
0a07  Ontrak Control Systems Inc.
	0064  ADU100 Data Acquisition Interface
	0078  ADU120 Data Acquisition Interface
	0082  ADU130 Data Acquisition Interface
	00c8  ADU200 Relay I/O Interface
	00d0  ADU208 Relay I/O Interface
	00da  ADU218 Solid-State Relay I/O Interface
0a0b  Cybex Computer Products Co.
0a11  Xentec, Inc.
0a12  Cambridge Silicon Radio, Ltd
	0001  Bluetooth Dongle (HCI mode)
	0002  Frontline Test Equipment Bluetooth Device
	0003  Nanosira
	0004  Nanosira WHQL Reference Radio
	0005  Nanosira-Multimedia
	0006  Nanosira-Multimedia WHQL Reference Radio
	0007  Nanosira3-ROM
	0008  Nanosira3-ROM
	0009  Nanosira4-EDR WHQL Reference Radio
	000a  Nanosira4-EDR-ROM
	000b  Nanosira5-ROM
	0043  Bluetooth Device
	0100  Casira with BlueCore2-External Module
	0101  Casira with BlueCore2-Flash Module
	0102  Casira with BlueCore3-Multimedia Module
	0103  Casira with BlueCore3-Flash Module
	0104  Casira with BlueCore4-External Module
	0105  Casira with BlueCore4-Multimedia Module
	1000  Bluetooth Dongle (HID proxy mode)
	1010  Bluetooth Device
	1011  Bluetooth Device
	1012  Bluetooth Device
	ffff  USB Bluetooth Device in DFU State
0a13  Telebyte, Inc.
0a14  Spacelabs Medical, Inc.
0a15  Scalar Corp.
0a16  Trek Technology (S) PTE, Ltd
	1111  ThumbDrive
	8888  IBM USB Memory Key
	9988  Trek2000 TD-G2
0a17  Pentax Corp.
	0004  Optio 330
	0006  Optio S
	0007  Optio 550
	0009  Optio 33WR
	000a  Optio 555
	000c  Optio 43WR (mass storage mode)
	000d  Optio 43WR
	0015  Optio S40/S5i
	003b  Optio 50 (mass storage mode)
	003d  Optio S55
	0043  *ist DL
	0047  Optio S60
	0052  Optio 60 Digital Camera
	006e  K10D
	0070  K100D
	0093  K200D
	00a7  Optio E50
	1001  EI2000 Camera powered by Digita!
0a18  Heidelberger Druckmaschinen AG
0a19  Hua Geng Technologies, Inc.
0a21  Medtronic Physio Control Corp.
	8001  MMT-7305WW [Medtronic Minimed CareLink]
0a22  Century Semiconductor USA, Inc.
0a27  Datacard Group
	0102  SP35
0a2c  AK-Modul-Bus Computer GmbH
	0008  GPIO Ports
0a34  TG3 Electronics, Inc.
	0101  TG82tp
	0110  Deck 82-key backlit keyboard
0a35  Radikal Technologies
	002a  SAC - Software Assigned Controller
	008a  SAC Hub
0a39  Gilat Satellite Networks, Ltd
0a3a  PentaMedia Co., Ltd
	0163  KN-W510U 1.0 Wireless LAN Adapter
0a3c  NTT DoCoMo, Inc.
0a3d  Varo Vision
0a3f  Swissonic AG
0a43  Boca Systems, Inc.
0a46  Davicom Semiconductor, Inc.
	0268  ST268
	6688  ZT6688 Fast Ethernet Adapter
	8515  ADMtek ADM8515 NIC
	9000  DM9000E Fast Ethernet Adapter
	9601  DM9601 Fast Ethernet Adapter
0a47  Hirose Electric
0a48  I/O Interconnect
	3233  Multimedia Card Reader
	3239  Multimedia Card Reader
	3258  Dane Elec zMate SD Reader
	3259  Dane Elec zMate CF Reader
	5000  MediaGear xD-SM
	500a  Mass Storage Device
	500f  Mass Storage Device
	5010  Mass Storage Device
	5011  Mass Storage Device
	5014  Mass Storage Device
	5020  Mass Storage Device
	5021  Mass Storage Device
	5022  Mass Storage Device
	5023  Mass Storage Device
	5024  Mass Storage Device
	5025  Mass Storage Device
0a4b  Fujitsu Media Devices, Ltd
0a4c  Computex Co., Ltd
	15d9  OPTICAL MOUSE
0a4d  Evolution Electronics, Ltd
	0064  MK-225 Driver
	0065  MK-225C Driver
	0066  MK-225C Driver
	0067  MK-425C Driver
	0078  MK-37 Driver
	0079  MK-37C Driver
	007a  MK-37C Driver
	008c  TerraTec MIDI MASTER
	008d  MK-249C Driver
	008e  MK-249C MIDI Keyboard
	008f  MK-449C Driver
	0090  Keystation 49e Driver
	0091  Keystation 61es Driver
	00a0  MK-361 Driver
	00a1  MK-361C Driver
	00a2  MK-361C Driver
	00a3  MK-461C MIDI Keyboard
	00b5  Keystation Pro 88 Driver
	00d2  E-Keys Driver
	00f0  UC-16 Driver
	00f1  X-Session Driver
	00f5  UC-33e MIDI Controller
0a4e  Steinberg Soft-und Hardware GmbH
0a4f  Litton Systems, Inc.
0a50  Mimaki Engineering Co., Ltd
0a51  Sony Electronics, Inc.
0a52  Jebsee Electronics Co., Ltd
0a53  Portable Peripheral Co., Ltd
	1000  Scanner
	2000  Q-Scan A6 Scanner
	2001  Q-Scan A6 Scanner
	2013  Media Drive A6 Scanner
	2014  Media Drive A6 Scanner
	2015  BizCardReader 600C
	2016  BizCardReader 600C
	202a  Scanshell-CSSN
	3000  Q-Scan A8 Scanner
	3002  Q-Scan A8 Reader
	3015  BizCardReader 300G
	302a  LM9832 - PA570 Mini Business Card Scanner [Targus]
	5001  BizCardReader 900C
0a5a  Electronics For Imaging, Inc.
0a5b  EAsics NV
0a5c  Broadcom Corp.
	0201  iLine10(tm) Network Adapter
	2000  Bluetooth Device
	2001  Bluetooth Device
	2009  BCM2035 Bluetooth
	200a  BCM2035 Bluetooth dongle
	200f  Bluetooth Controller
	201d  Bluetooth Device
	201e  IBM Integrated Bluetooth IV
	2020  Bluetooth dongle
	2021  BCM2035B3 Bluetooth Adapter
	2033  BCM2033 Bluetooth
	2035  BCM2035 Bluetooth
	2038  Blutonium Device
	2039  BCM2045 Bluetooth
	2045  Bluetooth Controller
	2046  Bluetooth Device
	2047  Bluetooth Device
	205e  Bluetooth Device
	2100  Bluetooth 2.0+eDR dongle
	2101  BCM2045 Bluetooth
	2102  ANYCOM Blue USB-200/250
	2110  Bluetooth Controller
	2111  ANYCOM Blue USB-UHE 200/250
	2120  2045 Bluetooth 2.0 USB-UHE Device with trace filter
	2121  BCM2210 Bluetooth
	2122  Bluetooth 2.0+EDR dongle
	2123  Bluetooth dongle
	2130  2045 Bluetooth 2.0 USB-UHE Device with trace filter
	2131  2045 Bluetooth 2.0 Device with trace filter
	2145  Bluetooth with Enhanced Data Rate II
	2148  BCM92046DG-CL1ROM Bluetooth 2.1 Adapter
	2150  BCM2046 Bluetooth Device
	2151  Bluetooth
	217f  Bluetooth Controller
	219b  Bluetooth 2.1 Device
	21b1  HP Bluetooth Module
	21b4  BCM2070 Bluetooth 2.1 + EDR
	21b9  BCM2070 Bluetooth 2.1 + EDR
	21ba  BCM2070 Bluetooth 2.1 + EDR
	21bb  BCM2070 Bluetooth 2.1 + EDR
	21bc  BCM2070 Bluetooth 2.1 + EDR
	21bd  BCM2070 Bluetooth 2.1 + EDR
	22be  BCM2070 Bluetooth 3.0 + HS
	4500  BCM2046B1 USB 2.0 Hub (part of BCM2046 Bluetooth)
	4502  Keyboard (Boot Interface Subclass)
	4503  Mouse (Boot Interface Subclass)
	5800  BCM5880 Secure Applications Processor
	5801  BCM5880 Secure Applications Processor with fingerprint swipe sensor
	5802  BCM5880 Secure Applications Processor with fingerprint touch sensor
	5803  BCM5880 Secure Applications Processor with secure keyboard
	6300  Pirelli Remote NDIS Device
	bd11  TiVo AG0100 802.11bg Wireless Adapter [Broadcom BCM4320]
	bd13  BCM4323 802.11abgn Wireless Adapter
	d11b  Eminent EM4045 [Broadcom 4320 USB]
0a5d  Diatrend Corp.
0a5f  Zebra
	0009  LP2844 Printer
	0081  GK420t Label Printer
	008b  HC100 wristbands Printer
	930a  Printer
0a62  MPMan
	0010  MPMan MP-F40 MP3 Player
0a66  ClearCube Technology
0a67  Medeli Electronics Co., Ltd
0a68  Comaide Corp.
0a69  Chroma ate, Inc.
0a6b  Green House Co., Ltd
	0001  Compact Flash R/W with MP3 player
	000f  FlashDisk
0a6c  Integrated Circuit Systems, Inc.
0a6d  UPS Manufacturing
0a6e  Benwin
0a6f  Core Technology, Inc.
	0400  Xanboo
0a70  International Game Technology
0a71  VIPColor Technologies USA, Inc.
	0001  VP485 Printer
0a72  Sanwa Denshi
0a7d  NSTL, Inc.
0a7e  Octagon Systems Corp.
0a80  Rexon Technology Corp., Ltd
0a81  Chesen Electronics Corp.
	0101  Keyboard
	0103  Keyboard
	0203  Mouse
	0205  PS/2 Keyboard+Mouse Adapter
	0701  USB Missile Launcher
0a82  Syscan
	4600  TravelScan 460/464
0a83  NextComm, Inc.
0a84  Maui Innovative Peripherals
0a85  Idexx Labs
0a86  NITGen Co., Ltd
0a8d  Picturetel
0a8e  Japan Aviation Electronics Industry, Ltd
	2011  Filter Driver For JAE XMC R/W
0a90  Candy Technology Co., Ltd
0a91  Globlink Technology, Inc.
	3801  Targus PAKP003 Mouse
0a92  EGO SYStems, Inc.
	0011  SYS WaveTerminal U2A
	0021  GIGAPort
	0031  GIGAPortAG
	0053  AudioTrak Optoplay
	0061  Waveterminal U24
	0071  MAYA EX7
	0091  Maya 44
	00b1  MAYA EX5
	1000  MIDI Mate
	1010  RoMI/O
	1020  M4U
	1030  M8U
	1090  KeyControl49
	10a0  KeyControl25
0a93  C Technologies AB
	0002  C-Pen 10
	0005  MyPen Light
	000d  Input Pen
	0010  C-Pen 20
	0a93  PayPen
0a94  Intersense
0aa3  Lava Computer Mfg., Inc.
0aa4  Develco Elektronik
0aa5  First International Digital
	0002  irock! 500 Series
	0801  MP3 Player
0aa6  Perception Digital, Ltd
	0101  Hercules Jukebox
	1501  Store 'n' Go HD Drive
0aa7  Wincor Nixdorf International GmbH
	0100  POS Keyboard, TA58P-USB
	0101  POS Keyboard, TA85P-USB
	0102  POS Keyboard, TA59-USB
	0103  POS Keyboard, TA60-USB
	0104  SNIkey Keyboard, SNIKey-KB-USB
	0200  Operator Display, BA63-USB
	0201  Operator Display, BA66-USB
	0202  Operator Display & Scanner, XiCheck-BA63
	0203  Operator Display & Scanner, XiCheck-BA66
	0204  Graphics Operator Display, BA63GV
	0300  POS Printer (printer class mode), TH210
	0301  POS Printer (native mode), TH210
	0302  POS Printer (printer class mode), TH220
	0303  POS Printer (native mode), TH220
	0304  POS Printer, TH230
	0305  Lottery Printer, XiPrintPlus
	0306  POS Printer (printer class mode), TH320
	0307  POS Printer (native mode), TH320
	0308  POS Printer (printer class mode), TH420
	0309  POS Printer (native mode), TH420
	030a  POS Printer, TH200B
	0400  Lottery Scanner, Xiscan S
	0401  Lottery Scanner, Xiscan 3
	0402  Programmable Magnetic Swipe Card Reader, MSRP-USB
	0500  IDE Adapter
	0501  Hub Printer Interface
	0502  Hub SNIKey Keyboard
	4304  Banking Printer TP07
	4305  Banking Printer TP07c
	4500  WN Central Special Electronics
0aa8  TriGem Computer, Inc.
	0060  TG 11Mbps WLAN Mini Adapter
	1001  DreamComboM4100
	3002  InkJet Color Printer
	8001  TG_iMON
	8002  TG_KLOSS
	a001  TG_X2
	a002  TGVFD_KLOSS
	ffda  iMON_VFD
0aa9  Baromtec Co.
	f01b  Medion MD 6242 MP3 Player
0aaa  Japan CBM Corp.
0aab  Vision Shape Europe SA
0aac  iCompression, Inc.
0aad  Rohde & Schwarz GmbH & Co. KG
	0003  NRP-Z21
	000c  NRP-Z11
	0013  NRP-Z22
	0014  NRP-Z23
	0015  NRP-Z24
	0016  NRP-Z51
	0017  NRP-Z52
	0018  NRP-Z55
	0019  NRP-Z56
	0021  NRP-Z91
	0023  NRP-Z81
	002c  NRP-Z31
	002d  NRP-Z37
	002f  NRP-Z27
	0051  NRP-Z28
	0052  NRP-Z98
	0062  NRP-Z92
	0070  NRP-Z57
	0083  NRP-Z85
	0095  NRP-Z86
0aae  NEC infrontia Corp. (Nitsuko)
0aaf  Digitalway Co., Ltd
0ab0  Arrow Strong Electronics Co., Ltd
0ab1  FEIG ELECTRONIC GmbH
	0002  OBID RFID-Reader
0aba  Ellisys
	8001  Tracker 110 Protocol Analyzer
	8002  Explorer 200 Protocol Analyzer
0abe  Stereo-Link
	0101  SL1200 DAC
0abf  Diolan
	3370  I2C/SPI Adapter - U2C-12
0ac3  Sanyo Semiconductor Company Micro
0ac4  Leco Corp.
0ac5  I & C Corp.
0ac6  Singing Electrons, Inc.
0ac7  Panwest Corp.
0ac8  Z-Star Microelectronics Corp.
	0301  Web Camera
	0302  ZC0302 Webcam
	0321  Vimicro generic vc0321 Camera
	0323  Luxya WC-1200 USB 2.0 Webcam
	0328  A4Tech PK-130MG
	0336  Elecom UCAM-DLQ30
	301b  ZC0301 Webcam
	303b  ZC0303 Webcam
	305b  ZC0305 Webcam
	307b  USB 1.1 Webcam
	332d  Vega USB 2.0 Camera
	3343  Sirius USB 2.0 Camera
	3370  Traveler TV 6500 SF Dia-scanner
	3420  Venus USB2.0 Camera
	c001  Sony embedded vimicro Camera
	c002  Visual Communication Camera VGP-VCC1
	c302  Vega USB 2.0 Camera
	c303  Saturn USB 2.0 Camera
	c326  Namuga 1.3M Webcam
	c33f  Webcam
0ac9  Micro Solutions, Inc.
	0000  Backpack CD-ReWriter
	0001  BACKPACK  2 Cable
	0010  BACKPACK
	0011  Backpack 40GB Hard Drive
	0110  BACKPACK
	0111  BackPack
	1234  BACKPACK
0aca  OPEN Networks Ltd
	1060  OPEN NT1 Plus II
0acc  Koga Electronics Co.
0acd  ID Tech
	0401  ID TECH Spectrum III Hybrid Smartcard Reader
	0630  ID TECH Spectrum III Mag-Only Insert Reader (SPT3-355 Series) USB-CDC
0ace  ZyDAS
	1201  ZD1201 802.11b
	1211  ZD1211 802.11g
	1215  ZD1211B 802.11g
	1221  ZD1221 802.11n
	1602  ZyXEL Omni FaxModem 56K
	1608  ZyXEL Omni FaxModem 56K UNO
	1611  ZyXEL Omni FaxModem 56K Plus
	2011  Virtual media for 802.11bg
	20ff  Virtual media for 802.11bg
	a211  ZD1211 802.11b/g Wireless Adapter
	b215  802.11bg
0acf  Intoto, Inc.
0ad0  Intellix Corp.
0ad1  Remotec Technology, Ltd
0ad2  Service & Quality Technology Co., Ltd
0ada  Data Encryption Systems Ltd.
	0005  DK2
0ae3  Allion Computer, Inc.
0ae4  Taito Corp.
0ae7  Neodym Systems, Inc.
0ae8  System Support Co., Ltd
0ae9  North Shore Circuit Design L.L.P.
0aea  SciEssence, LLC
0aeb  TTP Communications, Ltd
0aec  Neodio Technologies Corp.
	2101  SmartMedia Card Reader
	2102  CompactFlash Card Reader
	2103  MMC/SD Card Reader
	2104  MemoryStick Card Reader
	2201  SmartMedia+CompactFlash Card Reader
	2202  SmartMedia+MMC/SD Card Reader
	2203  SmartMedia+MemoryStick Card Reader
	2204  CompactFlash+MMC/SD Card Reader
	2205  CompactFlash+MemoryStick Card Reader
	2206  MMC/SD+MemoryStick Card Reader
	2301  SmartMedia+CompactFlash+MMC/SD Card Reader
	2302  SmartMedia+CompactFlash+MemoryStick Card Reader
	2303  SmartMedia+MMC/SD+MemoryStick Card Reader
	2304  CompactFlash+MMC/SD+MemoryStick Card Reader
	3016  MMC/SD+Memory Stick Card Reader
	3050  ND3050 8-in-1 Card Reader
	3060  1.1 FS Card Reader
	3101  MMC/SD Card Reader
	3102  MemoryStick Card Reader
	3201  MMC/SD+MemoryStick Card Reader
	3216  HS Card Reader
	3260  7-in-1 Card Reader
	5010  ND5010 Card Reader
0af0  Option
	5000  UMTS Card
	6000  GlobeTrotter 3G datacard
	6300  GT 3G Quad UMTS/GPRS Card
	6600  GlobeTrotter 3G+ datacard
	6711  GlobeTrotter Express 7.2 v2
	6971  Globetrotter HSDPA Modem
	7251  Globetrotter HSUPA Modem (aka iCON HSUPA E)
	7501  Globetrotter HSUPA Modem (icon 411 aka "Vodafone K3760")
	7601  Globetrotter MO40x 3G Modem (GTM 382)
	7701  Globetrotter HSUPA Modem (aka icon 451)
	d055  Globetrotter GI0505 [iCON 505]
0af6  Silver I Co., Ltd
0af7  B2C2, Inc.
	0101  Digital TV USB Receiver (DVB-S/T/C / ATSC)
0af9  Hama, Inc.
	0010  USB SightCam 100
	0011  Micro Innovations IC50C Webcam
0afc  Zaptronix Ltd
0afd  Tateno Dennou, Inc.
0afe  Cummins Engine Co.
0aff  Jump Zone Network Products, Inc.
0b00  INGENICO
0b05  ASUSTek Computer, Inc.
	1101  Mass Storage (UISDMC4S)
	1706  WL-167G v1 802.11g Adapter [Ralink RT2571]
	1707  WL-167G v1 802.11g Adapter [Ralink RT2571]
	1708  Mass Storage Device
	170b  Mass Storage Device
	170c  WL-159g 802.11bg
	170d  802.11b/g Wireless Network Adapter
	1712  BT-183 Bluetooth 2.0+EDR adapter
	1715  2045 Bluetooth 2.0 Device with trace filter
	1716  Bluetooth Device
	1717  WL169gE 802.11g Adapter [Broadcom 4320 USB]
	171b  A9T wireless 802.11bg
	171c  802.11b/g Wireless Network Adapter
	171f  My Cinema U3000 Mini [DiBcom DiB7700P]
	1723  WL-167G v2 802.11g Adapter [Ralink RT2571W]
	1724  RT2573
	1726  Laptop OLED Display
	172a  ASUS 802.11n Network Adapter
	172b  802.11n Network Adapter
	1731  802.11n Network Adapter
	1732  802.11n Network Adapter
	1734  ASUS AF-200
	173c  BT-183 Bluetooth 2.0
	173f  My Cinema U3100 Mini
	1742  802.11n Network Adapter
	1743  Xonar U1 Audio Station
	1751  BT-253 Bluetooth Adapter
	175b  Laptop OLED Display
	1760  802.11n Network Adapter
	1761  USB-N11 802.11n Network Adapter [Ralink RT2870]
	1774  Gobi Wireless Modem (QDL mode)
	1776  Gobi Wireless Modem
	1779  My Cinema U3100 Mini Plus [AF9035A]
	1784  USB-N13 802.11n Network Adapter [Ralink RT3072]
	1786  USB-N10 802.11n Network Adapter [Realtek RTL8188SU]
	1791  WL-167G v3 802.11n Adapter [Realtek RTL8188SU]
	179d  USB-N53 802.11abgn Network Adapter [Ralink RT3572]
	6101  Cable Modem
	620a  Remote NDIS Device
	b700  Broadcom Bluetooth 2.1
0b0b  Datamax-O'Neil
	106e  Datamax E-4304
0b0c  Todos AB
	0009  Todos Argos Mini II Smart Card Reader
	001e  e.dentifier2 (ABN AMRO electronic banking card reader NL)
	002e  C200 smartcard controller (Nordea card reader)
	003f  Todos C400 smartcard controller (Handelsbanken card reader)
	0050  Argos Mini II Smart Card Reader (CCID)
0b0d  ProjectLab
	0000  CenturyCD
0b0e  GN Netcom
	1022  Jabra PRO 9450, Type 9400BS (DECT Headset)
0b0f  AVID Technology
0b10  Pcally
0b11  I Tech Solutions Co., Ltd
0b1e  Electronic Warfare Assoc., Inc. (EWA)
	8007  Blackhawk USB560-BP JTAG Emulator
0b1f  Insyde Software Corp.
0b20  TransDimension, Inc.
0b21  Yokogawa Electric Corp.
0b22  Japan System Development Co., Ltd
0b23  Pan-Asia Electronics Co., Ltd
0b24  Link Evolution Corp.
0b27  Ritek Corp.
0b28  Kenwood Corp.
0b2c  Village Center, Inc.
0b30  PNY Technologies, Inc.
	0006  SM Media-Shuttle Card Reader
0b33  Contour Design, Inc.
	0020  ShuttleXpress
0b37  Hitachi ULSI Systems Co., Ltd
0b38  Gear Head
	0003  Keyboard
	0010  107-Key Keyboard
0b39  Omnidirectional Control Technology, Inc.
	0001  Composite USB PS2 Converter
	0109  USB TO Ethernet
	0421  Serial
	0801  USB-Parallel Bridge
	0901  OCT To Fast Ethernet Converter
	0c03  LAN DOCK Serial Converter
0b3a  IPaxess
0b3b  Tekram Technology Co., Ltd
	0163  TL-WN320G 1.0 WLAN Adapter
	1601  Allnet 0193 802.11b Adapter
	1602  ZyXEL ZyAIR B200 802.11b Adapter
	1612  AIR.Mate 2@net 802.11b Adapter
	1613  802.11b Wireless LAN Adapter
	1620  Allnet USB 2.0 Wireless Network Adapter
	1630  QuickWLAN 802.11bg
	5630  802.11bg
	6630  ZD1211
0b3c  Olivetti Techcenter
	a010  Simple_Way Printer/Scanner/Copier
	c000  Olicard 100
	c700  Olicard 100 (Mass Storage mode)
0b3e  Kikusui Electronics Corp.
0b41  Hal Corp.
	0011  Crossam2+USB IR commander
0b43  Play.com, Inc.
	0003  PS2 Controller Converter
0b47  Sportbug.com, Inc.
0b48  TechnoTrend AG
	1003  Technotrend/Hauppauge USB-Nova
	1004  TT-PCline
	1005  Technotrend/Hauppauge USB-Nova
	1006  Technotrend/Hauppauge DEC3000-s
	1007  TT-micro plus Device
	1008  Technotrend/Hauppauge DEC2000-t
	1009  Technotrend/Hauppauge DEC2540-t
	3001  DVB-S receiver
	3002  DVB-C receiver
	3003  DVB-T receiver
	3004  TT TV-Stick
	3005  TT TV-Stick (8kB EEPROM)
	3006  TT-connect S-2400 DVB-S receiver
	3007  TT-connect S2-3600
	3008  TT-connect
	3009  TT-connect S-2400 DVB-S receiver (8kB EEPROM)
	300a  TT-connect S2-3650 CI
	300b  TT-connect C-3650 CI
	300c  TT-connect T-3650 CI
	300d  TT-connect CT-3650 CI
	300e  TT-connect C-2400
0b49  ASCII Corp.
	064f  Trance Vibrator
0b4b  Pine Corp. Ltd.
	0100  D'music MP3 Player
0b4d  Graphtec America, Inc.
	110a  Graphtec CC200-20
0b4e  Musical Electronics, Ltd
	6500  MP3 Player
	8028  MP3 Player
	8920  MP3 Player
0b50  Dumpries Co., Ltd
0b51  Comfort Keyboard Co.
	0020  Comfort Keyboard
0b52  Colorado MicroDisplay, Inc.
0b54  Sinbon Electronics Co., Ltd
0b56  TYI Systems, Ltd
0b57  Beijing HanwangTechnology Co., Ltd
0b59  Lake Communications, Ltd
0b5a  Corel Corp.
0b5f  Green Electronics Co., Ltd
0b60  Nsine, Ltd
0b61  NEC Viewtechnology, Ltd
0b62  Orange Micro, Inc.
	000b  Bluetooth Device
	0059  iBOT2 Webcam
0b63  ADLink Technology, Inc.
0b64  Wonderful Wire Cable Co., Ltd
0b65  Expert Magnetics Corp.
0b69  CacheVision
0b6a  Maxim Integrated Products
0b6f  Nagano Japan Radio Co., Ltd
0b70  PortalPlayer, Inc.
	00ba  iRiver H10 20GB
0b71  SHIN-EI Sangyo Co., Ltd
0b72  Embedded Wireless Technology Co., Ltd
0b73  Computone Corp.
0b75  Roland DG Corp.
0b79  Sunrise Telecom, Inc.
0b7a  Zeevo, Inc.
	07d0  Bluetooth Dongle
0b7b  Taiko Denki Co., Ltd
0b7c  ITRAN Communications, Ltd
0b7d  Astrodesign, Inc.
0b81  id3 Semiconductors
	0001  Biothentic II smartcard reader with fingerprint sensor
	0002  DFU-Enabled Devices (DFU)
	0012  BioPAD biometric module (DFU + CDC)
	0102  Certis V1 fingerprint reader
	0103  Certis V2 fingerprint reader
	0200  CL1356T / CL1356T5 / CL1356A smartcard readers (CCID)
	0201  CL1356T / CL1356T5 / CL1356A smartcard readers (DFU + CCID)
	0220  CL1356A FFPJP smartcard reader (CCID + HID)
	0221  CL1356A smartcard reader (DFU + CCID + HID)
0b84  Rextron Technology, Inc.
0b85  Elkat Electronics, Sdn., Bhd.
0b86  Exputer Systems, Inc.
	5100  XMC5100 Zippy Drive
	5110  XMC5110 Flash Drive
	5200  XMC5200 Zippy Drive
	5201  XMC5200 Zippy Drive
	5202  XMC5200 Zippy Drive
	5280  XMC5280 Storage Drive
	fff0  ISP5200 Debugger
0b87  Plus-One I & T, Inc.
0b88  Sigma Koki Co., Ltd, Technology Center
0b89  Advanced Digital Broadcast, Ltd
0b8c  SMART Technologies Inc.
	00c3  Sympodium ID350
0b95  ASIX Electronics Corp.
	1720  10/100 Ethernet
	1780  AX88178
	7720  AX88772
	772a  AX88772A Fast Ethernet
	7e2b  AX88772B
0b96  Sewon Telecom
0b97  O2 Micro, Inc.
	7732  Smart Card Reader
	7761  Oz776 1.1 Hub
	7762  Oz776 SmartCard Reader
	7772  OZ776 CCID Smartcard Reader
0b98  Playmates Toys, Inc.
0b99  Audio International, Inc.
0b9b  Dipl.-Ing. Stefan Kunde
	4012  Reflex RC-controller Interface
0b9d  Softprotec Co.
0b9f  Chippo Technologies
0baf  U.S. Robotics
	00e5  USR6000
	00eb  USR1120 802.11b Adapter
	00ec  56K Faxmodem
	00f1  SureConnect ADSL ATM Adapter
	00f2  SureConnect ADSL Loader
	00f5  SureConnect ADSL ATM Adapter
	00f6  SureConnect ADSL Loader
	00f7  SureConnect ADSL ATM Adapter
	00f8  SureConnect ADSL Loader
	00f9  SureConnect ADSL ATM Adapter
	00fa  SureConnect ADSL Loader
	00fb  SureConnect ADSL Ethernet/USB Router
	0111  USR5420 802.11g Adapter [Broadcom 4320 USB]
	0118  U5 802.11g Adapter
	011b  Wireless MAXg Adapter [Broadcom 4320]
	0121  USR5423 802.11bg Wireless Adapter [ZyDAS ZD1211B]
	6112  FaxModem Model 5633
0bb0  Concord Camera Corp.
	0100  Sound Vision Stream
	5007  3340z/Rollei DC3100
0bb1  Infinilink Corp.
0bb2  Ambit Microsystems Corp.
	0302  U10H010 802.11b Wireless Adapter [Intersil PRISM 3]
	6098  USB Cable Modem
0bb3  Ofuji Technology
0bb4  High Tech Computer Corp.
	00ce  mmO2 XDA GSM/GPRS Pocket PC
	00cf  SPV C500 Smart Phone
	0a01  PocketPC Sync
	0a02  Himalaya GSM/GPRS Pocket PC
	0a03  PocketPC Sync
	0a04  PocketPC Sync
	0a05  PocketPC Sync
	0a06  PocketPC Sync
	0a07  Magician PocketPC SmartPhone / O2 XDA
	0a08  PocketPC Sync
	0a09  PocketPC Sync
	0a0a  PocketPC Sync
	0a0b  PocketPC Sync
	0a0c  PocketPC Sync
	0a0d  PocketPC Sync
	0a0e  PocketPC Sync
	0a0f  PocketPC Sync
	0a10  PocketPC Sync
	0a11  PocketPC Sync
	0a12  PocketPC Sync
	0a13  PocketPC Sync
	0a14  PocketPC Sync
	0a15  PocketPC Sync
	0a16  PocketPC Sync
	0a17  PocketPC Sync
	0a18  PocketPC Sync
	0a19  PocketPC Sync
	0a1a  PocketPC Sync
	0a1b  PocketPC Sync
	0a1c  PocketPC Sync
	0a1d  PocketPC Sync
	0a1e  PocketPC Sync
	0a1f  PocketPC Sync
	0a20  PocketPC Sync
	0a21  PocketPC Sync
	0a22  PocketPC Sync
	0a23  PocketPC Sync
	0a24  PocketPC Sync
	0a25  PocketPC Sync
	0a26  PocketPC Sync
	0a27  PocketPC Sync
	0a28  PocketPC Sync
	0a29  PocketPC Sync
	0a2a  PocketPC Sync
	0a2b  PocketPC Sync
	0a2c  PocketPC Sync
	0a2d  PocketPC Sync
	0a2e  PocketPC Sync
	0a2f  PocketPC Sync
	0a30  PocketPC Sync
	0a31  PocketPC Sync
	0a32  PocketPC Sync
	0a33  PocketPC Sync
	0a34  PocketPC Sync
	0a35  PocketPC Sync
	0a36  PocketPC Sync
	0a37  PocketPC Sync
	0a38  PocketPC Sync
	0a39  PocketPC Sync
	0a3a  PocketPC Sync
	0a3b  PocketPC Sync
	0a3c  PocketPC Sync
	0a3d  PocketPC Sync
	0a3e  PocketPC Sync
	0a3f  PocketPC Sync
	0a40  PocketPC Sync
	0a41  PocketPC Sync
	0a42  PocketPC Sync
	0a43  PocketPC Sync
	0a44  PocketPC Sync
	0a45  PocketPC Sync
	0a46  PocketPC Sync
	0a47  PocketPC Sync
	0a48  PocketPC Sync
	0a49  PocketPC Sync
	0a4a  PocketPC Sync
	0a4b  PocketPC Sync
	0a4c  PocketPC Sync
	0a4d  PocketPC Sync
	0a4e  PocketPC Sync
	0a4f  PocketPC Sync
	0a50  HTC SmartPhone Sync
	0a51  SPV C400 / T-Mobile SDA GSM/GPRS Pocket PC
	0a52  SmartPhone Sync
	0a53  SmartPhone Sync
	0a54  SmartPhone Sync
	0a55  SmartPhone Sync
	0a56  SmartPhone Sync
	0a57  SmartPhone Sync
	0a58  SmartPhone Sync
	0a59  SmartPhone Sync
	0a5a  SmartPhone Sync
	0a5b  SmartPhone Sync
	0a5c  SmartPhone Sync
	0a5d  SmartPhone Sync
	0a5e  SmartPhone Sync
	0a5f  SmartPhone Sync
	0a60  SmartPhone Sync
	0a61  SmartPhone Sync
	0a62  SmartPhone Sync
	0a63  SmartPhone Sync
	0a64  SmartPhone Sync
	0a65  SmartPhone Sync
	0a66  SmartPhone Sync
	0a67  SmartPhone Sync
	0a68  SmartPhone Sync
	0a69  SmartPhone Sync
	0a6a  SmartPhone Sync
	0a6b  SmartPhone Sync
	0a6c  SmartPhone Sync
	0a6d  SmartPhone Sync
	0a6e  SmartPhone Sync
	0a6f  SmartPhone Sync
	0a70  SmartPhone Sync
	0a71  SmartPhone Sync
	0a72  SmartPhone Sync
	0a73  SmartPhone Sync
	0a74  SmartPhone Sync
	0a75  SmartPhone Sync
	0a76  SmartPhone Sync
	0a77  SmartPhone Sync
	0a78  SmartPhone Sync
	0a79  SmartPhone Sync
	0a7a  SmartPhone Sync
	0a7b  SmartPhone Sync
	0a7c  SmartPhone Sync
	0a7d  SmartPhone Sync
	0a7e  SmartPhone Sync
	0a7f  SmartPhone Sync
	0a80  SmartPhone Sync
	0a81  SmartPhone Sync
	0a82  SmartPhone Sync
	0a83  SmartPhone Sync
	0a84  SmartPhone Sync
	0a85  SmartPhone Sync
	0a86  SmartPhone Sync
	0a87  SmartPhone Sync
	0a88  SmartPhone Sync
	0a89  SmartPhone Sync
	0a8a  SmartPhone Sync
	0a8b  SmartPhone Sync
	0a8c  SmartPhone Sync
	0a8d  SmartPhone Sync
	0a8e  SmartPhone Sync
	0a8f  SmartPhone Sync
	0a90  SmartPhone Sync
	0a91  SmartPhone Sync
	0a92  SmartPhone Sync
	0a93  SmartPhone Sync
	0a94  SmartPhone Sync
	0a95  SmartPhone Sync
	0a96  SmartPhone Sync
	0a97  SmartPhone Sync
	0a98  SmartPhone Sync
	0a99  SmartPhone Sync
	0a9a  SmartPhone Sync
	0a9b  SmartPhone Sync
	0a9c  SmartPhone Sync
	0a9d  SmartPhone Sync
	0a9e  SmartPhone Sync
	0a9f  SmartPhone Sync
	0b03  Ozone Mobile Broadband
	0b04  Hermes / TyTN / T-Mobile MDA Vario II / O2 Xda Trion
	0b05  P3600
	0b06  Athena / Advantage x7500 / Dopod U1000 / T-Mobile AMEO
	0b0c  Elf / Touch / P3450 / T-Mobile MDA Touch / O2 Xda Nova / Dopod S1
	0b1f  Sony Ericsson XPERIA X1
	0b2f  Rhodium
	0b51  Qtek 8310 mobile phone [Tornado Noble]
	0bce  Vario MDA
	0c01  Dream / ADP1 / G1 / Magic / Tattoo
	0c02  Dream / ADP1 / G1 / Magic / Tattoo (Debug)
	0c13  Diamond
	0c1f  Sony Ericsson XPERIA X1
	0c5f  Snap
	0c87  Desire (debug)
	0c8d  EVO 4G (debug)
	0c91  Vision
	0c94  Vision
	0c97  Legend
	0c99  Desire (debug)
	0c9e  Incredible
	0ca2  Desire HD (debug mode)
	0ca5  Android Phone [Evo Shift 4G]
	0ff8  Desire HD (Tethering Mode)
	0ff9  Desire / Desire HD / Hero (Charge Mode)
	0ffe  Desire HD (modem mode)
	0fff  Android Fastboot Bootloader
0bb5  Murata Manufacturing Co., Ltd
0bb6  Network Alchemy
0bb7  Joytech Computer Co., Ltd
0bb8  Hitachi Semiconductor and Devices Sales Co., Ltd
0bb9  Eiger M&C Co., Ltd
0bba  ZAccess Systems
0bbb  General Meters Corp.
0bbc  Assistive Technology, Inc.
0bbd  System Connection, Inc.
0bc0  Knilink Technology, Inc.
0bc1  Fuw Yng Electronics Co., Ltd
0bc2  Seagate RSS LLC
	2000  Storage Adapter V3 (TPP)
	2200  FreeAgent Go FW
	2300  Expansion Portable
	5021  FreeAgent GoFlex USB 2.0
	5031  FreeAgent GoFlex USB 3.0
0bc3  IPWireless, Inc.
	0001  UMTS-TDD (TD-CDMA) modem
0bc4  Microcube Corp.
0bc5  JCN Co., Ltd
0bc6  ExWAY, Inc.
0bc7  X10 Wireless Technology, Inc.
	0001  ActiveHome (ACPI-compliant)
	0002  Firecracker Interface (ACPI-compliant)
	0003  VGA Video Sender (ACPI-compliant)
	0004  X10 Receiver
	0005  Wireless Transceiver (ACPI-compliant)
	0006  Wireless Transceiver (ACPI-compliant)
	0007  Wireless Transceiver (ACPI-compliant)
	0008  Wireless Transceiver (ACPI-compliant)
	0009  Wireless Transceiver (ACPI-compliant)
	000a  Wireless Transceiver (ACPI-compliant)
	000b  Transceiver (ACPI-compliant)
	000c  Transceiver (ACPI-compliant)
	000d  Transceiver (ACPI-compliant)
	000e  Transceiver (ACPI-compliant)
	000f  Transceiver (ACPI-compliant)
0bc8  Telmax Communications
0bc9  ECI Telecom, Ltd
0bca  Startek Engineering, Inc.
0bcb  Perfect Technic Enterprise Co., Ltd
0bd7  Andrew Pargeter & Associates
	a021  Amptek DP4 multichannel signal analyzer
0bda  Realtek Semiconductor Corp.
	0103  USB 2.0 Card Reader
	0104  Mass Storage Device
	0106  Mass Storage Device
	0107  Mass Storage Device
	0108  Mass Storage Device
	0111  Card Reader
	0113  Mass Storage Device
	0115  Mass Storage Device (Multicard Reader)
	0116  Mass Storage Device
	0117  Mass Storage Device
	0118  Mass Storage Device
	0138  Card reader
	0139  Card reader
	0151  Mass Storage Device (Multicard Reader)
	0152  Mass Storage Device
	0153  Mass Storage Device
	0156  Mass Storage Device
	0157  Mass Storage Device
	0158  USB 2.0 multicard reader
	0159  Digital Media Card Reader
	0161  Mass Storage Device
	0168  Mass Storage Device
	0169  Mass Storage Device
	0171  Mass Storage Device
	0176  Mass Storage Device
	0178  Mass Storage Device
	0186  Card Reader
	2831  RTL2831U DVB-T
	2832  RTL2832U DVB-T
	2838  RTL2838 DVB-T
	8150  RTL8150 Fast Ethernet Adapter
	8151  RTL8151 Adapteon Business Mobile Networks BV
	8171  RTL8188SU 802.11n WLAN Adapter
	8172  RTL8191SU 802.11n WLAN Adapter
	8174  RTL8192SU 802.11n WLAN Adapter
	8176  RTL8188CUS 802.11n WLAN Adapter
	8178  RTL8192CU 802.11n WLAN Adapter
	817f  RTL8188RU 802.11n WLAN Adapter
	8187  RTL8187 Wireless Adapter
	8189  RTL8187B Wireless 802.11g 54Mbps Network Adapter
	8192  RTL8192U 802.11n Wireless Adapter
	8197  RTL8187B Wireless Adapter
	8198  RTL8187B Wireless Adapter
0bdb  Ericsson Business Mobile Networks BV
	1000  BV Bluetooth Device
	1002  Bluetooth Device 1.2
	1049  C3607w Mobile Broadband Module
	1900  F3507g Mobile Broadband Module
	1902  F3507g v2 Mobile Broadband Module
	1904  F3607gw Mobile Broadband Module
	1905  F3607gw v2 Mobile Broadband Module
	1906  F3607gw v3 Mobile Broadband Module
	1909  F3307 v2 Mobile Broadband Module
	190a  F3307 Mobile Broadband Module
	190b  C3607w v2 Mobile Broadband Module
0bdc  Y Media Corp.
0bdd  Orange PCS
0be2  Kanda Tsushin Kogyo Co., Ltd
0be3  TOYO Corp.
0be4  Elka International, Ltd
0be5  DOME imaging systems, Inc.
0be6  Dong Guan Humen Wonderful Wire Cable Factory
0bed  Silicon Labs
	1100  MEI (TM) Cashflow-SC Bill/Voucher Acceptor
0bee  LTK Industries, Ltd
0bef  Way2Call Communications
0bf0  Pace Micro Technology PLC
0bf1  Intracom S.A.
	0001  netMod Driver Ver 2.4.17 (CAPI)
	0002  netMod Driver Ver 2.4 (CAPI)
	0003  netMod Driver Ver 2.4 (CAPI)
0bf2  Konexx
0bf6  Addonics Technologies, Inc.
	0103  Storage Device
	1234  Storage Device
	a000  Cable 205 (TPP)
	a001  Cable 205
	a002  IDE Bridge
0bf7  Sunny Giken, Inc.
0bf8  Fujitsu Siemens Computers
	1001  Fujitsu Pocket Loox 600 PDA
	1006  SmartCard Reader 2A
	1007  Connect2Air E-5400 802.11g Wireless Adapter
	1009  Connect2Air E-5400 D1700 802.11g Wireless Adapter [Intersil ISL3887]
	100c  Keyboard FSC KBPC PX
	100f  miniCard D2301 802.11bg Wireless Module [SiS 163U]
0bfd  Kvaser AB
	0004  USBcan II
	000b  Leaf Light HS
	000e  Leaf SemiPro HS
0c04  MOTO Development Group, Inc.
0c05  Appian Graphics
0c06  Hasbro Games, Inc.
0c07  Infinite Data Storage, Ltd
0c08  Agate
	0378  Q 16MB Storage Device
0c09  Comjet Information System
	a5a5  Litto Version USB2.0
0c0a  Highpoint Technologies, Inc.
0c0b  Dura Micro, Inc. (Acomdata)
	27cb  6-in-1 Flash Reader and Writer
	27d7  Multi Memory reader/writer MD-005
	27da  Multi Memory reader/writer MD-005
	27dc  Multi Memory reader/writer MD-005
	27e7  3,5'' HDD case MD-231
	27ee  3,5'' HDD case MD-231
	2814  3,5'' HDD case MD-231
	2815  3,5'' HDD case MD-231
	281d  3,5'' HDD case MD-231
	5fab  Storage Adaptor
	a109  CF/SM Reader and Writer
	a10c  SD/MS Reader and Writer
	b001  USB 2.0 Mass Storage IDE adapter
	b004  MMC/SD Reader and Writer
0c12  Zeroplus
	0005  PSX Vibration Feedback Converter
	0030  PSX Vibration Feedback Converter
	700e  Logic Analyzer (LAP-C-16032)
	8801  Xbox Controller
	8802  Xbox Controller
	8809  Red Octane Ignition Xbox DDR Pad
	880a  Pelican Eclipse PL-2023
	8810  Xbox Controller
	9902  VibraX
0c15  Iris Graphics
0c16  Gyration, Inc.
	0002  RF Technology Receiver
	0003  RF Technology Receiver
	0008  RF Technology Receiver
	0080  eHome Infrared Receiver
	0081  eHome Infrared Receiver
0c17  Cyberboard A/S
0c18  SynerTek Korea, Inc.
0c19  cyberPIXIE, Inc.
0c1a  Silicon Motion, Inc.
0c1b  MIPS Technologies
0c1c  Hang Zhou Silan Electronics Co., Ltd
0c22  Tally Printer Corp.
0c23  Lernout + Hauspie
0c24  Taiyo Yuden
	0001  Bluetooth Adaptor
	0002  Bluetooth Device2
	0005  Bluetooth Device(BC04-External)
	000b  Bluetooth Device(BC04-External)
	000c  Bluetooth Adaptor
	000e  Bluetooth Device(BC04-External)
	000f  Bluetooth Device (V2.0+EDR)
	0010  Bluetooth Device(BC04-External)
	0012  Bluetooth Device(BC04-External)
	0018  Bluetooth Device(BC04-External)
	0019  Bluetooth Device
	0021  Bluetooth Device
	0c24  Bluetooth Device(SAMPLE)
	ffff  Bluetooth module with BlueCore in DFU mode
0c25  Sampo Corp.
	0310  Scream Cam
0c26  Prolific Technology Inc.
	0018  USB-Serial Controller [Icom Inc. OPC-478UC]
0c27  RFIDeas, Inc
	3bfa  pcProx Card Reader
0c2e  Metro
	0007  Metrologic MS7120 Barcode Scanner (IBM SurePOS mode)
	0200  Metrologic Scanner
	0204  Metrologic MS7120 Barcode Scanner (keyboard mode)
	0700  Metrologic MS7120 Barcode Scanner (uni-directional serial mode)
	0720  Metrologic MS7120 Barcode Scanner (bi-directional serial mode)
0c35  Eagletron, Inc.
0c36  E Ink Corp.
0c37  e.Digital
0c38  Der An Electric Wire & Cable Co., Ltd
0c39  IFR
0c3a  Furui Precise Component (Kunshan) Co., Ltd
0c3b  Komatsu, Ltd
0c3c  Radius Co., Ltd
0c3d  Innocom, Inc.
0c3e  Nextcell, Inc.
0c44  Motorola iDEN
	0021  iDEN P2k0 Device
	0022  iDEN P2k1 Device
	03a2  iDEN Smartphone
	41d9  i1 phone
0c45  Microdia
	0011  EBUDDY
	1020  Mass Storage Reader
	1028  Mass Storage Reader
	1030  Mass Storage Reader
	1031  Sonix Mass Storage Device
	1032  Mass Storage Reader
	1033  Sonix Mass Storage Device
	1034  Mass Storage Reader
	1035  Mass Storage Reader
	1036  Mass Storage Reader
	1037  Sonix Mass Storage Device
	1050  CF Card Reader
	1058  HDD Reader
	1060  iFlash SM-Direct Card Reader
	1061  Mass Storage Reader
	1062  Mass Storage Reader
	1063  Sonix Mass Storage Device
	1064  Mass Storage Reader
	1065  Mass Storage Reader
	1066  Mass Storage Reader
	1067  Mass Storage Reader
	1158  A56AK
	184c  VoIP Phone
	6001  Genius VideoCAM NB
	6005  Sweex Mini Webcam
	6007  VideoCAM Eye
	6009  VideoCAM ExpressII
	600d  TwinkleCam USB camera
	6011  PC Camera (SN9C102)
	6019  PC Camera (SN9C102)
	6024  VideoCAM ExpressII
	6025  VideoCAM ExpressII
	6028  Typhoon Easycam USB 330K (older)
	6029  Triplex i-mini PC Camera
	602a  Meade ETX-105EC Camera
	602b  VideoCAM NB 300
	602c  Clas Ohlson TWC-30XOP Webcam
	602d  VideoCAM ExpressII
	602e  VideoCAM Messenger
	6030  VideoCAM ExpressII
	603f  VideoCAM ExpressII
	6040  CCD PC Camera (PC390A)
	606a  CCD PC Camera (PC390A)
	607a  CCD PC Camera (PC390A)
	607b  Win2 PC Camera
	607c  CCD PC Camera (PC390A)
	607e  CCD PC Camera (PC390A)
	6080  Audio (Microphone)
	6082  VideoCAM Look
	6083  VideoCAM Look
	608c  VideoCAM Look
	608e  VideoCAM Look
	608f  PC Camera (SN9C103 + OV7630)
	60a8  VideoCAM Look
	60aa  VideoCAM Look
	60ab  PC Camera
	60af  VideoCAM Look
	60b0  Genius VideoCam Look
	60c0  PC Camera with Mic (SN9C105)
	60c8  Win2 PC Camera
	60cc  PC Camera with Mic (SN9C105)
	60ec  PC Camera with Mic (SN9C105)
	60ef  Win2 PC Camera
	60fa  PC Camera with Mic (SN9C105)
	60fb  Composite Device
	60fc  PC Camera with Mic (SN9C105)
	60fe  Audio (Microphone)
	6108  Win2 PC Camera
	6122  PC Camera (SN9C110)
	6123  PC Camera (SN9C110)
	6128  PC Camera (SN9C325 + OM6802)
	612a  PC Camera (SN9C325)
	612c  PC Camera (SN9C110)
	612e  PC Camera (SN9C110)
	612f  PC Camera (SN9C110)
	6130  PC Camera (SN9C120)
	6138  Win2 PC Camera
	613a  PC Camera (SN9C120)
	613b  Win2 PC Camera
	613c  PC Camera (SN9C120)
	613e  PC Camera (SN9C120)
	6143  PC Camera (SN9C120 + SP80708)
	6240  PC Camera (SN9C201 + MI1300)
	6242  PC Camera (SN9C201 + MI1310)
	6243  PC Camera (SN9C201 + S5K4AAFX)
	6248  PC Camera (SN9C201 + OV9655)
	624b  PC Camera (SN9C201 + CX1332)
	624c  PC Camera (SN9C201 + MI1320)
	624e  PC Camera (SN9C201 + SOI968)
	624f  PC Camera (SN9C201 + OV9650)
	6251  PC Camera (SN9C201 + OV9650)
	6253  PC Camera (SN9C201 + OV9650)
	6260  PC Camera (SN9C201 + OV7670ISP)
	6262  PC Camera (SN9C201 + OM6802)
	6270  PC Camera (SN9C201 + MI0360/MT9V011 or MI0360SOC/MT9V111) U-CAM PC Camera NE878, Whitcom WHC017, ...
	627a  PC Camera (SN9C201 + S5K53BEB)
	627b  PC Camera (SN9C201 + OV7660)
	627c  PC Camera (SN9C201 + HV7131R)
	627f  PC Camera (SN9C201 + OV965x + EEPROM)
	6280  PC Camera with Microphone (SN9C202 + MI1300)
	6282  PC Camera with Microphone (SN9C202 + MI1310)
	6283  PC Camera with Microphone (SN9C202 + S5K4AAFX)
	6288  PC Camera with Microphone (SN9C202 + OV9655)
	628a  PC Camera with Microphone (SN9C202 + ICM107)
	628b  PC Camera with Microphone (SN9C202 + CX1332)
	628c  PC Camera with Microphone (SN9C202 + MI1320)
	628e  PC Camera with Microphone (SN9C202 + SOI968)
	628f  PC Camera with Microphone (SN9C202 + OV9650)
	62a0  PC Camera with Microphone (SN9C202 + OV7670ISP)
	62a2  PC Camera with Microphone (SN9C202 + OM6802)
	62b0  PC Camera with Microphone (SN9C202 + MI0360/MT9V011 or MI0360SOC/MT9V111)
	62b3  PC Camera with Microphone (SN9C202 + OV9655)
	62ba  PC Camera with Microphone (SN9C202 + S5K53BEB)
	62bb  PC Camera with Microphone (SN9C202 + OV7660)
	62bc  PC Camera with Microphone (SN9C202 + HV7131R)
	62be  PC Camera with Microphone (SN9C202 + OV7663)
	62c0  Sonix USB 2.0 Camera
	62e0  MSI Starcam Racer
	6310  Sonix USB 2.0 Camera
	63e0  Sonix Integrated Webcam
	63f1  Integrated Webcam
	63f8  Sonix Integrated Webcam
	6409  Webcam
	6413  Integrated Webcam
	6417  Integrated Webcam
	641d  1.3 MPixel Integrated Webcam
	6480  Sonix 1.3 MP Laptop Integrated Webcam
	64bd  Sony Visual Communication Camera
	8000  DC31VC
	8006  Dual Mode Camera (8006 VGA)
	800a  Vivitar Vivicam3350B
0c46  WaveRider Communications, Inc.
0c4a  ALGE-TIMING GmbH
	0889  Timy
	088a  Timy 2
0c4b  Reiner SCT Kartensysteme GmbH
	0100  cyberJack e-com/pinpad
	0300  cyberJack pinpad(a)
	9102  cyberJack RFID basis contactless smartcard reader
0c4c  Needham's Electronics
	0021  EMP-21 Universal Programmer
0c52  Sealevel Systems, Inc.
	2101  Serial Converter
0c53  ViewPLUS, Inc.
0c54  Glory, Ltd
0c55  Spectrum Digital, Inc.
	0510  Spectrum Digital XDS510 JTAG Debugger
	0540  SPI540
	5416  TMS320C5416 DSK
	6416  TMS320C6416 DDB
0c56  Billion Bright, Ltd
0c57  Imaginative Design Operation Co., Ltd
0c58  Vidar Systems Corp.
0c59  Dong Guan Shinko Wire Co., Ltd
0c5a  TRS International Mfg., Inc.
0c5e  Xytronix Research & Design
0c60  Apogee Electronics Corp.
0c62  Chant Sincere Co., Ltd
0c63  Toko, Inc.
0c64  Signality System Engineering Co., Ltd
0c65  Eminence Enterprise Co., Ltd
0c66  Rexon Electronics Corp.
0c67  Concept Telecom, Ltd
0c70  MCT Elektronikladen
	0000  USB08 Development board
0c72  PEAK System
	000c  PCAN-USB
0c74  Optronic Laboratories Inc.
	0002  OL 700-30 Goniometer
0c76  JMTek, LLC.
	0001  Mass Storage Controller
	0002  Mass Storage Controller
	0003  USBdisk
	0004  Mass Storage Controller
	0005  Transcend Flash disk
	0006  Transcend JetFlash
	0007  Mass Storage Device
	1605  SSS Headphone Set
	1607  audio controller
0c77  Sipix Group, Ltd
	1001  SiPix Web2
	1002  SiPix SC2100
	1010  SiPix Snap
	1011  SiPix Blink 2
	1015  SiPix CAMeleon
0c78  Detto Corp.
0c79  NuConnex Technologies Pte., Ltd
0c7a  Wing-Span Enterprise Co., Ltd
0c86  NDA Technologies, Inc.
0c88  Kyocera Wireless Corp.
	0021  Handheld
	17da  Qualcomm Kyocera CDMA Technologies MSM
0c89  Honda Tsushin Kogyo Co., Ltd
0c8a  Pathway Connectivity, Inc.
0c8b  Wavefly Corp.
0c8c  Coactive Networks
0c8d  Tempo
0c8e  Cesscom Co., Ltd
	6000  Luxian Series
0c8f  Applied Microsystems
0c94  Cryptera
	a000  EPP 1217
0c98  Berkshire Products, Inc.
	1140  USB PC Watchdog
0c99  Innochips Co., Ltd
0c9a  Hanwool Robotics Corp.
0c9b  Jobin Yvon, Inc.
0c9d  SemTek
	0170  3873 Manual Insert card reader
0ca2  Zyfer
0ca3  Sega Corp.
0ca4  ST&T Instrument Corp.
0ca5  BAE Systems Canada, Inc.
0ca6  Castles Technology Co., Ltd
	0010  EZUSB PC/SC Smart Card Reader
	0050  EZ220PU Reader Controller
	1077  Bludrive Family Smart Card Reader
	107e  Reader Controller
	2010  myPad110 PC/SC Smart Card Reader
	3050  EZ710 Smart Card Reader
0ca7  Information Systems Laboratories
0cad  Motorola CGISS
	9001  PowerPad Pocket PC Device
0cae  Ascom Business Systems, Ltd
0caf  Buslink
	2507  Hi-Speed USB-to-IDE Bridge Controller
	2515  Flash Disk Embedded Hub
	2516  Flash Disk Security Device
	2517  Flash Disk Mass Storage Device
	25c7  Hi-Speed USB-to-IDE Bridge Controller
	3a00  Hard Drive
	3a20  Mass Storage Device
	3acd  Mass Storage Device
0cb0  Flying Pig Systems
0cb1  Innovonics, Inc.
0cb6  Celestix Networks, Pte., Ltd
0cb7  Singatron Enterprise Co., Ltd
0cb8  Opticis Co., Ltd
0cba  Trust Electronic (Shanghai) Co., Ltd
0cbb  Shanghai Darong Electronics Co., Ltd
0cbc  Palmax Technology Co., Ltd
	0101  Pocket PC P6C
	0201  Personal Digital Assistant
	0301  Personal Digital Assistant P6M+
	0401  Pocket PC
0cbd  Pentel Co., Ltd (Electronics Equipment Div.)
0cbe  Keryx Technologies, Inc.
0cbf  Union Genius Computer Co., Ltd
0cc0  Kuon Yi Industrial Corp.
0cc1  Given Imaging, Ltd
0cc2  Timex Corp.
0cc3  Rimage Corp.
0cc4  emsys GmbH
0cc5  Sendo
0cc6  Intermagic Corp.
0cc7  Kontron Medical AG
0cc8  Technotools Corp.
0cc9  BroadMAX Technologies, Inc.
0cca  Amphenol
0ccb  SKNet Co., Ltd
0ccc  Domex Technology Corp.
0ccd  TerraTec Electronic GmbH
	0012  PHASE 26
	0013  PHASE 26
	0014  PHASE 26
	0015  Flash Update for TerraTec PHASE 26
	0021  Cameo Grabster 200
	0023  Mystify Claw
	0028  Aureon 5.1 MkII
	0032  MIDI HUBBLE
	0035  Miditech Play'n Roll
	0036  Cinergy 250 Audio
	0037  Cinergy 250 Audio
	0038  Cinergy T² DVB-T Receiver
	0039  Grabster AV 400
	003b  Cinergy 400
	003c  Grabster AV 250
	0042  Cinergy Hybrid T XS
	0043  Cinergy T XS
	004e  Cinergy T XS
	004f  Cinergy Analog XS
	0055  Cinergy T XE (Version 1, AF9005)
	005c  Cinergy T²
	0069  Cinergy T XE (Version 2, AF9015)
	006b  Cinergy HT PVR (EU)
	0072  Cinergy Hybrid T
	0077  Aureon Dual USB
	0078  Cinergy T XXS
	0086  Cinergy Hybrid XE
	0097  Cinergy T RC MKII
	0099  AfaTech 9015 [Cinergy T Stick Dual]
	00a5  Cinergy Hybrid Stick
	00a9  RTL2838 DVB-T COFDM Demodulator [TerraTec Cinergy T Stick Black]
	00b3  NOXON DAB/DAB+ Stick
0cd4  Bang Olufsen
	0101  BeolinkPC2
0cd5  LabJack Corporation
	0003  U3
	0009  UE9
0cd7  NewChip S.r.l.
0cd8  JS Digitech, Inc.
	2007  Smart Card Reader/JSTU-9700
0cd9  Hitachi Shin Din Cable, Ltd
0cde  Z-Com
	0001  XI-750 802.11b Wireless Adapter [Atmel AT76C503A]
	0002  XI-725/726 Prism2.5 802.11b Adapter
	0003  Sagem 802.11b Dongle
	0004  Sagem 802.11b Dongle
	0005  XI-735 Prism3 802.11b Adapter
	0006  XG-300 802.11b Adapter
	0008  XG-703A 802.11g Wireless Adapter [Intersil ISL3887]
	0009  (ZD1211)IEEE 802.11b+g Adapter
	0011  ZD1211
	0012  AR5523
	0013  AR5523 driver (no firmware)
	0014  NB 802.11g Wireless LAN Adapter(3887A)
	0015  XG-705A 802.11g Wireless Adapter [Intersil ISL3887]
	0016  NB 802.11g Wireless LAN Adapter(3887A)
	0018  NB 802.11a/b/g Wireless LAN Adapter(3887A)
	001a  802.11bg
	001c  802.11b/g Wireless Network Adapter
	0020  AG-760A 802.11abg Wireless Adapter [ZyDAS ZD1211B]
	0022  802.11b/g/n Wireless Network Adapter
	0023  UB81 802.11bgn
	0025  802.11b/g/n USB Wireless Network Adapter
	0026  UB82 802.11abgn
	0027  Sphairon Homelink 1202 802.11n Wireless Adapter [Atheros AR9170]
0ce5  Validation Technologies International
	0003  Matrix
0ce9  pico Technology
	1001  PicoScope3204
0cf1  e-Conn Electronic Co., Ltd
0cf2  ENE Technology, Inc.
	6220  SD Card Reader (SG361)
	6225  SD card reader (UB6225)
	6250  SD card reader (UB6250)
0cf3  Atheros Communications, Inc.
	0001  AR5523
	0002  AR5523 (no firmware)
	0003  AR5523
	0004  AR5523 (no firmware)
	0005  AR5523
	0006  AR5523 (no firmware)
	1001  Thomson TG121N [Atheros AR9001U-(2)NG]
	1002  TP-Link TL-WN821N v2 802.11n [Atheros AR9170]
	1006  TP-Link TL-WN322G v3 / TL-WN422G v2 802.11g [Atheros AR9271]
	1010  3Com 3CRUSBN275 802.11abgn Wireless Adapter [Atheros AR9170]
	20ff  Virtual CD-ROM
	3000  AR3011 Bluetooth (no firmware)
	3002  AR3011 Bluetooth
	3005  AR3011 Bluetooth
	7015  TP-Link TL-WN821N v3 802.11n [Atheros AR7010+AR9287]
	9170  AR9170 802.11n
	9271  AR9271 802.11n
	b002  Ubiquiti WiFiStation 802.11n [Atheros AR9271]
	b003  Ubiquiti WiFiStationEXT 802.11n [Atheros AR9271]
0cf4  Fomtex Corp.
0cf5  Cellink Co., Ltd
0cf6  Compucable Corp.
0cf7  ishoni Networks
0cf8  Clarisys, Inc.
	0750  Claritel-i750 - vp
0cf9  Central System Research Co., Ltd
0cfa  Inviso, Inc.
0cfc  Minolta-QMS, Inc.
	2301  Magicolor 2300 DL
	2350  Magicolor 2350EN/3300
	3100  Magicolor 3100
	7300  Magicolor 5450/5550
0cff  SAFA MEDIA Co., Ltd.
	0320  SR-380N
0d06  telos EDV Systementwicklung GmbH
0d08  UTStarcom
	0602  DV007 [serial]
	0603  DV007 [storage]
0d0b  Contemporary Controls
0d0c  Astron Electronics Co., Ltd
0d0d  MKNet Corp.
0d0e  Hybrid Networks, Inc.
0d0f  Feng Shin Cable Co., Ltd
0d10  Elastic Networks
	0001  StormPort (WDM)
0d11  Maspro Denkoh Corp.
0d12  Hansol Electronics, Inc.
0d13  BMF Corp.
0d14  Array Comm, Inc.
0d15  OnStream b.v.
0d16  Hi-Touch Imaging Technologies Co., Ltd
	0001  PhotoShuttle
	0002  Photo Printer 730 series
	0004  Photo Printer 63xPL/PS
	0100  Photo Printer 63xPL/PS
	0102  Photo Printer 64xPS
	0103  Photo Printer 730 series
	0104  Photo Printer 63xPL/PS
	0105  Photo Printer 64xPS
	0200  Photo Printer 64xDL
0d17  NALTEC, Inc.
0d18  coaXmedia
0d19  Hank Connection Industrial Co., Ltd
0d28  NXP
	0204  LPC1768
0d32  Leo Hui Electric Wire & Cable Co., Ltd
0d33  AirSpeak, Inc.
0d34  Rearden Steel Technologies
0d35  Dah Kun Co., Ltd
0d3a  Posiflex Technologies, Inc.
0d3c  Sri Cable Technology, Ltd
0d3d  Tangtop Technology Co., Ltd
	0001  HID Keyboard
0d3e  Fitcom, inc.
0d3f  MTS Systems Corp.
0d40  Ascor, Inc.
0d41  Ta Yun Terminals Industrial Co., Ltd
0d42  Full Der Co., Ltd
0d46  Kobil Systems GmbH
	2012  KAAN Standard Plus (Smartcard reader)
	3003  mIDentity Light / KAAN SIM III
	4000  mIDentity (mass storage)
	4001  mIDentity Basic/Classic (composite device)
	4081  mIDentity Basic/Classic (installationless)
0d49  Maxtor
	3000  Drive
	3010  3000LE Drive
	3100  Hi-Speed USB-IDE Bridge Controller
	3200  Personal Storage 3200
	5000  5000XT Drive
	5010  5000LE Drive
	5020  Mobile Hard Disk Drive
	7000  OneTouch
	7010  OneTouch
	7410  Mobile Hard Disk Drive (1TB)
	7450  Basics Portable USB Device
0d4a  NF Corp.
0d4b  Grape Systems, Inc.
0d4c  Tedas AG
0d4d  Coherent, Inc.
0d4e  Agere Systems Netherland BV
	047a  WLAN Card
	1000  Wireless Card Model 0801
	1001  Wireless Card Model 0802
0d4f  EADS Airbus France
0d50  Cleware GmbH
	0011  USB-Temp2 Thermometer
0d51  Volex (Asia) Pte., Ltd
0d53  HMI Co., Ltd
0d54  Holon Corp.
0d55  ASKA Technologies, Inc.
0d56  AVLAB Technology, Inc.
0d57  Solomon Microtech, Ltd
0d5c  SMC Networks, Inc.
	a001  SMC2662W (v1) EZ Connect 802.11b Wireless Adapter [Atmel AT76C503A]
	a002  SMC2662W v2 / SMC2662W-AR / Belkin F5D6050 [Atmel at76c503a]
0d5e  Myacom, Ltd
	2346  BT Digital Access adapter
0d5f  CSI, Inc.
0d60  IVL Technologies, Ltd
0d61  Meilu Electronics (Shenzhen) Co., Ltd
0d62  Darfon Electronics Corp.
	0003  Smartcard Reader
	0004  Filter Driver
	001c  Benq X120 Internet Keyboard Pro
	0306  M530 Mouse
	0800  Magic Wheel
	2021  AM805 Keyboard
	2026  TECOM Bluetooth Device
	2050  Mouse
	2106  Dell L20U Multimedia Keyboard
	a100  Optical Mouse
0d63  Fritz Gegauf AG
0d64  DXG Technology Corp.
	0105  Dual Mode Digital Camera 1.3M
	0107  Horus MT-409 Camera
	0108  Dual Mode Digital Camera
	0202  Dual Mode Video Camera Device
	0303  DXG-305V Camera
	1001  SiPix Stylecam/UMAX AstraPix 320s
	1002  Fashion Cam 01 Dual-Mode DSC (Video Camera)
	1003  Fashion Cam Dual-Mode DSC (Controller)
	1021  D-Link DSC 350F
	1208  Dual Mode Still Camera Device
	2208  Mass Storage
	3105  Dual Mode Digital Camera Disk
	3108  Digicam Mass Storage Device
0d65  KMJP Co., Ltd
0d66  TMT
0d67  Advanet, Inc.
0d68  Super Link Electronics Co., Ltd
0d69  NSI
0d6a  Megapower International Corp.
0d6b  And-Or Logic
0d70  Try Computer Co., Ltd
0d71  Hirakawa Hewtech Corp.
0d72  Winmate Communication, Inc.
0d73  Hit's Communications, Inc.
0d76  MFP Korea, Inc.
0d77  Power Sentry/Newpoint
0d78  Japan Distributor Corp.
0d7a  MARX Datentechnik GmbH
0d7b  Wellco Technology Co., Ltd
0d7c  Taiwan Line Tek Electronic Co., Ltd
0d7d  Phison Electronics Corp.
	0100  PS1001/1011/1006/1026 Flash Disk
	0110  Gigabyte FlexDrive
	0120  Disk Pro 64MB
	0124  GIGABYTE Disk
	0240  I/O-Magic/Transcend 6-in-1 Card Reader
	110e  NEC uPD720121/130 USB-ATA/ATAPI Bridge
	1240  Apacer 6-in-1 Card Reader 2.0
	1270  Wolverine SixPac 6000
	1300  Flash Disk
	1320  PS2031 Flash Disk
	1400  Attache 256MB USB 2.0 Flash Drive
	1420  PS2044 Pen Drive
	1470  Vosonic X's-Drive II+ VP2160
	1620  USB Disk Pro
	1900  USB Thumb Drive
0d7e  American Computer & Digital Components
	2507  Hi-Speed USB-to-IDE Bridge Controller
	2517  Hi-Speed Mass Storage Device
	25c7  Hi-Speed USB-to-IDE Bridge Controller
0d7f  Essential Reality LLC
	0100  P5 Glove glove controller
0d80  H.R. Silvine Electronics, Inc.
0d81  TechnoVision
0d83  Think Outside, Inc.
0d87  Dolby Laboratories Inc.
0d89  Oz Software
0d8a  King Jim Co., Ltd
	0101  TEPRA PRO
0d8b  Ascom Telecommunications, Ltd
0d8c  C-Media Electronics, Inc.
	0001  Audio Device
	0002  Composite Device
	0003  Sound Device
	0006  Storm HP-USB500 5.1 Headset
	000c  Audio Adapter
	000d  Composite Device
	000e  Audio Adapter (Planet UP-100, Genius G-Talk)
	001f  CM108 Audio Controller
	0102  CM106 Like Sound Device
	0103  CM102-A+/102S+ Audio Controller
	0104  CM103+ Audio Controller
	0105  CM108 Audio Controller
	0107  CM108 Audio Controller
	010f  CM108 Audio Controller
	0115  CM108 Audio Controller
	013c  CM108 Audio Controller
	0201  CM6501
	5000  Mass Storage Controller
	5200  Mass Storage Controller(0D8C,5200)
	b213  USB Phone CM109 (aka CT2000,VPT1000)
0d8d  Promotion & Display Technology, Ltd
	0234  V-234 Composite Device
	0550  V-550 Composite Device
	0551  V-551 Composite Device
	0552  V-552 Composite Device
	0651  V-651 Composite Device
	0652  V-652 Composite Device
	0653  V-653 Composite Device
	0654  V-654 Composite Device
	0655  V-655 Composite Device
	0656  V-656 Composite Device
	0657  V-657 Composite Device
	0658  V-658 Composite Device
	0659  V-659 Composite Device
	0660  V-660 Composite Device
	0661  V-661 Composite Device
	0662  V-662 Composite Device
	0850  V-850 Composite Device
	0851  V-851 Composite Device
	0852  V-852 Composite Device
	0901  V-901 Composite Device
	0902  V-902 Composite Device
	0903  V-903 Composite Device
	4754  Voyager DMP Composite Device
	bb00  Bloomberg Composite Device
	bb01  Bloomberg Composite Device
	bb02  Bloomberg Composite Device
	bb03  Bloomberg Composite Device
	bb04  Bloomberg Composite Device
	bb05  Bloomberg Composite Device
	fffe  Global Tuner Composite Device
	ffff  Voyager DMP Composite Device
0d8e  Global Sun Technology, Inc.
	0163  802.11g 54 Mbps Wireless Dongle
	1621  802.11b Wireless Adapter
	3762  Cohiba 802.11g Wireless Mini adapter [Intersil ISL3887]
	3763  802.11g Wireless dongle
	7100  802.11b Adapter
	7110  WL-210 / WU210P 802.11b Wireless Adapter [Atmel AT76C503A]
	7605  TRENDnet TEW-224UB 802.11b Wireless Adapter [Atmel AT76C503A]
	7801  AR5523
	7802  AR5523 (no firmware)
	7811  AR5523
	7812  AR5523 (no firmware)
	7a01  PRISM25 802.11b Adapter
0d8f  Pitney Bowes
0d90  Sure-Fire Electrical Corp.
0d96  Skanhex Technology, Inc.
	0000  Jenoptik JD350 video
	3300  SX330z Camera
	4100  SX410z Camera
	4102  MD 9700 Camera
	4104  Jenoptik JD-4100z3s
	410a  Medion 9801/Novatech SX-410z
	5200  SX-520z Camera
0d97  Santa Barbara Instrument Group
	0001  SBIG Astronomy Camera (without firmware)
	0101  SBIG Astronomy Camera (with firmware)
0d98  Mars Semiconductor Corp.
	0300  Avaya Wireless Card
	1007  Discovery Kids Digital Camera
0d99  Trazer Technologies, Inc.
0d9a  RTX Telecom AS
	0001  Bluetooth Device
0d9b  Tat Shing Electrical Co.
0d9c  Chee Chen Hi-Technology Co., Ltd
0d9d  Sanwa Supply, Inc.
0d9e  Avaya
	0300  Wireless Card
0d9f  Powercom Co., Ltd
	0001  Uninterruptible Power Supply
	0002  Black Knight PRO / WOW Uninterruptible Power Supply (Cypress HID->COM RS232)
	00a2  Imperial Uninterruptible Power Supply (HID PDC)
	00a3  Smart King PRO Uninterruptible Power Supply (HID PDC)
	00a4  WOW Uninterruptible Power Supply (HID PDC)
	00a5  Vanguard Uninterruptible Power Supply (HID PDC)
	00a6  Black Knight PRO Uninterruptible Power Supply (HID PDC)
0da0  Danger Research
0da1  Suzhou Peter's Precise Industrial Co., Ltd
0da2  Land Instruments International, Ltd
0da3  Nippon Electro-Sensory Devices Corp.
0da4  Polar Electro OY
	0001  Interface
0da7  IOGear, Inc.
0da8  softDSP Co., Ltd
	0001  SDS 200A Oscilloscope
0dab  Cubig Group
	0100  DVR/CVR-M140 MP3 Player
0dad  Westover Scientific
0db0  Micro Star International
	1020  PC2PC WLAN Card
	1967  Bluetooth Dongle
	3801  Motorola Bluetooth 2.1+EDR Device
	4011  Medion Flash XL V2.0 Card Reader
	4600  802.11b/g Turbo Wireless Adapter
	5501  Mass Storage Device
	5502  Mass Storage Device
	5513  MP3 Player
	5515  MP3 Player
	5516  MP3 Player
	5580  Mega Sky 580 DVB-T Tuner [M902x]
	5581  Mega Sky 580 DVB-T Tuner [GL861]
	6823  UB11B/MS-6823 802.11b Wi-Fi adapter
	6826  IEEE 802.11g Wireless Network Adapter
	6855  Bluetooth Device
	6861  MSI-6861 802.11g WiFi adapter
	6865  RT2570
	6869  RT2570
	6874  RT2573
	6877  RT2573
	6881  Bluetooth Class I EDR Device
	688a  Bluetooth Class I EDR Device
	6899  802.11bgn 1T1R Mini Card Wireless Adapter
	6970  MS-6970 BToes Bluetooth adapter
	697a  Bluetooth Dongle
	6982  Medion Flash XL Card Reader
	a861  RT2573
	a874  RT2573
	a970  Bluetooth dongle
	a97a  Bluetooth EDR Device
	b970  Bluetooth EDR Device
	b97a  Bluetooth EDR Device
0db1  Wen Te Electronics Co., Ltd
0db2  Shian Hwi Plug Parts, Plastic Factory
0db3  Tekram Technology Co., Ltd
0db4  Chung Fu Chen Yeh Enterprise Corp.
0db7  ELCON Systemtechnik
	0002  Goldpfeil P-LAN
0dbc  A&D Medical
	0003  AND Serial Cable [AND Smart Cable]
0dbe  Jiuh Shiuh Precision Industry Co., Ltd
0dbf  Jess-Link International
	0002  SmartDongle Security Key
	0200  HDD Storage Solution
	021b  USB-2.0 IDE Adapter
	0300  Storage Adapter
	0333  Storage Adapter
	0707  ZIV Drive
0dc0  G7 Solutions (formerly Great Notions)
0dc1  Tamagawa Seiki Co., Ltd
0dc3  Athena Smartcard Solutions, Inc.
	0801  ASEDrive III
	0802  ASEDrive IIIe
	1104  ASEDrive IIIe KB
	1701  ASEKey
	1702  ASEKey
0dc4  Macpower Peripherals, Ltd
	0040  Mass Storage Device
	0041  Mass Storage Device
	0042  Mass Storage Device
	0101  Hi-Speed Mass Storage Device
	020a  Oyen Digital MiniPro 2.5" hard drive enclosure
0dc5  SDK Co., Ltd
0dc6  Precision Squared Technology Corp.
	2301  Wireless Touchpad Keyboard
0dc7  First Cable Line, Inc.
0dcd  NetworkFab Corp.
	0001  Remote Interface Adapter
	0002  High Bandwidth Codec
0dd0  Access Solutions
	1002  Triple Talk Speech Synthesizer
0dd1  Contek Electronics Co., Ltd
0dd2  Power Quotient International Co., Ltd
	0003  Mass Storage (P)
0dd3  MediaQ
0dd4  Custom Engineering SPA
0dd5  California Micro Devices
0dd7  Kocom Co., Ltd
0dd8  Netac Technology Co., Ltd
	1060  USB-CF-Card
	e007  OnlyDisk U222 Pendrive
	f607  OnlyDisk U208 1G flash drive [U-SAFE]
0dd9  HighSpeed Surfing
0dda  Integrated Circuit Solution, Inc.
	0001  Multi-Card Reader 6in1
	0002  Multi-Card Reader 7in1
	0003  Flash Disk
	0005  Internal Multi-Card Reader 6in1
	0008  SD single card reader
	0009  MS single card reader
	000a  MS+SD Dual Card Reader
	000b  SM single card reader
	0101  All-In-One Card Reader
	0102  All-In-One Card Reader
	0301  MP3 Player
	0302  Multi-Card MP3 Player
	1001  Multi-Flash Disk
	2001  Multi-Card Reader
	2002  Q018 default PID
	2003  Multi-Card Reader
	2005  Datalux DLX-1611 16in1 Card Reader
	2006  All-In-One Card Reader
	2007  USB to ATAPI bridge
	2008  All-In-One Card Reader
	2013  SD/MS Combo Card Reader
	2014  SD/MS Single Card Reader
	2023  card reader SD/MS DEMO board with ICSI brand name (MaskROM version)
	2024  card reader SD/MS DEMO board with Generic brand name (MaskROM version)
	2026  USB2.0 Card Reader
	2027  USB 2.0 Card Reader
	2315  UFD MP3 player (model 2)
	2318  UFD MP3 player (model 1)
	2321  UFD MP3 player
0ddb  Tamarack, Inc.
0ddd  Datelink Technology Co., Ltd
0dde  Ubicom, Inc.
0de0  BD Consumer Healthcare
0dea  UTECH Electronic (D.G.) Co., Ltd.
0ded  Novasonics
0dee  Lifetime Memory Products
	4010  Storage Adapter
0def  Full Rise Electronic Co., Ltd
0df4  NET&SYS
	0201  MNG-2005
0df6  Sitecom Europe B.V.
	0001  C-Media VOIP Device
	0004  Bluetooth 2.0 Adapter 100m
	0007  Bluetooth 2.0 Adapter 10m
	000b  Bluetooth 2.0 Adapter DFU
	000d  WL-168 Wireless Network Adapter 54g
	0017  WL-182 Wireless-N Network USB Card
	0019  Bluetooth 2.0 adapter 10m CN-512v2 001
	001a  Bluetooth 2.0 adapter 100m CN-521v2 001 
	002b  WL-188 Wireless Network 300N USB Adapter
	002c  WL-301 Wireless Network 300N USB Adapter
	002d  WL-302 Wireless Network 300N USB dongle 
	0036  WL-603 Wireless Adapter
	0039  WL-315 Wireless-N USB Adapter
	003b  WL-321 Wireless USB Gaming Adapter 300N
	003c  WL-323 Wireless-N USB Adapter
	003d  WL-324 Wireless USB Adapter 300N
	003e  WL-343 Wireless USB Adapter 150N X1
	003f  WL-608 Wireless USB Adapter 54g
	0040  WL-344 Wireless Adapter 300N X2 [Ralink RT3071]
	0041  WL-329 Wireless Dualband USB adapter 300N
	0042  WL-345 Wireless USB adapter 300N X3
	0045  WL-353 Wireless USB Adapter 150N Nano
	0047  WL-352v1 Wireless USB Adapter 300N 002
	0048  WL-349v1 Wireless Adapter 150N 002 [Ralink RT3070]
	004a  WL-358v1 Wireless Micro USB Adapter 300N X3 002
	004b  WL-349v3 Wireless Micro Adapter 150N X1 [Realtek RTL8192SU]
	004c  WL-352 802.11n Adapter [Realtek RTL8191SU]
	0050  WL-349v4 Wireless Micro Adapter 150N X1 [Ralink RT3370]
	005d  WLA-2000 v1.001 WLAN [RTL8191SU]
	061c  LN-028 Network USB 2.0 Adapter
	21f4  44 St Bluetooth Device
	2200  Sitecom bluetooth2.0 class 2 dongle CN-512
	2208  Sitecom bluetooth2.0 class 2 dongle CN-520
	2209  Sitecom bluetooth2.0 class 1 dongle CN-521
	9071  WL-113 rev 1 Wireless Network USB Adapter
	9075  WL-117 Hi-Speed USB Adapter
	90ac  WL-172 Wireless Network USB Adapter 54g Turbo
	9712  WL-113 rev 2 Wireless Network USB Adapter
0df7  Mobile Action Technology, Inc.
	0620  MA-620 Infrared Adapter
	0700  MA-700 Bluetooth Adapter
	0720  MA-720 Bluetooth Adapter
	0722  Bluetooth Dongle
	0730  MA-730/MA-730G Bluetooth Adapter
	0800  Data Cable
	0820  Data Cable
	0900  MA i-gotU Travel Logger GPS
	1800  Generic Card Reader
	1802  Card Reader
0dfa  Toyo Communication Equipment Co., Ltd
0dfc  GeneralTouch Technology Co., Ltd
	0001  Touchscreen
0e03  Nippon Systemware Co., Ltd
0e08  Winbest Technology Co., Ltd
0e0b  Amigo Technology Inc.
	9031  802.11n Wireless USB Card
	9041  802.11n Wireless USB Card
0e0c  Gesytec
	0101  LonUSB LonTalk Network Adapter
0e0f  VMware, Inc.
	0001  Device
	0002  Virtual USB Hub
	0003  Virtual Mouse
	0004  Virtual CCID
	0005  Virtual Mass Storage
	0006  Virtual Keyboard
	f80a  Smoker FX2
0e16  JMTek, LLC
0e17  Walex Electronic, Ltd
0e1b  Crewave
0e20  Pegasus Technologies Ltd.
	0101  NoteTaker
0e21  Cowon Systems, Inc.
	0300  iAudio CW200
	0400  MP3 Player
	0500  iAudio M3
	0510  iAudio X5, subpack USB port
	0513  iAudio X5, side USB port
	0520  iAudio M5, side USB port
	0601  iAudio G3
	0681  iAUDIO E2
	0700  iAudio U3
	0751  iAudio 7
	0760  iAUDIO U5 / iAUDIO G2
	0800  Cowon D2 (UMS mode)
	0801  Cowon D2 (MTP mode)
	0910  iAUDIO 9
	0920  J3
0e22  Symbian Ltd.
0e23  Liou Yuane Enterprise Co., Ltd
0e25  VinChip Systems, Inc.
0e26  J-Phone East Co., Ltd
0e30  HeartMath LLC
0e34  Micro Computer Control Corp.
0e35  3Pea Technologies, Inc.
0e36  TiePie engineering
	0008  Handyscope HS3
	0009  Handyscope HS3 (br)
	000a  Handyscope HS4
	000b  Handyscope HS4 (br)
	000e  Handyscope HS4-DIFF
	000f  Handyscope HS4-DIFF (br)
	0010  Handyscope HS2
	0011  TiePieSCOPE HS805 (br)
	0012  TiePieSCOPE HS805
	0018  Handyprobe HP2
	0042  TiePieSCOPE HS801
	00fd  USB To Parallel adapter
	00fe  USB To Parallel adapter
0e38  Stratitec, Inc.
0e39  Smart Modular Technologies, Inc.
	0137  Bluetooth Device
0e3a  Neostar Technology Co., Ltd
	1100  CW-1100 Wireless Network Adapter
0e3b  Mansella, Ltd
0e41  Line6, Inc.
	4147  TonePort GX
	4250  BassPODxt
	4252  BassPODxt Pro
	4642  BassPODxt Live
	4650  PODxt Live
	4750  GuitarPort
	5044  PODxt
	5050  PODxt Pro
	534d  SeaMonkey
0e44  Sun-Riseful Technology Co., Ltd.
0e48  Julia Corp., Ltd
	0100  CardPro SmartCard Reader
0e4a  Shenzhen Bao Hing Electric Wire & Cable Mfr. Co.
0e4c  Radica Games, Ltd
	1097  Gamester Controller
	2390  Games Jtech Controller
	7288  funkey reader
0e55  Speed Dragon Multimedia, Ltd
	110a  Tanic S110-SG1 + ISSC IS1002N [Slow Infra-Red (SIR) & Bluetooth 1.2 (Class 2) Adapter]
	110b  MS3303H USB-to-Serial Bridge
0e56  Kingston Technology Company, Inc.
	6021  K-PEX 100
0e5a  Active Co., Ltd
0e5b  Union Power Information Industrial Co., Ltd
0e5c  Bitland Information Technology Co., Ltd
	6118  LCD Device
	6119  remote receive and control device
	6441  C-Media Sound Device
0e5d  Neltron Industrial Co., Ltd
0e5e  Conwise Technology Co., Ltd.
	6622  CW6622
0e66  Hawking Technologies
	0001  HWUN1 Hi-Gain Wireless-300N Adapter w/ Upgradable Antenna [Ralink RT2870]
	0003  HWDN1 Hi-Gain Wireless-300N Dish Adapter [Ralink RT2870]
	0009  HWUN2 Hi-Gain Wireless-150N Adapter w/ Upgradable Antenna [Ralink RT2770]
	000b  HWDN2 Hi-Gain Wireless-150N Dish Adapter [Ralink RT2770]
	0013  HWUN3 Hi-Gain Wireless-N Adapter [Ralink RT3070]
	0017  HAWNU1 Hi-Gain Wireless-150N Network Adapter with Range Amplifier [Ralink RT3070]
	0018  Wireless-N Network Adapter [Ralink RT2870]
	400b  UF100 10/100 Network Adapter
	400c  UF100 Ethernet [pegasus2]
0e67  Fossil, Inc.
	0002  Wrist PDA
0e6a  Megawin Technology Co., Ltd
	0101  MA100 [USB-UART Bridge IC]
	6001  GEMBIRD Flexible keyboard KB-109F-B-DE
0e6f  Logic3
	0003  Freebird wireless Controller
	0005  Eclipse wireless Controller
	0006  Edge wireless Controller
0e70  Tokyo Electronic Industry Co., Ltd
0e72  Hsi-Chin Electronics Co., Ltd
0e75  TVS Electronics, Ltd
0e79  Archos, Inc.
	1106  Pocket Media Assistant - PMA400
	1204  Gmini XS 200
	1306  504 Portable Multimedia Player
	1330  5 Tablet
	1332  5 IMT
	1416  32 IT
	1417  A43 IT
0e7b  On-Tech Industry Co., Ltd
0e7e  Gmate, Inc.
	0001  Yopy 3000 PDA
	1001  YP3X00 PDA
0e82  Ching Tai Electric Wire & Cable Co., Ltd
0e83  Shin An Wire & Cable Co.
0e8c  Well Force Electronic Co., Ltd
0e8d  MediaTek Inc.
	0003  MT6227 phone
	0004  MT6227 phone
	1836  Samsung SE-S084 Super WriteMaster Slim External DVD writer
0e8f  GreenAsia Inc.
	0003  MaxFire Blaze2
	0012  USB Wireless 2.4GHz Gamepad
	0016  4 port USB 1.1 hub UH-174
	0020  USB to PS/2 Adapter
	0021  Multimedia Keyboard Controller
	0201  SmartJoy Frag Xpad/PS2 adaptor
0e90  WiebeTech, LLC
	0100  Storage Adapter V1
0e91  VTech Engineering Canada, Ltd
0e92  C's Glory Enterprise Co., Ltd
0e93  eM Technics Co., Ltd
0e95  Future Technology Co., Ltd
0e96  Aplux Communications, Ltd
	c001  TRUST 380 USB2 SPACEC@M
0e97  Fingerworks, Inc.
	0908  Composite HID (Keyboard and Mouse)
0e98  Advanced Analogic Technologies, Inc.
0e99  Parallel Dice Co., Ltd
0e9a  TA HSING Industries, Ltd
0e9b  ADTEC Corp.
0e9c  Streamzap, Inc.
	0000  Streamzap Remote Control
0e9f  Tamura Corp.
0ea0  Ours Technology, Inc.
	2126  7-in-1 Card Reader
	2153  SD Card Reader Key
	2168  Transcend JetFlash 2.0 / Astone USB Drive
	6803  OTI-6803 Flash Disk
	6808  OTI-6808 Flash Disk
	6828  OTI-6828 Flash Disk
	6858  OTi-6858 serial adapter
0ea6  Nihon Computer Co., Ltd
0ea7  MSL Enterprises Corp.
0ea8  CenDyne, Inc.
0ead  Humax Co., Ltd
0eb0  NovaTech
	9020  NovaTech NV-902W
	9021  RT2573
0eb1  WIS Technologies, Inc.
	6666  WinFast WalkieTV TV Loader
	6668  WinFast WalkieTV TV Loader
	7007  WinFast WalkieTV WDM Capture
0eb2  Y-S Electronic Co., Ltd
0eb3  Saint Technology Corp.
0eb7  Endor AG
0ebe  VWeb Corp.
0ebf  Omega Technology of Taiwan, Inc.
0ec0  LHI Technology (China) Co., Ltd
0ec1  Abit Computer Corp.
0ec2  Sweetray Industrial, Ltd
0ec3  Axell Co., Ltd
0ec4  Ballracing Developments, Ltd
0ec5  GT Information System Co., Ltd
0ec6  InnoVISION Multimedia, Ltd
0ec7  Theta Link Corp.
	1008  So., Show 301 Digital Camera
0ecd  Lite-On IT Corp.
	1400  CD\RW 40X
	a100  LDW-411SX DVD/CD Rewritable Drive
0ece  TaiSol Electronics Co., Ltd
0ecf  Phogenix Imaging, LLC
0ed1  WinMaxGroup
	6660  Flash Disk 64M-C
	6680  Flash Disk 64M-B
	7634  MP3 Player
0ed2  Kyoto Micro Computer Co., Ltd
0ed3  Wing-Tech Enterprise Co., Ltd
0ed5  Fiberbyte
	e000  USB-inSync Device
	f000  Fiberbyte USB-inSync Device
	f201  Fiberbyte USB-inSync DAQ-2500X
0eda  Noriake Itron Corp.
0edf  e-MDT Co., Ltd
	2060  FID irock! 100 Series
0ee0  Shima Seiki Mfg., Ltd
0ee1  Sarotech Co., Ltd
0ee2  AMI Semiconductor, Inc.
0ee3  ComTrue Technology Corp.
	1000  Image Tank 1.5
0ee4  Sunrich Technology, Ltd
0eee  Digital Stream Technology, Inc.
	8810  Mass Storage Drive
0eef  D-WAV Scientific Co., Ltd
	0001  eGalax TouchScreen
	0002  Touchscreen Controller(Professional)
0ef0  Hitachi Cable, Ltd
0ef1  Aichi Micro Intelligent Corp.
0ef2  I/O Magic Corp.
0ef3  Lynn Products, Inc.
0ef4  DSI Datotech
0ef5  PointChips
	2202  Flash Disk
	2366  Flash Disk
0ef6  Yield Microelectronics Corp.
0ef7  SM Tech Co., Ltd (Tulip)
0efd  Oasis Semiconductor
0efe  Wem Technology, Inc.
0f06  Visual Frontier Enterprise Co., Ltd
0f08  CSL Wire & Plug (Shen Zhen) Co.
0f0c  CAS Corp.
0f0d  Hori Co., Ltd
	0011  Real Arcade Pro 3
0f0e  Energy Full Corp.
0f11  LD Didactic GmbH
	1000  CASSY-S
	1010  Pocket-CASSY
	1020  Mobile-CASSY
	1080  Joule and Wattmeter
	1081  Digital Multimeter P
	1090  UMI P
	1100  X-Ray Apparatus
	1101  X-Ray Apparatus
	1200  VideoCom
	2000  COM3LAB
	2010  Terminal Adapter
	2020  Network Analyser
	2030  Converter Control Unit
	2040  Machine Test System
0f12  Mars Engineering Corp.
0f13  Acetek Technology Co., Ltd
0f18  Finger Lakes Instrumentation
	0002  CCD
	0006  Focuser
	0007  Filter Wheel
	000a  ProLine CCD
	000b  Color Filter Wheel 4
	000c  PDF2
	000d  Guider
0f19  Oracom Co., Ltd
0f1b  Onset Computer Corp.
0f1c  Funai Electric Co., Ltd
0f1d  Iwill Corp.
0f21  IOI Technology Corp.
0f22  Senior Industries, Inc.
0f23  Leader Tech Manufacturer Co., Ltd
0f24  Flex-P Industries, Snd., Bhd.
0f2d  ViPower, Inc.
0f2e  Geniality Maple Technology Co., Ltd
0f2f  Priva Design Services
0f30  Jess Technology Co., Ltd
	001c  PS3 Guitar Controller Dongle
	0110  Dual Analog Rumble Pad
	0111  Colour Rumble Pad
	0208  Xbox & PC Gamepad
0f31  Chrysalis Development
0f32  YFC-BonEagle Electric Co., Ltd
0f37  Kokuyo Co., Ltd
0f38  Nien-Yi Industrial Corp.
0f3d  Airprime, Incorporated
	0112  CDMA 1xEVDO PC Card, PC 5220
0f41  RDC Semiconductor Co., Ltd
0f42  Nital Consulting Services, Inc.
0f44  Polhemus
	ef11  Patriot (firmware not loaded)
	ef12  Patriot
	ff11  Liberty (firmware not loaded)
	ff12  Liberty
0f4b  St. John Technology Co., Ltd
0f4c  WorldWide Cable Opto Corp.
0f4d  Microtune, Inc.
	1000  Bluetooth Dongle
0f4e  Freedom Scientific
0f52  Wing Key Electrical Co., Ltd
0f53  Dongguan White Horse Cable Factory, Ltd
0f54  Kawai Musical Instruments Mfg. Co., Ltd
0f55  AmbiCom, Inc.
0f5c  Prairiecomm, Inc.
0f5d  NewAge International, LLC
	9455  Compact Drive
0f5f  Key Technology Corp.
0f60  NTK, Ltd
0f61  Varian, Inc.
0f62  Acrox Technologies Co., Ltd
	1001  Targus Mini Trackball Optical Mouse
0f63  LeapFrog Enterprises
	0010  Leapster Explorer
	0500  Fly Fusion
	0600  Leap Port Turbo
	0700  POGO
	0800  Didj
	0900  TAGSchool
	0a00  Leapster 2
	0b00  Crammer
	0c00  Tag Jr
	0d00  My Pal Scout
	0e00  Tag32
	0f00  Tag64
	1000  Kiwi16
	1100  Leapster L2x
	1111  Fly Fusion
	1300  Didj UK/France (Leapster Advance)
0f68  Kobe Steel, Ltd
0f69  Dionex Corp.
0f6a  Vibren Technologies, Inc.
0f6e  INTELLIGENT SYSTEMS
	0100  GameBoy Color Emulator
	0201  GameBoy Advance Flash Gang Writer
	0202  GameBoy Advance Capture
	0300  Gamecube DOL Viewer
	0400  NDS Emulator
	0401  NDS UIC
	0402  NDS Writer
	0403  NDS Capture
	0404  NDS Emulator (Lite)
0f73  DFI
0f7c  DQ Technology, Inc.
0f7d  NetBotz, Inc.
0f7e  Fluke Corp.
0f88  VTech Holdings, Ltd
	3012  RT2570
	3014  ZD1211B
0f8b  Yazaki Corp.
0f8c  Young Generation International Corp.
0f8d  Uniwill Computer Corp.
0f8e  Kingnet Technology Co., Ltd
0f8f  Soma Networks
0f97  CviLux Corp.
0f98  CyberBank Corp.
0f9c  Hyun Won, Inc.
	0301  M-Any Premium DAH-610 MP3/WMA Player
	0332  mobiBLU DAH-1200 MP3/Ogg Player
0f9e  Lucent Technologies
0fa3  Starconn Electronic Co., Ltd
0fa4  ATL Technology
0fa5  Sotec Co., Ltd
0fa7  Epox Computer Co., Ltd
0fa8  Logic Controls, Inc.
0faf  Winpoint Electronic Corp.
0fb0  Haurtian Wire & Cable Co., Ltd
0fb1  Inclose Design, Inc.
0fb2  Juan-Chern Industrial Co., Ltd
0fb6  Heber Ltd
	3fc3  Firefly X10i I/O Board (with firmware)
	3fc4  Firefly X10i I/O Board (without firmware)
0fb8  Wistron Corp.
	0002  eHome Infrared Receiver
0fb9  AACom Corp.
0fba  San Shing Electronics Co., Ltd
0fbb  Bitwise Systems, Inc.
0fc1  Mitac Internatinal Corp.
0fc2  Plug and Jack Industrial, Inc.
0fc5  Delcom Engineering
	1222  I/O Development Board
0fc6  Dataplus Supplies, Inc.
0fca  Research In Motion, Ltd.
	0001  Blackberry Handheld
	0004  Blackberry Handheld
	0006  Blackberry Pearl
	0008  Blackberry Pearl
	8001  Blackberry Handheld
	8004  Blackberry Handheld
	8007  Blackberry Handheld
0fce  Sony Ericsson Mobile Communications AB
	0076  W910i (Multimedia mode)
	00af  V640i Phone [PTP Camera]
	00d4  C902 [MTP]
	00d9  C702 Phone
	0112  W995 Walkman Phone
	1010  WMC Modem
	10af  V640i Phone [PictBridge]
	10d4  C902 Phone [PictBridge]
	2105  W715 Phone
	2137  Xperia X10 mini (USB debug)
	2138  Xperia X10 mini pro (Debug)
	2149  Xperia X8 (debug)
	3137  Xperia X10 mini
	3138  Xperia X10 mini pro
	3149  Xperia X8
	614f  Xperia X12 (debug mode)
	8004  9000 Phone [Mass Storage]
	d008  V800-Vodafone 802SE Phone
	d016  K750i Phone
	d017  K608i Phone
	d019  VDC EGPRS Modem
	d025  520 WMC Data Modem
	d028  W800i
	d038  W850i Phone
	d039  K800i (phone mode)
	d041  K510i Phone
	d042  W810i Phone
	d043  V630i Phone
	d046  K610i Phone
	d065  W960i Phone (PC Suite)
	d076  W910i (Phone mode)
	d089  W580i Phone (mass storage)
	d0af  V640i Phone
	d0cf  MD300 Mobile Broadband Modem
	d0d4  C902 Phone [Modem]
	d0e1  MD400 Mobile Broadband Modem
	d12e  Xperia X10
	e039  K800i (msc mode)
	e042  W810i Phone
	e043  V630i Phone [Mass Storage]
	e075  K850i
	e076  W910i (Mass storage)
	e089  W580i Phone
	e090  W200 Phone (Mass Storage)
	e0a3  W660i
	e0af  V640i Phone [Mass Storage]
	e0d4  C902 Phone [Mass Storage] 
	e0ef  C905 Phone [Mass Storage]
	e0f3  W595
	e105  W705
	e112  W995 Phone (Mass Storage)
	e12e  X10i Phone
	e133  Vivaz
	e14f  Xperia Arc/X12
0fcf  Dynastream Innovations, Inc.
0fd0  Tulip Computers B.V.
0fd1  Giant Electronics Ltd.
0fd4  Tenovis GmbH & Co., KG
0fd5  Direct Access Technology, Inc.
0fd9  Elgato Systems GmbH
	0011  EyeTV Diversity
	0018  EyeTV Hybrid
	0020  EyeTV DTT Deluxe
	0021  EyeTV DTT
	002a  EyeTV Sat
	002c  EyeTV DTT Deluxe v2
	0033  Video Capture
	0037  Video Capture v2
0fdc  Micro Plus
0fe0  Osterhout Design Group
	0100  Bluetooth Mouse
	0101  Bluetooth IMU
	0200  Bluetooth Keypad
0fe4  IN-Tech Electronics, Ltd
0fe5  Greenconn (U.S.A.), Inc.
0fe6  Kontron (Industrial Computer Source / ICS Advent)
	8101  DM9601 Fast Ethernet Adapter
	811e  Parallel Adapter
	9700  DM9601 Fast Ethernet Adapter
0fe9  DVICO
	4020  TViX M-6500
	db00  FusionHDTV DVB-T (MT352+LgZ201) (uninitialized)
	db01  FusionHDTV DVB-T (MT352+LgZ201) (initialized)
	db10  FusionHDTV DVB-T (MT352+Thomson7579) (uninitialized)
	db11  FusionHDTV DVB-T (MT352+Thomson7579) (initialized)
	db78  FusionHDTV DVB-T Dual Digital 4 (ZL10353+xc2028/xc3028) (initialized)
0fea  United Computer Accessories
0feb  CRS Electronic Co., Ltd
0fec  UMC Electronics Co., Ltd
0fed  Access Co., Ltd
0fee  Xsido Corp.
0fef  MJ Research, Inc.
0ff6  Core Valley Co., Ltd
0ff7  CHI SHING Computer Accessories Co., Ltd
0ffc  Clavia DMI AB
	0021  Nord Stage 2
0fff  Aopen, Inc.
1000  Speed Tech Corp.
1001  Ritronics Components (S) Pte., Ltd
1003  Sigma Corp.
	0003  SD14
	0100  SD9/SD10
1004  LG Electronics, Inc.
	1fae  U8120 3G Cellphone
	6000  KU330/KU990/VX4400/VX6000
	6005  T5100
	6018  GM360/GD510/GW520/KP501
	618e  Ally/Optimus One/Vortex (debug mode)
	618f  Ally/Optimus One
	61c6  Vortex (msc)
	61cc  Optimus S
	6800  CDMA Modem
	7000  LG LDP-7024D(LD)USB
	a400  Renoir (KC910)
1005  Apacer Technology, Inc.
	1001  MP3 Player
	1004  MP3 Player
	1006  MP3 Player
	b113  Handy Steno 2.0/HT203
	b223  CD-RW + 6in1 Card Reader Digital Storage / Converter
1006  iRiver, Ltd.
	3001  iHP-100
	3002  iHP-120/140 MP3 Player
	3003  H320/H340
	3004  H340 (mtp)
1009  Emuzed, Inc.
	000e  eHome Infrared Receiver
	0013  Angel MPEG Device
	0015  Lumanate Wave PAL SECAM DVBT Device
	0016  Lumanate Wave NTSC/ATSC Combo Device
100a  AV Chaseway, Ltd
	2402  MP3 Player
	2404  MP3 Player
	2405  MP3 Player
	2406  MP3 Player
	a0c0  MP3 Player
100b  Chou Chin Industrial Co., Ltd
100d  Netopia, Inc.
	3342  Cayman 3352 DSL Modem
	3382  3380 Series Network Interface
	6072  DSL Modem
	9031  Motorola 802.11n Dualband USB Wireless Adapter
	9032  Motorola 802.11n 5G USB Wireless Adapter
	cb01  Cayman 3341 Ethernet DSL Router
1010  Fukuda Denshi Co., Ltd
1011  Mobile Media Tech.
	0001  AccFast Mp3
1012  SDKM Fibres, Wires & Cables Berhad
1013  TST-Touchless Sensor Technology AG
1014  Densitron Technologies PLC
1015  Softronics Pty., Ltd
1016  Xiamen Hung's Enterprise Co., Ltd
1017  Speedy Industrial Supplies, Pte., Ltd
1019  Elitegroup Computer Systems (ECS)
	0c55  Flash Reader, Desknote UCR-61S2B
	0f38  Infrared Receiver
1020  Labtec
	0006  Wireless Keyboard
	000a  Wireless Optical Mouse
	0106  Wireless Optical Mouse
1022  Shinko Shoji Co., Ltd
1025  Hyper-Paltek
	005e  USB DVB-T device
	005f  USB DVB-T device
	0300  MP3 Player
	0350  MP3 Player
1026  Newly Corp.
1027  Time Domain
1028  Inovys Corp.
1029  Atlantic Coast Telesys
102a  Ramos Technology Co., Ltd
102b  Infotronic America, Inc.
102c  Etoms Electronics Corp.
	6151  Q-Cam Sangha CIF
	6251  Q-Cam VGA
102d  Winic Corp.
1031  Comax Technology, Inc.
1032  C-One Technology Corp.
1033  Nucam Corp.
	0068  3,5'' HDD case MD-231
1038  Ideazon, Inc.
	0100  Zboard
1039  devolo AG
	2140  dsl+ 1100 duo
103d  Stanton
	0100  ScratchAmp
	0101  ScratchAmp
1043  iCreate Technologies Corp.
	160f  Wireless Network Adapter
	4901  AV-836 Video Capture Device
	8006  Flash Disk 32-256 MB
	8012  Flash Disk 256 MB
1044  Chu Yuen Enterprise Co., Ltd
	7001  Gigabyte U7000 DVB-T tuner
	7002  Gigabyte U8000 DVB-T tuner
	7004  Gigabyte U7100 DVB-T tuner
	7005  Gigabyte U7200 DVB-T tuner [AF9035]
	7006  Gigabyte U6000 DVB-T tuner [em2863]
	8001  GN-54G
	8002  GN-BR402W
	8003  GN-WLBM101
	8004  GN-WLBZ101 802.11b Adapter
	8005  GN-WLBZ201 802.11b Adapter
	8006  GN-WBZB-M 802.11b Adapter
	8007  GN-WBKG
	8008  GN-WB01GS
	800a  GN-WI05GS
	800b  GN-WB30N 802.11n WLAN Card
	800c  GN-WB31N 802.11n USB WLAN Card
	800d  GN-WB32L 802.11n USB WLAN Card
1046  Winbond Electronics Corp. [hex]
	6694  Generic W6694 USB
	8901  Bluetooth Device
	9967  W9967CF/W9968CF Webcam IC
1048  Targus Group International
104b  Mylex / Buslogic
104c  AMCO TEC International, Inc.
104d  Newport Corporation
	1003  Model-52 LED Light Source Power Supply and Driver
104f  WB Electronics
	0001  Infinity Phoenix
	0002  Smartmouse
	0003  FunProgrammer
	0004  Infinity Unlimited
	0006  Infinity Smart
	0007  Infinity Smart module
	0008  Infinity CryptoKey
	0009  RE-BL PlayStation 3 IR-to-Bluetooth converter
1050  Yubico.com
	0010  Yubikey
1053  Immanuel Electronics Co., Ltd
1054  BMS International Beheer N.V.
	5004  DSL 7420 Loader
	5005  DSL 7420 LAN Modem
1055  Complex Micro Interconnection Co., Ltd
1056  Hsin Chen Ent Co., Ltd
1057  ON Semiconductor
1058  Western Digital Technologies, Inc.
	0200  Firewire USB Combo
	0400  External HDD
	0500  hub
	0702  Passport External HDD
	0704  Passport External HDD
	070a  My Passport Essential SE
	071a  My Passport 1TB
	0740  My Passport 1TB
	0742  My Passport Essential SE
	0900  MyBook Essential External HDD
	0901  MyBook External HDD
	0903  My Book Premium Edition
	0910  MyBook Essential External HDD
	1001  External Hard Disk [Elements]
	1010  Elements External HDD
	1021  Elements 2TB
	1023  Elements SE
	1103  My Book Studio
	1104  MyBook Mirror Edition External HDD
	1123  My Book 3.0
1059  Giesecke & Devrient GmbH
	000b  StarSign Bio Token 3.0
105c  Hong Ji Electric Wire & Cable (Dongguan) Co., Ltd
105d  Delkin Devices, Inc.
105e  Valence Semiconductor Design, Ltd
105f  Chin Shong Enterprise Co., Ltd
1060  Easthome Industrial Co., Ltd
1063  Motorola Electronics Taiwan, Ltd [hex]
	1555  MC141555 Hub
	4100  SB4100 USB Cable Modem
1065  CCYU Technology
	0020  USB-DVR2 Dev Board
	2136  EasyDisk ED1064
106a  Loyal Legend, Ltd
106c  Curitel Communications, Inc.
	1101  CDMA 2000 1xRTT USB modem (HX-550C)
	1102  Packet Service
	1103  Packet Service Diagnostic Serial Port (WDM)
	1104  Packet Service Diagnostic Serial Port (WDM)
	1105  Composite Device
	1106  Packet Service Diagnostic Serial Port (WDM)
	1301  Composite Device
	1302  Packet Service Diagnostic Serial Port (WDM)
	1303  Packet Service
	1304  Packet Service
	1401  Composite Device
	1402  Packet Service
	1403  Packet Service Diagnostic Serial Port (WDM)
	1501  Packet Service
	1502  Packet Service Diagnostic Serial Port (WDM)
	1503  Packet Service
	1601  Packet Service
	1602  Packet Service Diagnostic Serial Port (WDM)
	1603  Packet Service
	2101  AudioVox 8900 Cell Phone
	2102  Packet Service
	2103  Packet Service Diagnostic Serial Port (WDM)
	2301  Packet Service
	2302  Packet Service Diagnostic Serial Port (WDM)
	2303  Packet Service
	2401  Packet Service Diagnostic Serial Port (WDM)
	2402  Packet Service
	2403  Packet Service Diagnostic Serial Port (WDM)
	2501  Packet Service
	2502  Packet Service Diagnostic Serial Port (WDM)
	2503  Packet Service
	2601  Packet Service
	2602  Packet Service Diagnostic Serial Port (WDM)
	2603  Packet Service
	3701  Broadband Wireless modem
	3702  Pantech PX-500
	3714  PANTECH USB MODEM [UM175]
	3eb4  Packet Service Diagnostic Serial Port (WDM)
	4101  Packet Service Diagnostic Serial Port (WDM)
	4102  Packet Service
	4301  Composite Device
	4302  Packet Service Diagnostic Serial Port (WDM)
	4401  Composite Device
	4402  Packet Service
	4501  Packet Service
	4502  Packet Service Diagnostic Serial Port (WDM)
	4601  Composite Device
	4602  Packet Service Diagnostic Serial Port (WDM)
	5101  Packet Service
	5102  Packet Service Diagnostic Serial Port (WDM)
	5301  Packet Service Diagnostic Serial Port (WDM)
	5302  Packet Service
	5401  Packet Service
	5402  Packet Service Diagnostic Serial Port (WDM)
	5501  Packet Service Diagnostic Serial Port (WDM)
	5502  Packet Service
	5601  Packet Service Diagnostic Serial Port (WDM)
	5602  Packet Service
	7101  Composite Device
	7102  Packet Service
	a000  Packet Service
	a001  Packet Service Diagnostic Serial Port (WDM)
	c100  Packet Service
	c200  Packet Service
	c500  Packet Service Diagnostic Serial Port (WDM)
	e200  Packet Service
106d  San Chieh Manufacturing, Ltd
106e  ConectL
106f  Money Controls
	0009  CT10x Coin Transaction
	000a  CR10x Coin Recycler
1076  GCT Semiconductor, Inc.
	0031  Bluetooth Device
	0032  Bluetooth Device
107b  Gateway, Inc.
	3009  eHome Infrared Transceiver
	55b2  WBU-110 802.11b Wireless Adapter [Intersil PRISM 3]
	55f2  WGU-210 802.11g Adapter [Intersil ISL3886]
107d  Arlec Australia, Ltd
107e  Midoriya Electric Co., Ltd
107f  KidzMouse, Inc.
1082  Shin-Etsukaken Co., Ltd
1083  Canon Electronics, Inc.
	162c  P-150 Scanner
1084  Pantech Co., Ltd
108a  Chloride Power Protection
108b  Grand-tek Technology Co., Ltd
108c  Robert Bosch GmbH
108e  Lotes Co., Ltd.
1099  Surface Optics Corp.
109a  DATASOFT Systems GmbH
109f  eSOL Co., Ltd
	3163  Trigem Mobile SmartDisplay84
	3164  Trigem Mobile SmartDisplay121
10a0  Hirotech, Inc.
10a3  Mitsubishi Materials Corp.
10a9  SK Teletech Co., Ltd
	1102  Sky Love Actually IM-U460K
	1104  Sky Vega IM-A650S
	6021  SIRIUS alpha
10aa  Cables To Go
10ab  USI Co., Ltd
	1002  Bluetooth Device
	1003  BC02-EXT in DFU
	1005  Bluetooth Adptr
	1006  BC04-EXT in DFU
	10c5  Sony-Ericsson / Samsung DataCable
10ac  Honeywell, Inc.
10ae  Princeton Technology Corp.
10af  Liebert Corp.
	0000  UPS
	0001  PowerSure PSA UPS
	0002  PowerSure PST UPS
	0003  PowerSure PSP UPS
	0004  PowerSure PSI UPS
	0005  UPStation GXT 2U UPS
	0006  UPStation GXT UPS
	0007  Nfinity Power Systems UPS
	0008  PowerSure Interactive UPS
10b5  Comodo (PLX?)
	9060  Test Board
10b8  DiBcom
	0bb8  DiBcom USB DVB-T reference design (MOD300) (cold)
	0bb9  DiBcom USB DVB-T reference design (MOD300) (warm)
	0bc6  DiBcom USB2.0 DVB-T reference design (MOD3000P) (cold)
	0bc7  DiBcom USB2.0 DVB-T reference design (MOD3000P) (warm)
10bb  TM Technology, Inc.
10bc  Dinging Technology Co., Ltd
10bd  TMT Technology, Inc.
	1427  Ethernet
10bf  SmartHome
	0001  SmartHome PowerLinc
10c4  Cygnal Integrated Products, Inc.
	0002  F32x USBXpress Device
	0003  CommandIR
	8044  USB Debug Adapter
	804e  Software Bisque Paramount ME
	80a9  CP210x to UART Bridge Controller
	80ca  ATM2400 Sensor Device
	813f  tams EasyControl
	818a  Silicon Labs FM Radio Reference Design
	8460  Sangoma Wanpipe VoiceTime
	8461  Sangoma U100
	86bc  C8051F34x AudioDelay [AD-340]
	ea60  CP210x Composite Device
10c5  Sanei Electric, Inc.
	819a  FM Radio
10c6  Intec, Inc.
10cb  Eratech
10cc  GBM Connector Co., Ltd
	1101  MP3 Player
10cd  Kycon, Inc.
10ce  Silicon Labs
	ea6a  MobiData EDGE USB Modem
10cf  Velleman Components, Inc.
	2011  R-Engine MPEG2 encoder/decoder
	5500  8055 Experiment Interface Board (address=0)
	5501  8055 Experiment Interface Board (address=1)
	5502  8055 Experiment Interface Board (address=2)
	5503  8055 Experiment Interface Board (address=3)
10d1  Hottinger Baldwin Measurement
	0101  USB-Module for Spider8, CP32
	0202  CP22 - Communication Processor
	0301  CP42 - Communication Processor
10d4  Man Boon Manufactory, Ltd
10d5  Uni Class Technology Co., Ltd
	5552  KVM Human Interface Composite Device (Keyboard/Mouse ports)
	55a2  2Port KVMSwitcher
10d6  Actions Semiconductor Co., Ltd
	1000  MP3 Player
	1100  MPMan MP-Ki 128 MP3 Player/Recorder
	1101  D-Wave 2GB MP4 Player / AK1025 MP3/MP4 Player
	2200  Acer MP-120 MP3 player
	8888  ADFU Device
	ff51  ADFU Device
	ff61  MP4 Player
	ff66  Craig 2GB MP3/Video Player
10de  Authenex, Inc.
10df  In-Win Development, Inc.
	0500  iAPP CR-e500 Card reader
10e0  Post-Op Video, Inc.
10e1  CablePlus, Ltd
10e2  Nada Electronics, Ltd
10ec  Vast Technologies, Inc.
10f0  Nexio Co., Ltd
	2002  iNexio Touchscreen controller
10f1  Importek
	1a08  Internal Webcam
	1a1e  Laptop Integrated Webcam 1.3M
10f5  Turtle Beach
	0200  Audio Advantage Roadie
10fb  Pictos Technologies, Inc.
10fd  Anubis Electronics, Ltd
	7e50  FlyCam Usb 100
	804d  Typhoon Webshot II Webcam [zc0301]
	8050  FlyCAM-USB 300 XP2
	de00  WinFast WalkieTV WDM Capture Driver.
1100  VirTouch, Ltd
	0001  VTPlayer VTP-1 Braille Mouse
1101  EasyPass Industrial Co., Ltd
	0001  FSK Electronics Super GSM Reader
1108  Brightcom Technologies, Ltd
110a  Moxa Technologies Co., Ltd.
	1250  UPort 1250 2-Port RS-232/422/485
	1251  UPort 1250I 2-Port RS-232/422/485 with Isolation
	1410  UPort 1410 4-Port RS-232
	1450  UPort 1450 4-Port RS-232/422/485
	1451  UPort 1450I 4-Port RS-232/422/485 with Isolation
	1613  UPort 1610-16 16-Port RS-232
	1618  UPort 1610-8 8-Port RS-232
	1653  UPort 1650-16 16-Port RS-232/422/485
	1658  UPort 1650-8 8-Port RS-232/422/485
1110  Analog Devices Canada, Ltd (Allied Telesyn)
	5c01  Huawei MT-882 Remote NDIS Network Device
	6489  ADSL ETH/USB RTR
	9000  ADSL LAN Adapter
	9001  ADSL Loader
	900f  AT-AR215 DSL Modem
	9010  AT-AR215 DSL Modem
	9021  ADSL WAN Adapter
	9022  ADSL Loader
	9023  ADSL WAN Adapter
	9024  ADSL Loader
	9031  ADSL LAN Adapter
	9032  ADSL Loader
1111  Pandora International Ltd.
	8888  Evolution Device
1112  YM ELECTRIC CO., Ltd
1113  Medion AG
	a0a2  Active Sync device
111e  VSO Electric Co., Ltd
112a  RedRat
	0001  RedRat3 IR Transceiver
	0005  RedRat3II IR Transceiver
112e  Master Hill Electric Wire and Cable Co., Ltd
112f  Cellon International, Inc.
1130  Tenx Technology, Inc.
	0002  iBuddy
	6604  MCE IR-Receiver
	660c  Foot Pedal/Thermometer
	6806  Keychain photo frame
	f211  TP6911 Audio Headset
1131  Integrated System Solution Corp.
	1001  KY-BT100 Bluetooth Adapter
	1002  Bluetooth Device
	1003  Bluetooth Device
	1004  Bluetooth Device
1132  Toshiba Corp., Digital Media Equipment [hex]
	4331  PDR-M4/M5/M70 Digital Camera
	4332  PDR-M60 Digital Camera
	4333  PDR-M2300/PDR-M700
	4334  PDR-M65
	4335  PDR-M61
	4337  PDR-M11
	4338  PDR-M25
1136  CTS Electronincs
	3131  CTS LS515
113c  Arin Tech Co., Ltd
113d  Mapower Electronics Co., Ltd
1141  V One Multimedia, Pte., Ltd
1142  CyberScan Technologies, Inc.
1145  Japan Radio Company
	0001  AirH PHONE AH-J3001V/J3002V
1146  Shimane SANYO Electric Co., Ltd.
1147  Ever Great Electric Wire and Cable Co., Ltd
114b  Sphairon Access Systems GmbH
	0110  Turbolink UB801R WLAN Adapter
	0150  Turbolink UB801RE Wireless 802.11g 54Mbps Network Adapter [RTL8187]
114c  Tinius Olsen Testing Machine Co., Inc.
114d  Alpha Imaging Technology Corp.
114f  Wavecom
115b  Salix Technology Co., Ltd.
1162  Secugen Corp.
1163  DeLorme Publishing, Inc.
	0100  Earthmate GPS (orig)
	0200  Earthmate GPS (LT-20, LT-40)
	2020  Earthmate GPS (PN-40)
1164  YUAN High-Tech Development Co., Ltd
	0300  ELSAVISION 460D
	0601  Analog TV Tuner
	0900  TigerBird BMP837 USB2.0 WDM Encoder
	0bc7  Digital TV Tuner
	521b  MC521A mini Card ATSC Tuner
	6601  Digital TV Tuner Card [RTL2832U]
1165  Telson Electronics Co., Ltd
1166  Bantam Interactive Technologies
1167  Salient Systems Corp.
1168  BizConn International Corp.
116e  Gigastorage Corp.
116f  Silicon 10 Technology Corp.
	0005  Flash Card Reader
	c108  Flash Card Reader
	c109  Flash Card Reader
1175  Shengyih Steel Mold Co., Ltd
117d  Santa Electronic, Inc.
117e  JNC, Inc.
1182  Venture Corp., Ltd
1183  Compaq Computer Corp. [hex] (Digital Dream ??)
	0001  DigitalDream l'espion XS
	19c7  ISDN TA
	4008  56k FaxModem
	504a  PJB-100 Personal Jukebox
1184  Kyocera Elco Corp.
1188  Bloomberg L.P.
1189  Acer Communications & Multimedia
	0893  EP-1427X-2 Ethernet Adapter [Acer]
118f  You Yang Technology Co., Ltd
1190  Tripace
1191  Loyalty Founder Enterprise Co., Ltd
1196  Yankee Robotics, LLC
	0010  Trifid Camera without code
	0011  Trifid Camera
1197  Technoimagia Co., Ltd
1198  StarShine Technology Corp.
1199  Sierra Wireless, Inc.
	0019  AC595U
	0021  AC597E
	0024  MC5727 CDMA modem
	0110  Composite Device
	0112  CDMA 1xEVDO PC Card, AirCard 580
	0120  AC595U
	0218  MC5720 Wireless Modem
	6467  MP Series Network Adapter
	6468  MP Series Network Adapter
	6469  MP Series Network Adapter
	6802  MC8755 Device
	6803  MC8765 Device
	6804  MC8755 Device
	6805  MC8765 Device
	6812  MC8775 Device
	6820  AC875 Device
	6832  MC8780 Device
	6833  MC8781 Device
	683a  MC8785 Device
	6850  AirCard 880 Device
	6851  AirCard 881 Device
	6852  AirCard 880E Device
	6853  AirCard 881E Device
	6854  AirCard 885 Device
	6856  ATT "USB Connect 881"
	6870  MC8780 Device
	6871  MC8781 Device
	6893  MC8777 Device
	68a3  MC8700 Modem
	9000  Gobi 2000 Wireless Modem (QDL mode)
	9001  Gobi 2000 Wireless Modem
	9002  Gobi 2000 Wireless Modem
	9003  Gobi 2000 Wireless Modem
	9004  Gobi 2000 Wireless Modem
	9005  Gobi 2000 Wireless Modem
	9006  Gobi 2000 Wireless Modem
	9007  Gobi 2000 Wireless Modem
	9008  Gobi 2000 Wireless Modem
	9009  Gobi 2000 Wireless Modem
	900a  Gobi 2000 Wireless Modem
119a  ZHAN QI Technology Co., Ltd
119b  ruwido austria GmbH
	0400  Infrared Keyboard V2.01
11a0  Chipcon AS
	eb11  CC2400EB 2.0 ZigBee Sniffer
11a3  Technovas Co., Ltd
	8031  MP3 Player
	8032  MP3 Player
11aa  GlobalMedia Group, LLC
	1518  iREZ K2
11ab  Exito Electronics Co., Ltd
11b0  ATECH FLASH TECHNOLOGY
11c5  Inmax
	0521  IMT-0521 Smartcard Reader
11db  Topfield Co., Ltd.
	1000  PVR
	1100  PVR
11e6  K.I. Technology Co. Ltd.
11f5  Siemens AG
	0001  SX1
	0003  Mobile phone USB cable
	0004  X75
	0005  SXG75/EF81
	0008  UMTS/HSDPA Data Card
11f6  Prolific
	2001  Willcom WSIM
11f7  Alcatel (?)
	02df  TD10 Mobile phone USB cable
1203  TSC Auto ID Technology Co., Ltd
	0140  TTP-245C
1209  InterBiometrics
	1001  USB Hub
	1002  USB Relais
	1003  IBSecureCam-P
	1004  IBSecureCam-O
	1005  IBSecureCam-N
120e  Hudson Soft Co., Ltd
120f  Magellan
	524e  RoadMate 1475T
	5260  Triton Handheld GPS Receiver (300/400/500/1500/2000)
1210  DigiTech
	001b  RP155 Guitar Multi-Effects Processor
	001c  RP255 Guitar Multi-Effects Processor
121e  Jungsoft Co., Ltd
	3403  Muzio JM250 Audio Player
1223  SKYCABLE ENTERPRISE. CO., LTD.
1230  Chipidea-Microelectronica, S.A.
1233  Denver Electronics
	5677  FUSB200 mp3 player
1234  Unknown
	ed02  Emotiv EPOC Developer Headset Wireless Dongle
1235  Novation EMS
	0001  ReMOTE Audio/XStation
	0002  Speedio
	0003  ReMOTE ZeRO SL
	4661  ReMOTE25
1241  Belkin
	1111  Mouse
	1122  Typhoon Stream Optical Mouse USB+PS/2
	1155  PS2/USB Browser Combo Mouse
	1166  MI-2150 Trust Mouse
	1177  F8E842-DL Mouse
	1503  Keyboard
	1603  Keyboard
124a  AirVast
	168b  PRISM3 WLAN Adapter
	4017  PC-Chips 802.11b Adapter
124b  Nyko (Honey Bee)
	4d01  Airflo EX Joystick
124c  MXI - Memory Experts International, Inc.
	3200  Stealth MXP 1GB
125c  Apogee Inc.
	0010  Alta series CCD
125f  A-DATA Technology Co., Ltd.
	312a  Superior S102
	312b  Superior S102 Pro
	a91a  Portable HDD CH91
	c81a  Flash drive
	c93a  4GB Pen Drive
1260  Standard Microsystems Corp.
	ee22  SMC2862W-G v3 EZ Connect 802.11g Adapter [Intersil ISL3887]
1264  Covidien Energy-based Devices
1266  Pirelli Broadband Solutions
	6302  Fastweb DRG A226M ADSL Router
1267  Logic3 / SpectraVideo plc
	0103  G-720 Keyboard
	0201  A4Tech SWOP-3 Mouse
	0210  LG Optical Mouse 3D-310
	a001  JP260 PC Game Pad
	c002  Wireless Optical Mouse
126c  Aristocrat Technologies
126d  Bel Stewart
126e  Strobe Data, Inc.
126f  TwinMOS
	1325  Mobile Disk
	2168  Mobile Disk III
	a006  G240 802.11bg
1274  Ensoniq
1275  Xaxero Marine Software Engineering, Ltd.
	0002  WeatherFax 2000 Demodulator
	0080  SkyEye Weather Satellite Receiver
1278  Starlight Xpress
	0105  SXV-M5
	0107  SXV-M7
	0109  SXV-M9
	0110  SXVF-H16
	0115  SXVF-H5
	0119  SXV-H9
	0135  SXVF-H35
	0136  SXVF-H36
	0200  SXV interface for paraller MX cameras
	0305  SXV-M5C
	0307  SXV-M7C
	0319  SXV-H9C
	0325  SXV-M25C
	0326  SXVR-M26C
	0507  Lodestar autoguider
	0517  CoStar
1283  zebris Medical GmbH
	0100  USB-RS232 Adaptor
	0110  CMS20
	0111  CMS 10
	0112  CMS 05
	0114  ARCUS digma PC-Interface
	0115  SAM Axioquick recorder
	0116  SAM Axioquick recorder
	0120  emed-X
	0121  emed-AT
	0130  PDM
	0150  CMS10GI (Golf)
1286  Marvell Semiconductor, Inc.
	1fab  88W8338 [Libertas] 802.11g
	2001  88W8388 802.11a/b/g WLAN
	2006  88W8360 802.11n WLAN
	8001  BLOB boot loader firmware
1291  Qualcomm Flarion Technologies, Inc. / Leadtek Research, Inc.
	0010  FDM 2xxx Flash-OFDM modem
	0011  LR7F06/LR7F14 Flash-OFDM modem
1292  Innomedia
	0258  Creative Labs VoIP Blaster
1293  Belkin Components [hex]
	0002  F5U002 Parallel Port [uss720]
	2101  104-key keyboard
1294  RISO KAGAKU CORP.
129b  CyberTAN Technology
	160b  Siemens S30853-S1031-R351 802.11g Wireless Adapter [Atheros AR5523]
	160c  Siemens S30853-S1038-R351 802.11g Wireless Adapter [Atheros AR5523]
	1666  TG54USB 802.11bg
	1667  802.11bg
	1828  Gigaset USB Adapter 300
12a7  Trendchip Technologies Corp.
12ab  Honey Bee Electronic International Ltd.
12b8  Zhejiang Xinya Electronic Technology Co., Ltd.
12ba  Licensed by Sony Computer Entertainment America
	0100  RedOctane Guitar for PlayStation(R)3
	0120  RedOctane Drum Kit for PlayStation(R)3
	0200  Harmonix Guitar for PlayStation(R)3
	0210  Harmonix Drum Kit for PlayStation(R)3
12c4  Autocue Group Ltd
	0006  Teleprompter Two-button Hand Control (v1)
	0008  Teleprompter Foot Control (v1)
12d1  Huawei Technologies Co., Ltd.
	1001  E169/E620/E800 HSDPA Modem
	1003  E220 HSDPA Modem / E230/E270/E870 HSDPA/HSUPA Modem
	1009  U120
	1010  ETS2252+ CDMA Fixed Wireless Terminal
	1035  U8120
	1037  Ideos
	1038  Ideos (debug mode)
	1039  Ideos (tethering mode)
	1406  E1750
	140b  EC1260 Wireless Data Modem HSD USB Card
	1446  E1552/E1800/E173 (HSPA modem)
	14f1  Gobi 3000 HSPA+ Modem
	1501  Pulse
	1505  E398 LTE/UMTS/GSM Modem/Networkcard
	1506  E398 LTE/UMTS/GSM Modem/Networkcard
	150a  E398 LTE/UMTS/GSM Modem/Networkcard
	1520  K3765 HSPA
	1521  K4505 HSPA+
	1805  AT&T Go Phone U2800A phone
	1c05  E173s 3G broadband stick (modem on)
	1c0b  E173s 3G broadband stick (modem off)
	1d50  ET302s TD-SCDMA/TD-HSDPA Mobile Broadband
	380b  WiMAX USB modem(s)
12d2  LINE TECH INDUSTRIAL CO., LTD.
12d6  EMS Dr. Thomas Wuensche
	0444  CPC-USB/ARM7
	0888  CPC-USB/M16C
12d7  BETTER WIRE FACTORY CO., LTD.
12e6  Waldorf Music GmbH
	0013  Blofeld
12ef  Tapwave, Inc.
	0100  Tapwave Handheld [Tapwave Zodiac]
12f5  Dynamic System Electronics Corp.
12f7  Memorex Products, Inc.
	1a00  TD Classic 003B
	1e23  TravelDrive 2007 Flash Drive
12fd  AIN Comm. Technology Co., Ltd
	1001  AWU2000b 802.11b Stick
12ff  Fascinating Electronics, Inc.
	0101  Advanced RC Servo Controller
1307  Transcend Information, Inc.
	0163  256MB/512MB/1GB Flash Drive
	0165  2GB/4GB Flash Drive
	0310  SD/MicroSD CardReader [hama]
	0330  63-in-1 Multi-Card Reader/Writer
	0361  CR-75: 51-in-1 Card Reader/Writer [Sakar]
	1169  TS2GJF210 JetFlash 210 2GB
	1171  Fingerprint Reader
1308  Shuttle, Inc.
	0003  VFD Module
	c001  eHome Infrared Transceiver
1310  Roper
	0001  Class 1 Bluetooth Dongle
1312  ICS Electronics
131d  Natural Point
	0155  TrackIR 3 Pro Head Tracker
	0156  TrackIR 4 Pro Head Tracker
132a  Envara Inc.
	1502  WiND 802.11abg / 802.11bg WLAN
132b  Konica Minolta
	0000  Dimage A2 Camera
	0001  Minolta DiMAGE A2 (ptp)
	0003  Dimage Xg Camera
	0006  Dimage Z2 Camera
	0007  Minolta DiMAGE Z2 (PictBridge mode)
	0008  Dimage X21 Camera
	000a  Dimage Scan Dual IV AF-3200 (2891)
	000b  Dimage Z10 Camera
	000d  Dimage X50 Camera [storage?]
	000f  Dimage X50 Camera [p2p?]
	0010  Dimage G600 Camera
	0012  Dimage Scan Elite 5400 II (2892)
	0013  Dimage X31 Camera
	0015  Dimage G530 Camera
	0017  Dimage Z3 Camera
	0018  Minolta DiMAGE Z3 (PictBridge mode)
	0019  Dimage A200 Camera
	0021  Dimage Z5 Camera
	0022  Minolta DiMAGE Z5 (PictBridge mode)
	002c  Dynax 5D camera
	2001  Magicolor 2400w
	2004  Magicolor 5430DL
	2005  Magicolor 2430 DL
	2029  Magicolor 5440DL
	2030  PagePro 1350E(N)
	2033  PagePro 1400W
	2043  Magicolor 2530DL
	2045  Magicolor 2500W
	2049  Magicolor 2490MF
1342  Mobility
	0200  EasiDock 200 Hub
	0201  EasiDock 200 Keyboard and Mouse Port
	0202  EasiDock 200 Serial Port
	0203  EasiDock 200 Printer Port
	0204  Ethernet
	0304  EasiDock Ethernet
1345  Sino Lite Technology Corp.
	001c  Xbox Controller Hub
1347  Moravian Instruments
	0400  G2CCD USB 1.1 obsolete
	0401  G2CCD-S with Sony ICX285 CCD
	0402  G2CCD2
	0403  G2/G3CCD-I KAI CCD
	0404  G2/G3CCD-F KAF CCD
	0410  G1-0400 CCD
	0411  G1-0800 CCD
	0412  G1-0300 CCD
	0413  G1-2000 CCD
	0414  G1-1400 CCD
1348  Katsuragawa Electric Co., Ltd.
134c  PanJit International Inc.
	0001  Touch Panel Controller
	0002  Touch Panel Controller
	0003  Touch Panel Controller
	0004  Touch Panel Controller
134e  Digby's Bitpile, Inc. DBA D Bit
1357  P&E Microcomputer Systems
	0503  USB-ML-12 HCS08/HCS12 Multilink
	0504  DEMOJM
1366  SEGGER
	0101  J-Link ARM
136b  STEC
1370  Swissbit
	0323  Swissmemory cirrusWHITE
	6828  Victorinox Flash Drive
1371  CNet Technology Inc.
	0001  CNUSB-611AR Wireless Adapter-G [AT76C503]
	0002  CNUSB-611AR Wireless Adapter-G [AT76C503] (FiberLine WL-240U)
	0013  CNUSB-611 Wireless Adapter [AT76C505]
	0014  CNUSB-611 Wireless Adapter [AT76C505] (FiberLine WL-240U)
	5743  CNUSB-611 (D) Wireless Adapter [AT76C503]
	9022  CWD-854 [RT2573]
	9032  CWD-854 rev F
	9401  CWD-854 Wireless 802.11g 54Mbps Network Adapter [RTL8187]
1376  Vimtron Electronics Co., Ltd.
137b  SCAPS GmbH
	0002  SCAPS USC-2 Scanner Controller
1385  Netgear, Inc
	4250  WG111T
	4251  WG111T (no firmware)
	5f00  WPN111 RangeMax(TM) Wireless USB 2.0 Adapter
	5f01  WPN111 (no firmware)
	6e00  WPNT121 802.11g 240Mbps Wireless Adapter [Airgo AGN300]
138a  Validity Sensors, Inc.
	0001  VFS101 Fingerprint Reader
	0005  VFS301 Fingerprint Reader
	0007  VFS451 Fingerprint Reader
	0008  VFS300 Fingerprint Reader
	0011  VFS5011 Fingerprint Reader
	003c  VFS471 Fingerprint Reader
138e  Jungo LTD
	9000  Raisonance S.A. STM32 ARM evaluation board
1390  TOMTOM B.V.
	0001  GO 520 T/ONE XL (v9)
1391  IdealTEK, Inc.
	1000  URTC-1000
1395  Sennheiser Communications
	3556  USB Headset
1397  BEHRINGER International GmbH
	00bc  BCF2000
1398  Q-tec
	2103  USB 2.0 Storage Device
13ad  Baltech
	9999  Card reader
13b0  PerkinElmer Optoelectronics
	000a  Alesis Photon X25 MIDI Controller
13b1  Linksys
	000a  WUSB54G v2 802.11g Adapter [Intersil ISL3887]
	000b  WUSB11 v4.0 802.11b Adapter [ALi M4301]
	000c  WUSB54AG 802.11a/g Adapter [Intersil ISL3887]
	000d  WUSB54G v4 802.11g Adapter [Ralink RT2500USB]
	000e  WUSB54GS v1 802.11g Adapter [Broadcom 4320 USB]
	0011  WUSB54GP v4.0 802.11g Adapter [Ralink RT2500USB]
	0014  WUSB54GS v2 802.11g Adapter [Broadcom 4320 USB]
	0018  USB200M 10/100 Ethernet Adapter
	001a  HU200TS Wireless Adapter
	001e  WUSBF54G 802.11bg
	0020  WUSB54GC v1 802.11g Adapter [Ralink RT73]
	0022  WUSB54GX4 802.11g 240Mbps Wireless Adapter [Airgo AGN300]
	0023  WUSB54GR
	0024  WUSBF54G v1.1 802.11bg
	0026  WUSB54GSC v1 802.11g Adapter [Broadcom 4320 USB]
	0028  WUSB200 802.11g Adapter [Ralink RT2671]
	002f  AE1000 v1 802.11n [Ralink RT3572]
	0031  AM10 v1 802.11n [Ralink RT3072]
	0039  AE1200 802.11bgn Wireless Adapter [Broadcom BCM43235]
	003a  AE2500 802.11abgn Wireless Adapter [Broadcom BCM43236]
	13b1  WUSB200: Wireless-G Business Network Adapter with Rangebooster
13b2  Alesis
	0030  Multimix 8
13b3  Nippon Dics Co., Ltd.
13ba  Unknown
	0017  PS/2 Keyboard+Mouse Adapter
13be  Ricoh Printing Systems, Ltd.
13ca  JyeTai Precision Industrial Co., Ltd.
13cf  Wisair Ltd.
	1200  Olidata Wireless Multimedia Adapter
13d0  Techsan Electronics Co., Ltd.
	2282  TechniSat DVB-PC TV Star 2
13d1  A-Max Technology Macao Commercial Offshore Co. Ltd.
	7019  MD 82288
	abe6  Wireless 802.11g 54Mbps Network Adapter [RTL8187]
13d2  Shark Multimedia
	0400  Pocket Ethernet [klsi]
13d3  IMC Networks
	3201  VisionDTV USB-Ter/HAMA USB DVB-T device cold
	3202  VisionDTV USB-Ter/HAMA USB DVB-T device warm
	3203  DTV-DVB UDST7020BDA DVB-S Box(DVBS for MCE2005)
	3204  DTV-DVB UDST7020BDA DVB-S Box(DVBS for MCE2005)
	3205  DNTV Live! Tiny USB2 BDA (No Remote)
	3206  DNTV Live! Tiny USB2 BDA (No Remote)
	3207  DTV-DVB UDST7020BDA DVB-S Box(DVBS for MCE2005)
	3208  DTV-DVB UDST7020BDA DVB-S Box(DVBS for MCE2005)
	3209  DTV-DVB UDST7022BDA DVB-S Box(Without HID)
	3211  DTV-DVB Hybrid Analog/Capture / Pinnacle PCTV 310e
	3212  DTV-DVB UDTT704C - DVBT/NTSC/PAL Driver(PCM4)
	3213  DTV-DVB UDTT704D - DVBT/NTSC/PAL Driver (PCM4)
	3214  DTV-DVB UDTT704F -(MiniCard) DVBT/NTSC/PAL Driver(Without HID)
	3215  DTV-DVB UDAT7240 - ATSC/NTSC/PAL Driver(PCM4)
	3216  DTV-DVB UDTT 7047-USB 2.0 DVB-T Driver
	3217  Digital-TV Receiver.
	3219  DTV-DVB UDTT7049 - DVB-T Driver(Without HID)
	3220  DTV-DVB UDTT 7047M-USB 2.0 DVB-T Driver
	3223  DNTV Live! Tiny USB2 BDA (No Remote)
	3224  DNTV Live! Tiny USB2 BDA (No Remote)
	3226  DigitalNow TinyTwin DVB-T Receiver
	3234  DVB-T FTA Half Minicard [RTL2832U]
	3236  DTV-DVB UDTT 7047A-USB 2.0 DVB-T Driver
	3237  DTV-DVB UDTT 704J - dual DVB-T Driver
	3239  DTV-DVB UDTT704D - DVBT/NTSC/PAL Driver(Without HID)
	3240  DTV-DVB UDXTTM6010 - A/D Driver(Without HID)
	3241  DTV-DVB UDXTTM6010 - A/D Driver(Without HID)
	3242  DTV-DVB UDAT7240LP - ATSC/NTSC/PAL Driver(Without HID)
	3243  DTV-DVB UDXTTM6010 - A/D Driver(Without HID)
	3244  DTV-DVB UDTT 7047Z-USB 2.0 DVB-T Driver
	3247  802.11 n/g/b Wireless LAN Adapter
	3249  Internal Bluetooth
	3262  802.11 n/g/b Wireless LAN USB Adapter
	3273  802.11 n/g/b Wireless LAN USB Mini-Card
	3274  DVB-T Dongle [RTL2832U]
	3282  DVB-T + GPS Minicard [RTL2832U]
	3284  Wireless LAN USB Mini-Card
	3306  Mediao 802.11n WLAN [Realtek RTL8191SU]
	3315  Bluetooth module
	5070  Webcam
	5111  Integrated Webcam
	5115  Integrated Webcam
	5116  Integrated Webcam
	5702  UVC VGA Webcam
	7020  DTV-DVB UDST7020BDA DVB-S Box(DVBS for MCE2005)
	7022  DTV-DVB UDST7022BDA DVB-S Box(Without HID)
13dc  ALEREON, INC.
13dd  i.Tech Dynamic Limited
13e1  Kaibo Wire & Cable (Shenzhen) Co., Ltd.
13e5  Rane
	0001  SL-1
	0003  TTM 57SL
13e6  TechnoScope Co., Ltd.
13ea  Hengstler
	0001  C-56 Thermal Printer
13ec  Zydacron
	0006  HID Remote Control
13ee  MosArt
	0003  Optical Mouse
13fd  Initio Corporation
	0841  Samsung SE-T084M DVD-RW
	1340  Hi-Speed USB to SATA Bridge
	160f  RocketFish SATA Bridge [INIC-1611]
	1640  ASUS SDRW-08D1S-U DVD-RW
	1840  Shintaro SH23SDOCK Hard Drive Docker [INIC-1608L]
13fe  Kingston Technology Company Inc.
	1a00  512MB/1GB Flash Drive
	1a23  512MB Flash Drive
	1d00  DataTraveler 2.0 1GB/4GB Flash Drive / Patriot Xporter 4GB Flash Drive
	1e00  Flash Drive 2 GB [ICIDU 2 GB]
	1f00  DataTraveler 2.0 4GB Flash Drive / Patriot Xporter 32GB (PEF32GUSB) Flash Drive
	2240  microSD card reader
	3100  2/4 GB stick
	3800  Rage XT Flash Drive
1400  Axxion Group Corp.
1402  Bowe Bell & Howell
1403  Sitronix
	0001  Digital Photo Frame
140e  Telechips, Inc.
	b011  TCC780X-based player (USB Boot mode)
	b021  TCC77X-based players (USB Boot mode)
1410  Novatel Wireless
	1110  Merlin S620
	1120  Merlin EX720
	1130  Merlin S720
	1400  Merlin U730/U740 (Vodafone)
	1410  Merlin U740 (non-Vodafone)
	1430  Merlin XU870
	1450  Merlin X950D
	2110  Ovation U720/MCD3000
	2410  Expedite EU740
	2420  Expedite EU850D/EU860D/EU870D
	4100  U727
	4400  Ovation MC930D/MC950D
	a001  Gobi Wireless Modem
	a008  Gobi Wireless Modem (QDL mode)
1415  Nam Tai E&E Products Ltd. or OmniVision Technologies, Inc.
	0000  Sony SingStar USBMIC
	0020  Sony Wireless SingStar
	2000  Sony Playstation Eye
1419  ABILITY ENTERPRISE CO., LTD.
1429  Vega Technologies Industrial (Austria) Co.
142a  Thales E-Transactions
	0003  Artema Hybrid
	0005  Artema Modular
	0043  medCompact
142b  Arbiter Systems, Inc.
	03a5  933A Portable Power Sentinel
1430  RedOctane
	4734  Guitar Hero4 hub
	474b  Guitar Hero MIDI interface
1431  Pertech Resources, Inc.
1435  Wistron NeWeb
	0427  UR054g 802.11g Wireless Adapter [Intersil ISL3887]
	0711  UR055G 802.11bg
	0804  AR9170+AR9104 802.11abgn Wireless Adapter
	0826  AR5523
	0827  AR5523 (no firmware)
	0828  AR5523
	0829  AR5523 (no firmware)
1436  Denali Software, Inc.
143c  Altek Corporation
1443  Digilent
	0007  CoolRunner-II CPLD Starter Kit
1453  Radio Shack
	4026  26-183 Serial Cable
1456  Extending Wire & Cable Co., Ltd.
1457  First International Computer, Inc.
	5117  OpenMoko Neo1973 kernel usbnet (g_ether, CDC Ethernet) mode
	5118  OpenMoko Neo1973 Debug board (V2+)
	5119  OpenMoko Neo1973 u-boot cdc_acm serial port
	5120  OpenMoko Neo1973 u-boot usbtty generic serial
	5121  OpenMoko Neo1973 kernel mass storage (g_storage) mode
	5122  OpenMoko Neo1973 / Neo Freerunner kernel cdc_ether USB network
	5123  OpenMoko Neo1973 internal USB CSR4 module
	5124  OpenMoko Neo1973 Bluetooth Device ID service
145f  Trust
	0106  Trust K56 V92 USB Modem
	013d  PC Camera (SN9C201 + OV7660)
	013f  Megapixel Auto Focus Webcam
	0142  WB-6250X Webcam
	015a  WB-8300X 2MP Webcam
	0161  15901 802.11bg Wireless Adapter [Realtek RTL8187L]
	0167  Widescreen 3MP Webcam
1460  Tatung Co.
	9150  eHome Infrared Transceiver
1461  Staccato Communications
1462  Micro Star International
	5512  MegaStick-1 Flash Stick
	8807  DIGIVOX mini III [af9015]
1472  Huawei-3Com
	0007  Aolynk WUB300g [ZyDAS ZD1211]
	0009  Aolynk WUB320g
147a  Formosa Industrial Computing, Inc.
	e015  eHome Infrared Receiver
	e016  eHome Infrared Receiver
	e017  eHome Infrared Receiver
	e018  eHome Infrared Receiver
	e02c  Infrared Receiver
	e03a  eHome Infrared Receiver
	e03c  eHome Infrared Receiver
	e03e  Infrared Receiver [IR605A/Q]
147e  Upek
	1000  Biometric Touchchip/Touchstrip Fingerprint Sensor
	1001  TCS5B Fingerprint sensor
	2016  Biometric Touchchip/Touchstrip Fingerprint Sensor
	3000  TCS1C EIM/Cypress Fingerprint sensor
	3001  TCS1C EIM/STM32 Fingerprint sensor
147f  Hama GmbH & Co., KG
1482  Vaillant
	1005  VRD PC-Interface
1484  Elsa AG [hex]
	1746  Ecomo 19H99 Monitor
	7616  Elsa Hub
1485  Silicom
	0001  U2E
	0002  Psion Gold Port Ethernet
1487  DSP Group, Ltd.
148e  EVATRONIX SA
148f  Ralink Technology, Corp.
	1706  RT2500USB Wireless Adapter
	2070  RT2070 Wireless Adapter
	2570  RT2570 Wireless Adapter
	2573  RT2501/RT2573 Wireless Adapter
	2671  RT2601/RT2671 Wireless Adapter
	2770  RT2770 Wireless Adapter
	2870  RT2870 Wireless Adapter
	3070  RT2870/RT3070 Wireless Adapter
	3071  RT3071 Wireless Adapter
	3072  RT3072 Wireless Adapter
	3370  RT3370 Wireless Adapter
	3572  RT3572 Wireless Adapter
	3573  TEW-684UB
	5370  RT5370 Wireless Adapter
	9020  RT2500USB Wireless Adapter
	9021  RT2501USB Wireless Adapter
1491  Futronic Technology Co. Ltd.
	0020  FS81 Fingerprint Scanner Module
1497  Panstrong Company Ltd.
1498  Microtek International Inc.
	a090  DVB-T Tuner
149a  Imagination Technologies
	2107  DBX1 DSP core
14aa  WideView Technology Inc.
	0001  Avermedia AverTV DVBT USB1.1 (cold)
	0002  Avermedia AverTV DVBT USB1.1 (warm)
	0201  AVermedia/Yakumo/Hama/Typhoon DVB-T USB2.0 (cold)
	0221  WT-220U DVB-T dongle
	022b  WT-220U DVB-T dongle
	0301  AVermedia/Yakumo/Hama/Typhoon DVB-T USB2.0 (warm)
14ad  CTK Corporation
14ae  Printronix Inc.
14af  ATP Electronics Inc.
14b0  StarTech.com Ltd.
14b2  Ralink Technology, Corp.
	3a93  Topcom 802.11bg Wireless Adapter [Atheros AR5523]
	3a95  Toshiba WUS-G06G-JT 802.11bg Wireless Adapter [Atheros AR5523]
	3a98  Airlink101 AWLL4130 802.11bg Wireless Adapter [Atheros AR5523]
	3c02  Conceptronic C54RU v2 802.11bg Wireless Adapter [Ralink RT2571]
	3c05  rt2570 802.11g WLAN
	3c06  Conceptronic C300RU v1 802.11bgn Wireless Adapter [Ralink RT2870]
	3c07  802.11n adapter
	3c09  802.11n adapter
	3c22  Conceptronic C54RU v3 802.11bg Wireless Adapter [Ralink RT2571W]
	3c23  Airlink101 AWLL6080 802.11bgn Wireless Adapter [Ralink RT2870]
	3c24  NEC NP01LM 802.11abg Wireless Adapter [Ralink RT2571W]
	3c25  DrayTek Vigor N61 802.11bgn Wireless Adapter [Ralink RT2870]
	3c27  Airlink101 AWLL6070 802.11bgn Wireless Adapter [Ralink RT2770]
	3c28  Conceptronic C300RU v2 802.11bgn Wireless Adapter [Ralink RT2770]
	3c2c  Keebox W150NU 802.11bgn Wireless Adapter [Ralink RT3070]
14c0  Rockwell Automation, Inc.
14c2  Gemlight Computer, Ltd
	0250  Storage Adapter V2
	0350  Storage Adapter V2
14c8  Zytronic
14cd  Super Top
	121c  microSD card reader
	123a  SD/MMC/RS-MMC Card Reader
	127b  SDXC Reader
	6116  M6116 SATA Bridge
	6600  USB 2.0 IDE DEVICE
	6700  Card Reader
	6900  Card Reader
	8123  SD MMC Reader
	8125  SD MMC Reader
14d8  JAMER INDUSTRIES CO., LTD.
14dd  Raritan Computer, Inc.
	1007  D2CIM-VUSB KVM connector
14e1  Dialogue Technology Corp.
	5000  PenMount 5000 Touch Controller
14e5  SAIN Information & Communications Co., Ltd.
14ea  Planex Communications
	ab10  GW-US54GZ
	ab11  GU-1000T
	ab13  GW-US54Mini 802.11bg
14ed  Shure Inc.
14f7  TechniSat Digital GmbH
	0001  SkyStar 2 HD CI
	0002  SkyStar 2 HD CI
	0003  CableStar Combo HD CI
	0004  AirStar TeleStick 2
	0500  DVB-PC TV Star HD
1500  Ellisys
1501  Pine-Tum Enterprise Co., Ltd.
1509  First International Computer, Inc.
	9242  eHome Infrared Transceiver
1513  medMobile
	0444  medMobile
1514  Actel
	2003  FlashPro3 Programmer
	2004  FlashPro3 Programmer
	2005  FlashPro3 Programmer
1516  CompUSA
	1603  Flash Drive
	8628  Pen Drive
1518  Cheshire Engineering Corp.
	0001  HDReye High Dynamic Range Camera
	0002  HDReye (before firmware loads)
1520  Bitwire Corp.
1524  ENE Technology Inc
	6680  UTS 6680
1527  Silicon Portals
	0200  YAP Phone (no firmware)
	0201  YAP Phone
1529  UBIQUAM Co., Ltd.
	3100  CDMA 1xRTT USB Modem (U-100/105/200/300/520)
152d  JMicron Technology Corp. / JMicron USA Technology Corp.
	2329  JM20329 SATA Bridge
	2335  ATA/ATAPI Bridge
	2336  Hard Disk Drive
	2337  ATA/ATAPI Bridge
	2338  JM20337 Hi-Speed USB to SATA & PATA Combo Bridge
	2339  JM20339 SATA Bridge
	2352  ATA/ATAPI Bridge
	2509  JMS539 SuperSpeed SATA II 3.0G Bridge
152e  LG (HLDS)
	2507  PL-2507 IDE Controller
	e001  GSA-5120D DVD-RW
1532  Razer USA, Ltd
	0001  RZ01-020300 Optical Mouse [Diamondback]
	0003  Krait Mouse
	0007  DeathAdder Mouse
	0016  DeathAdder Mouse
	0017  Imperator Mouse
	001c  RZ01-0036 Optical Gaming Mouse [Abyssus]
	0101  Copperhead Mouse
	0102  Tarantula Keyboard
	0109  Lycosa Keyboard
1546  U-Blox AG
154a  Celectronic GmbH
	8180  CARD STAR/medic2
154b  PNY
	0010  USB 2.0 Flash Drive
	6545  FD Device
154d  ConnectCounty Holdings Berhad
154e  D&M Holdings, Inc. (Denon/Marantz)
	3000  Marantz RC9001 Remote Control
1554  Prolink Microsystems Corp.
1557  OQO
	0002  model 01 WiFi interface
	0003  model 01 Bluetooth interface
	0a80  Gobi Wireless Modem (QDL mode)
	7720  model 01+ Ethernet
	8150  model 01 Ethernet interface
1568  Sunf Pu Technology Co., Ltd
156f  Quantum Corporation
1570  ALLTOP TECHNOLOGY CO., LTD.
157b  Ketron SRL
157e  TRENDnet
	3006  TEW-444UB EU [TRENDnet]
	3007  TEW-444UB EU (no firmware)
	300a  TEW-429UB 802.11bg
	300b  TEW-429UB 802.11bg
	300d  TEW-429UB C1 802.11bg
	3204  Allnet ALL0298 v2 802.11bg
	3205  Allnet ALL0283 [AR5523]
	3206  Allnet ALL0283 [AR5523](no firmware)
1582  Fiberline
	6003  WL-430U 802.11bg
1587  SMA Technologie AG
158d  Oakley Inc.
158e  JDS Uniphase Corporation (JDSU)
	0820  SmartPocket Class Device
1598  Kunshan Guoji Electronics Co., Ltd.
15a2  Freescale Semiconductor, Inc.
	0042  OSBDM - Debug Port
	004f  i.MX28 SystemOnChip in RecoveryMode
	0052  i.MX50 SystemOnChip in RecoveryMode
	0054  i.MX6Q SystemOnChip in RecoveryMode
15a4  Afatech Technologies, Inc.
	1000  AF9015/AF9035 DVB-T stick
	1001  AF9015/AF9035 DVB-T stick
	1336  SDHC/MicroSD/MMC/MS/M2/CF/XD Flash Card Reader
	9015  AF9015 DVB-T USB2.0 stick
	9016  AF9015 DVB-T USB2.0 stick
15a8  Teams Power Limited
15a9  Gemtek
	0004  WUBR-177G [Ralink RT2571W]
	0006  Wireless 11n USB Adapter
	0010  802.11n USB Wireless Card
	0012  WUBR-208N 802.11abgn Wireless Adapter [Ralink RT2870]
15aa  Gearway Electronics (Dong Guan) Co., Ltd.
15ad  VMware Inc.
15ba  Olimex Ltd.
	0003  OpenOCD JTAG
	0004  OpenOCD JTAG TINY
	002a  ARM-USB-TINY-H JTAG interface
15c0  XL Imaging
	0001  2M pixel Microscope Camera
	0002  3M pixel Microscope Camera
	0003  1.3M pixel Microscope Camera (mono)
	0004  1.3M pixel Microscope Camera (colour)
	0005  3M pixel Microscope Camera (Mk 2)
	0006  2M pixel Microscope Camera (with capture button)
	0007  3M pixel Microscope Camera (with capture button)
	0008  1.3M pixel Microscope Camera (colour, with capture button)
	0009  1.3M pixel Microscope Camera (colour, with capture button)
	000a  2M pixel Microscope Camera (Mk 2)
	0010  1.3M pixel "Tinycam"
	0101  3M pixel Microscope Camera
15c2  SoundGraph Inc.
	0036  LC16M VFD Display/IR Receiver
	0038  GD01 MX LCD Display/IR Receiver
	ffda  iMON PAD Remote Controller
	ffdc  iMON PAD Remote Controller
15c5  Advance Multimedia Internet Technology Inc. (AMIT)
	0008  WL532U 802.11g Adapter
15c6  Laboratoires MXM
	1000  DigistimSP (cold)
	1001  DigistimSP (warm)
	1002  DigimapSP USB (cold)
	1003  DigimapSP USB (warm)
15c8  KTF Technologies
	3201  EVER EV-W100/EV-W250
15c9  D-Box Technologies
15ca  Textech International Ltd.
	00c3  Mini Optical Mouse
	0101  MIDI Interface cable
	1806  MIDI Interface cable
15d5  Coulomb Electronics Ltd.
15d9  Trust International B.V.
	0a33  Optical Mouse
	0a37  Mouse
	0a41  MI-2540D [Optical mouse]
	0a4c  USB+PS/2 Optical Mouse
	0a4d  Optical Mouse
15dc  Hynix Semiconductor Inc.
15e0  Seong Ji Industrial Co., Ltd.
15e1  RSA
	2007  RSA SecurID (R) Authenticator
15e4  Numark
	0024  Mixtrack
15e8  SohoWare
	9100  NUB100 Ethernet [pegasus]
	9110  10/100 USB Ethernet
15e9  Pacific Digital Corp.
	04ce  MemoryFrame MF-570
	1968  MemoryFrame MF-570
	1969  Digital Frame
15ec  Belcarra Technologies Corp.
15f4  HanfTek
	0001  HanfTek UMT-010 USB2.0 DVB-T (cold)
	0025  HanfTek UMT-010 USB2.0 DVB-T (warm)
1604  Tascam
	8000  US-428 Audio/Midi Controller (without fw)
	8001  US-428 Audio/Midi Controller
	8004  US-224 Audio/Midi Controller (without fw)
	8005  US-224 Audio/Midi Controller
	8006  US-122 Audio/Midi Interface (without fw)
	8007  US-122 Audio/Midi Interface
1606  Umax
	0002  Astra 1236U Scanner
	0010  Astra 1220U
	0030  Astra 1600U/2000U
	0050  Scanner
	0060  Astra 3400/3450
	0070  Astra 4400/4450
	0130  Astra 2100U
	0160  Astra 5400U
	0170  Uniscan D50
	0230  Astra 2200/2200SU
	0350  Astra 4800/4850 Scanner
	1030  Astra 4000U
	1220  Genesys Logic Scanner Controller NT5.0
	2010  AstraCam Digital Camera
	2020  AstraCam 1000
	2030  AstraCam 1800 Digital Camera
1608  Inside Out Networks [hex]
	0001  EdgePort/4 Serial Port
	0002  Edgeport/8
	0003  Rapidport/4
	0004  Edgeport/4
	0005  Edgeport/2
	0006  Edgeport/4i
	0007  Edgeport/2i
	0008  Edgeport/8
	000c  Edgeport/421
	000d  Edgeport/21
	000e  Edgeport/4
	000f  Edgeport/8
	0010  Edgeport/2
	0011  Edgeport/4
	0012  Edgeport/416
	0014  Edgeport/8i
	0018  Edgeport/412
	0019  Edgeport/412
	001a  Edgeport/2+2i
	0101  Edgeport/4
	0105  Edgeport/2
	0106  Edgeport/4i
	0107  Edgeport/2i
	010c  Edgeport/421
	010d  Edgeport/21
	0110  Edgeport/2
	0111  Edgeport/4
	0112  Edgeport/416
	0114  Edgeport/8i
	0201  Edgeport/4
	0203  Rapidport/4
	0204  Edgeport/4
	0205  Edgeport/2
	0206  Edgeport/4i
	0207  Edgeport/2i
	020c  Edgeport/421
	020d  Edgeport/21
	020e  Edgeport/4
	020f  Edgeport/8
	0210  Edgeport/2
	0211  Edgeport/4
	0212  Edgeport/416
	0214  Edgeport/8i
	0215  Edgeport/1
	0216  EPOS/44
	0217  Edgeport/42
	021a  Edgeport/2+2i
	021b  Edgeport/2c
	021c  Edgeport/221c
	021d  Edgeport/22c
	021e  Edgeport/21c
	021f  Edgeport/62
	0240  Edgeport/1
	0241  Edgeport/1i
	0242  Edgeport/4s
	0243  Edgeport/8s
	0244  Edgeport/8
	0245  Edgeport/22c
	0301  Watchport/P
	0302  Watchport/M
	0303  Watchport/W
	0304  Watchport/T
	0305  Watchport/H
	0306  Watchport/E
	0307  Watchport/L
	0308  Watchport/R
	0309  Watchport/A
	030a  Watchport/D
	030b  Watchport/D
	030c  Power Management Port
	030e  Power Management Port
	030f  Watchport/G
	0310  Watchport/Tc
	0311  Watchport/Hc
	1403  MultiTech Systems MT4X56 Modem
	1a17  Agilent Technologies (E6473)
160a  VIA Technologies, Inc.
	3184  VIA VNT-6656 [WiFi 802.11b/g USB Dongle]
1614  Amoi Electronics
	0404  WMA9109 UMTS Phone
	0600  Vodafone VDA GPS / Toschiba Protege G710
	0804  WP-S1 Phone
1619  L & K Precision Technology Co., Ltd.
1621  Wionics Research
1628  Stonestreet One, Inc.
162a  Airgo Networks Inc.
162f  WiQuest Communications, Inc.
1630  2Wire, Inc.
	0005  802.11g Wireless Adapter [Intersil ISL3886]
	ff81  802.11b Wireless Adapter [Lucent/Agere Hermes I]
1631  Good Way Technology
	6200  GWUSB2E
	c019  RT2573
1645  Cross Match Technologies GmbH
	0001  1S Serial Port
	0002  2S Serial Port
	0003  1S25 Serial Port
	0004  4S Serial Port
	0005  E45 Ethernet [klsi]
	0006  Parallel Port
	0007  U1-SC25 SCSI
	0008  Ethernet
	0016  Bi-directional to Parallel Printer Converter
	0080  1 port to Serial Converter
	0081  1 port to Serial Converter
	0093  1S9 Serial Port
	8000  EZ-USB
	8001  1 port to Serial
	8002  2x Serial Port
	8003  1 port to Serial
	8004  2U4S serial/usb hub
	8005  Ethernet
	8080  1 port to Serial
	8081  1 port to Serial
	8093  PortGear Serial Port
1649  SofTec Microsystems
	0102  uDART In-Circuit Debugger
	0200  SpYder USBSPYDER08
164a  ChipX
164c  Matrix Vision GmbH
	0101  mvBlueFOX camera (no firmware)
	0103  mvBlueFOX camera
	0201  mvBlueLYNX-X intelligent camera (bootloader)
	0203  mvBlueLYNX-X intelligent camera
1657  Struck Innovative Systeme GmbH
	3150  SIS3150 USB2.0 to VME interface
165b  Frontier Design Group
	8101  Tranzport Control Surface
	fad1  Alphatrack Control Surface
1660  Creatix Polymedia GmbH
1668  Actiontec Electronics, Inc. [hex]
	0009  Gateway
	0333  Modem
	0358  InternetPhoneWizard
	0405  Gateway
	0408  Prism2.5 802.11b Adapter
	0413  Gateway
	0421  Prism2.5 802.11b Adapter
	0441  IBM Integrated Bluetooth II
	0500  BTM200B BlueTooth Adapter
	1050  802UIG-1 802.11g Wireless Mini Adapter [Intersil ISL3887]
	1200  802AIN Wireless N Network Adapter [Atheros AR9170+AR9101]
	1441  IBM Integrated Bluetooth II
	2441  BMDC-2 IBM Bluetooth III w.56k
	3441  IBM Integrated Bluetooth III
	6010  Gateway
	6097  802.11b Wireless Adapter
	6106  ROPEX FreeLan 802.11b
	7605  UAT1 Wireless Ethernet Adapter
1669  PiKRON Ltd. [hex]
	1001  uLan2USB Converter - PS1 protocol
1677  China Huada Integrated Circuit Design (Group) Co., Ltd. (CIDC Group)
	0103  Token
1679  Total Phase
	2001  Beagle Protocol Analyzer
	2002  Cheetah SPI Host Adapter
1680  Golden Bridge Electech Inc.
	a332  DVB-T Dongle [RTL2832U]
1681  Prevo Technologies, Inc.
	0001  Tuner's Dashboard
	0002  Tubachron
1682  Maxwise Production Enterprise Ltd.
1684  Godspeed Computer Corp.
1685  Delock
	0200  Infrared adapter
1686  ZOOM Corporation
	0045  H4 Digital Recorder
1687  Kingmax Digital Inc.
	5289  FlashDisk
	6211  FlashDisk
1688  Saab AB
168c  Atheros Communications
	0001  AR5523
	0002  AR5523 (no firmware)
1690  Askey Computer Corp. [hex]
	0101  Creative Modem Blaster DE5670
	0102  V1456 VQE-R2 Modem [conexant]
	0103  1456 VQE-R3 Modem [conexant]
	0104  HCF V90 Data Fax RTAD Modem
	0107  HCF V.90 Data,Fax,RTAD Modem
	0109  MagicXpress V.90 Pocket Modem [conexant]
	0203  Voyager ADSL Modem Loader
	0204  Voyager ADSL Modem
	0205  DSL Modem
	0206  GlobeSpan ADSL WAN Modem
	0208  DSL Modem
	0209  Voyager 100 ADSL Modem
	0211  Globespan Virata ADSL LAN Modem
	0212  DSL Modem
	0213  HM121d DSL Modem
	0214  HM121d DSL Modem
	0215  Voyager 105 ADSL Modem
	0701  WLAN
	0710  SMCWUSBT-G
	0711  SMCWUSBT-G (no firmware)
	0712  AR5523
	0713  AR5523 (no firmware)
	0715  Name: Voyager 1055 Laptop 802.11g Adapter [Broadcom 4320]
	0722  RT2573
	0726  Wi-Fi Wireless LAN Adapter
	0740  802.11n Wireless LAN Card
	0901  Voyager 205 ADSL Router
1696  Hitachi Video and Information System, Inc.
1697  VTec Test, Inc.
16a5  Shenzhen Zhengerya Cable Co., Ltd.
16a6  Unigraf
	3000  VTG-3xxx Video Test Generator family
	4000  VTG-4xxx Video Test Generator family
	5000  VTG-5xxx Video Test Generator family
	5001  VTG-5xxx Special (update) mode of VTG-5xxx family
16ab  Global Sun Technology
	7801  AR5523
	7802  AR5523 (no firmware)
	7811  AR5523
	7812  AR5523 (no firmware)
16ac  Dongguan ChingLung Wire & Cable Co., Ltd.
16b4  iStation
	0801  U43
16b5  Persentec, Inc.
	0002  Otto driving companion
16c0  VOTI
	03e8  free for internal lab use 1000
	03e9  free for internal lab use 1001
	03ea  free for internal lab use 1002
	03eb  free for internal lab use 1003
	03ec  free for internal lab use 1004
	03ed  free for internal lab use 1005
	03ee  free for internal lab use 1006
	03ef  free for internal lab use 1007
	03f0  free for internal lab use 1008
	03f1  free for internal lab use 1009
	0477  Teensy Rebootor
	0478  Teensy Halfkay Bootloader
	0479  Teensy Debug
	047a  Teensy Serial
	047b  Teensy Serial+Debug
	047c  Teensy Keyboard
	047d  Teensy Keyboard+Debug
	047e  Teensy Mouse
	047f  Teensy Mouse+Debug
	0480  Teensy RawHID
	0481  Teensy RawHID+Debug
	0482  Teensyduino Keyboard+Mouse+Joystick
	0483  Teensyduino Serial
	0484  Teensyduino Disk
	0485  Teensyduino MIDI
	0486  Teensyduino RawHID
	0487  Teensyduino Serial+Keyboard+Mouse+Joystick
	0488  Teensyduino Flight Sim Controls
	05dc  shared ID for use with libusb
	05dd  BlackcatUSB2
	05e1  CDC-ACM class devices (modems)
	05e4  MIDI class devices
	076b  OpenPCD 13.56MHz RFID Reader
	076c  OpenPICC 13.56MHz RFID Simulator (native)
	08ac  OpenBeacon USB stick
	08ca  Alpermann+Velte Universal Display
	08cb  Alpermann+Velte Studio Clock
	08cc  Alpermann+Velte SAM7S MT Boot Loader
	08cd  Alpermann+Velte SAM7X MT Boot Loader
	27da  Mouse
	27db  Keyboard
	27dc  Joystick
	27dd  CDC-ACM class devices (modems)
	27de  MIDI class devices
16ca  Wireless Cables, Inc.
	1502  Bluetooth Dongle
16cc  silex technology, Inc.
16d0  GrauTec
	054b  ReelBox OLED Display (external)
16d3  Frontline Test Equipment, Inc.
16d5  AnyDATA Corporation
	6202  CDMA/UMTS/GPRS modem
	6501  CDMA 2000 1xRTT/EV-DO Modem
	6502  CDMA/UMTS/GPRS modem
16d6  JABLOCOM s.r.o.
	8000  GDP-04 desktop phone
	8001  EYE-02
	8003  GDP-04 modem
	8004  Bootloader
	8005  GDP-04i
	8007  BTP-06 modem
16d8  CMOTECH Co., Ltd.
	5141  CMOTECH CDMA Technologies modem
	5533  CCU-550 CDMA EV-DO modem
	5543  CDMA 2000 1xRTT/1xEVDO modem
	6280  CMOTECH CDMA Technologies modem
	6803  CNU-680 CDMA EV-DO modem
	8001  Gobi 2000 Wireless Modem (QDL mode)
	8002  Gobi 2000 Wireless Modem
16dc  Wiener, Plein & Baus
	0001  CC
	000b  VM
16df  King Billion Electronics Co., Ltd.
16f0  GN ReSound A/S
	0001  Speedlink Programming Interface
	0003  Airlink Wireless Programming Interface
16f5  Futurelogic Inc.
1706  BlueView Technologies, Inc.
1707  ARTIMI
170b  Swissonic
	0011  MIDI-USB 1x1
170d  Avnera
1725  Vitesse Semiconductor
1726  Axesstel, Inc.
	1000  wireless modem
	2000  wireless modem
	3000  wireless modem
172f  Waltop International Corp.
	0022  Tablet
	0024  Tablet
	0025  Tablet
	0026  Tablet
	0031  Slim Tablet 12.1"
	0032  Slim Tablet 5.8"
	0034  Slim Tablet 12.1"
	0038  Genius G-Pen F509
	0500  Media Tablet 14.1"
	0501  Media Tablet 10.6"
	0502  Sirius Battery Free Tablet
1733  Cellink Technology Co., Ltd
	0101  RF Wireless Optical Mouse OP-701
1736  CANON IMAGING SYSTEM TECHNOLOGIES INC.
1737  Linksys
	0039  USB1000
	0070  WUSB100 v1 RangePlus Wireless Network Adapter [Ralink RT2870]
	0071  WUSB600N v1 Dual-Band Wireless-N Network Adapter [Ralink RT2870]
	0073  WUSB54GC v2 802.11g Adapter [Realtek RTL8187B]
	0075  WUSB54GSC v2 802.11g Adapter
	0077  WUSB54GC v3 802.11g Adapter [Ralink RT2070L]
	0078  WUSB100 v2 RangePlus Wireless Network Adapter [Ralink RT3070]
	0079  WUSB600N v2 Dual-Band Wireless-N Network Adapter [Ralink RT3572]
1740  Senao
	0605  LevelOne WUA-0605 N_Max Wireless USB Adapter
	0615  LevelOne WUA-0615 N_Max Wireless USB Adapter
	1000  NUB-350 802.11g Wireless Adapter [Intersil ISL3887]
	2000  NUB-8301 802.11bg
	3701  EUB-3701 EXT 802.11g Wireless Adapter [Ralink RT2571W]
	9701  EnGenius 802.11n Wireless USB Adapter
	9702  EnGenius 802.11n Wireless USB Adapter
	9703  EnGenius 802.11n Wireless USB Adapter
	9705  EnGenius 802.11n Wireless USB Adapter
	9706  EUB9706 802.11n Wireless Adapter [Ralink RT3072]
	9801  EUB9801 802.11abgn Wireless Adapter [Ralink RT3572]
1743  General Atomics
174c  ASMedia Technology Inc.
	5106  Transcend StoreJet 25M3
174f  Syntek
	1105  SM-MS/Pro-MMC-XD Card Reader
	110b  HP Webcam
	1403  Integrated Webcam
	1404  USB Camera device, 1.3 MPixel Web Cam
	5212  USB 2.0 UVC PC Camera
	5a11  PC Camera
	5a31  Sonix USB 2.0 Camera
	5a35  Sonix 1.3MPixel USB 2.0 Camera
	6a31  Web Cam - Asus A8J, F3S, F5R, VX2S, V1S
	6a33  Web Cam - Asus F3SA, F9J, F9S
	6a51  2.0MPixel Web Cam - Asus Z96J, Z96S, S96S
	6a54  Web Cam
	6d51  2.0Mpixel Web Cam - Eurocom D900C
	8a12  Syntek 0.3MPixel USB 2.0 UVC PC Camera
	8a33  Syntek USB 2.0 UVC PC Camera
	a311  1.3MPixel Web Cam - Asus A3A, A6J, A6K, A6M, A6R, A6T, A6V, A7T, A7sv, A7U
	a312  1.3MPixel Web Cam
	a821  Web Cam - Packard Bell BU45, PB Easynote MX66-208W
	aa11  Web Cam
1753  GERTEC Telecomunicacoes Ltda.
	c901  PPC900 Pinpad Terminal
1759  LucidPort Technology, Inc.
1761  ASUSTek Computer, Inc. (wrong ID)
	0b05  802.11n Network Adapter (wrong ID - swapped vendor and device)
1772  System Level Solutions, Inc.
1776  Arowana
	501c  300K CMOS Camera
177f  Sweex
	0153  LW153 802.11n Adapter [ralink rt3070]
	0154  LW154 802.11bgn (1x1:1) Wireless Adapter [Realtek RTL8188SU]
	0313  LW313 802.11n Adapter [ralink rt2770 + rt2720]
1781  Multiple Vendors
	083e  MetaGeek Wi-Spy
	083f  MetaGeek Wi-Spy 2.4x
	0938  Iguanaworks USB IR Transceiver
	0c30  Telldus TellStick
	0c31  Telldus TellStick Duo
	0c9f  USBtiny
1782  Spreadtrum Communications Inc.
1784  TopSeed Technology Corp.
	0001  eHome Infrared Transceiver
	0004  RF Combo Device
	0006  eHome Infrared Transceiver
	0007  eHome Infrared Transceiver
	0008  eHome Infrared Transceiver
	000a  eHome Infrared Transceiver
1787  ATI AIB
1788  ShenZhen Litkconn Technology Co., Ltd.
1796  Printrex, Inc.
1797  JALCO CO., LTD.
1799  Belkin Components
	7051  F5D7051 802.11g Adapter v1000 [Broadcom 4320]
179d  Ricavision International, Inc.
	0010  Internal Infrared Transceiver
17a0  Samson Technologies Corp.
	0001  C01U condenser microphone
	0002  Q1U dynamic microphone
	0100  C03U multi-pattern microphone
	0101  UB1 boundary microphone
	0200  StudioDock monitors (internal hub)
	0201  StudioDock monitors (audio)
	0301  Q2U handheld microphone with XLR
	0302  GoMic compact condenser microphone
	0310  Meteor condenser microphone
17a4  Concept2
	0001  Performance Monitor 3
	0002  Performance Monitor 4
17a5  Advanced Connection Technology Inc.
17a7  MICOMSOFT CO., LTD.
17b3  Grey Innovation
	0004  Linux-USB Midi Gadget
17ba  SAURIS GmbH
	0001  SAU510-USB [no firmware]
	0510  SAU510-USB and SAU510-USB plus JTAG Emulators
	0511  SAU510-USB Iso Plus JTAG Emulator
	0520  SAU510-USB Nano JTAG Emulator
	1511  Onboard Emulator on SAUModule development kit
17c3  Singim International Corp.
17cc  Native Instruments
	041c  Audio 2 DJ
	0808  Maschine Controller
	0815  Audio Kontrol 1
	0839  Audio 4 DJ
	0d8d  Guitarrig Mobile
	1915  Session I/O
	1940  RigKontrol3
	1969  RigKontrol2
	1978  Audio 8 DJ
	2280  Medion MDPNA1500 in card reader mode
	2305  Traktor Kontrol X1
	4711  Kore Controller
	4712  Kore Controller 2
	baff  Traktor Kontrol S4
17cf  Hip Hing Cable & Plug Mfy. Ltd.
17d0  Sanford L.P.
17d3  Korea Techtron Co., Ltd.
17e9  DisplayLink
	0051  USB VGA Adaptor
	0377  Plugable UD-160-A (M)
	0378  Plugable UGA-2K-A
	0379  Plugable UGA-125
	037a  Plugable UGA-165
	037b  Plugable USB-VGA-165
	037c  Plugable DC-125
	037d  Plugable USB2-HDMI-165
17eb  Cornice, Inc.
17ef  Lenovo
	1003  Integrated Smart Card Reader
	1004  Integrated Webcam
	100a  ThinkPad Mini Dock Plus Series 3
	3815  ChipsBnk 2GB USB Stick
	4802  Lenovo Vc0323+MI1310_SOC Camera
	4807  UVC Camera
	480c  Integrated Webcam
	480d  Integrated Webcam [R5U877]
	480e  Integrated Webcam [R5U877]
	480f  Integrated Webcam [R5U877]
	4810  Integrated Webcam [R5U877]
	4811  Integrated Webcam [R5U877]
	4812  Integrated Webcam [R5U877]
	4813  Integrated Webcam [R5U877]
	4814  Integrated Webcam [R5U877]
	4815  Integrated Webcam [R5U877]
	481c  Integrated Webcam
	481d  Integrated Webcam
	6007  Smartcard Keyboard
	6009  ThinkPad Keyboard with TrackPoint
	6014  Mini Wireless Keyboard N5901
17f5  K.K. Rocky
17f6  Unicomp, Inc
	0709  Model M Keyboard
1809  Advantech
	4761  USB-4761 Portable Data Acquisition Module
1822  Twinhan
	3201  VisionDTV USB-Ter/HAMA USB DVB-T device cold
	3202  VisionDTV USB-Ter/HAMA USB DVB-T device warm
1831  Gwo Jinn Industries Co., Ltd.
1832  Huizhou Shenghua Industrial Co., Ltd.
183d  VIVOphone
	0010  VoiceKey
1843  Vaisala
1849  ASRock Incorporation
1852  GYROCOM C&C Co., LTD
	7922  Audiotrak DR.DAC2 DX [GYROCOM C&C]
1854  Memory Devices Ltd.
185b  Compro
	3020  K100 Infrared Receiver
	3082  K100 Infrared Receiver v2
	d000  Compro Videomate DVB-U2000 - DVB-T USB cold
	d001  Compro Videomate DVB-U2000 - DVB-T USB warm
1861  Tech Technology Industrial Company
1862  Teridian Semiconductor Corp.
1870  Nexio Co., Ltd
	0001  iNexio Touchscreen controller
1871  Aveo Technology Corp.
	0d01  USB2.0 Camera
1873  Navilock
	ee93  EasyLogger
187c  Alienware Corporation
	0600  Dual Compatible Game Pad
187f  Siano Mobile Silicon
	0010  Stallar Board
	0100  Stallar Board
	0200  Nova A
	0201  Nova B
	0202  Nice
	0300  Vega
	0301  VeNice
1892  Vast Technologies, Inc.
1894  Topseed
	5632  Atek Tote Remote
	5641  TSAM-004 Presentation Remote
1897  Evertop Wire Cable Co.
18a4  CSSN
	0001  Snapshell IDR
18a5  Verbatim, Ltd
	0214  Portable Hard Drive
	0216  External Hard Drive
	0218  External Hard Drive
	0227  Pocket Hard Drive
	0237  Portable Harddrive (500 GB)
18b1  Petalynx
	0037  Maxter Remote Control
18b4  e3C Technologies
	1001  DUTV007
	1002  EC168 (v5) based USB DVB-T receiver
	1689  DUTV009
	fffa  EC168 (v2) based USB DVB-T receiver
	fffb  EC168 (v3) based USB DVB-T receiver
18b6  Mikkon Technology Limited
18b7  Zotek Electronic Co., Ltd.
18c5  AMIT Technology, Inc.
	0002  CG-WLUSB2GO
	0008  CG-WLUSB2GNR Corega Wireless USB Adapter
	0012  CG-WLUSB10 Corega Wireless USB Adapter
18cd  Ecamm
	cafe  Pico iMage
18d1  Google Inc.
	4e11  Nexus One
	4e12  Nexus One (debug)
	4e13  Nexus One (tether)
	4e20  Nexus S (fastboot)
	4e21  Nexus S
	4e22  Nexus S (debug)
	4e24  Nexus S (tether)
	7102  Toshiba Thrive tablet
18d5  Starline International Group Limited
18d9  Kaba
	01a0  B-Net 91 07
18dd  Planon System Solutions Inc.
	1000  DocuPen RC800
18e3  Fitipower Integrated Technology Inc
	7102  Multi Card Reader (Internal)
	9101  All-in-1 Card Reader
	9102  Multi Card Reader
	9512  Webcam
18e8  Qcom
	6144  LR802UA 802.11b Wireless Adapter [ALi M4301AU]
	6196  RT2573
	6229  RT2573
	6232  Wireless 802.11g 54Mbps Network Adapter [RTL8187]
18ea  Matrox Graphics, Inc.
	0002  DualHead2Go [Analog Edition]
	0004  TripleHead2Go [Digital Edition]
18ec  Arkmicro Technologies Inc.
	3118  USB to IrDA adapter [ARK3116T]
	3188  ARK3188 UVC Webcam
18fd  FineArch Inc.
1908  GEMBIRD
	1320  PhotoFrame PF-15-1
190d  Motorola GSG
1914  Alco Digital Devices Limited
1915  Nordic Semiconductor ASA
	2233  Linksys WUSB11 v2.8 802.11b Adapter [Atmel AT76C505]
	2234  Linksys WUSB54G v1 OEM 802.11g Adapter [Intersil ISL3886]
	2235  Linksys WUSB54GP v1 OEM 802.11g Adapter [Intersil ISL3886]
	2236  Linksys WUSB11 v3.0 802.11b Adapter [Intersil PRISM 3]
1926  NextWindow
	0003  1900 HID Touchscreen
	0006  1950 HID Touchscreen
	0064  1950 HID Touchscreen
	0065  1950 HID Touchscreen
	0066  1950 HID Touchscreen
	0067  1950 HID Touchscreen
	0068  1950 HID Touchscreen
	0069  1950 HID Touchscreen
	0071  1950 HID Touchscreen
	0072  1950 HID Touchscreen
	0073  1950 HID Touchscreen
	0074  1950 HID Touchscreen
	0075  1950 HID Touchscreen
	0076  1950 HID Touchscreen
	0077  1950 HID Touchscreen
	0078  1950 HID Touchscreen
	0079  1950 HID Touchscreen
	007a  1950 HID Touchscreen
	007e  1950 HID Touchscreen
	007f  1950 HID Touchscreen
	0080  1950 HID Touchscreen
	0081  1950 HID Touchscreen
	0082  1950 HID Touchscreen
	0083  1950 HID Touchscreen
	0084  1950 HID Touchscreen
	0085  1950 HID Touchscreen
	0086  1950 HID Touchscreen
	0087  1950 HID Touchscreen
192f  Avago Technologies, Pte.
	0000  Mouse
1930  Shenzhen Xianhe Technology Co., Ltd.
1931  Ningbo Broad Telecommunication Co., Ltd.
1934  Feature Integration Technology Inc. (Fintek)
	0602  F71610 or F71612 Consumer Infrared Receiver/Transceiver
	0702  Integrated Consumer Infrared Receiver/Transceiver
	5168  F71610A or F71612A Consumer Infrared Receiver/Transceiver
1941  Dream Link
	8021  WH1080 Weather Station / USB Missile Launcher
1943  Sensoray Co., Inc.
	2250  Model 2250 MPEG and JPEG Capture Card
	2253  Model 2253 Audio/Video Codec Card
	2255  Model 2255 4 Channel Capture Card
	2257  Model 2257 4 Channel Capture Card
	a250  Model 2250 MPEG and JPEG Capture Card (cold)
	a253  Model 2253 Audio/Video Codec Card (cold)
1949  Lab126
	0002  Amazon Kindle
	0004  Amazon Kindle 3/4
1951  Hyperstone AG
1953  Ironkey Inc.
1954  Radiient Technologies
195d  Itron Technology iONE
	7002  Libra-Q11 IR remote
	7006  Libra-Q26 / 1.0 Remote
	7777  Scorpius wireless keyboard
	7779  Scorpius-P20MT
1967  CASIO HITACHI Mobile Communications Co., Ltd.
196b  Wispro Technology Inc.
1970  Dane-Elec Corp. USA
1975  Dongguan Guneetal Wire & Cable Co., Ltd.
1976  Chipsbrand Microelectronics (HK) Co., Ltd.
	6025  Flash Drive 512 MB
1977  T-Logic
	0111  TL203 MP3 Player and Voice Recorder
1989  Nuconn Technology Corp.
198f  Beceem Communications Inc.
	0210  BCS200 WiMAX Adapter
	0220  BCSM250 WiMAX Adapter
1990  Acron Precision Industrial Co., Ltd.
1995  Trillium Technology Pty. Ltd.
	3202  REC-ADPT-USB (recorder)
	3203  REC-A-ADPT-USB (recorder)
199e  The Imaging Source Europe GmbH
	8101  DFx 21BU04 Camera
199f  Benica Corporation
19a8  Biforst Technology Inc.
19ab  Bodelin
	1000  ProScope HR
19af  S Life
	6611  Celestia VoIP Phone
19b2  Batronix
	0010  BX32 Batupo
	0011  BX32P Barlino
	0012  BX40 Bagero
	0013  BX48 Batego
19b4  Celestron
	0002  SkyScout Personal Planetarium
	0101  Handheld Digital Microscope 44302
19b5  B & W Group
19b6  Infotech Logistic, LLC
19b9  Data Robotics
	8d20  Drobo Elite
19ca  Mindtribe
	0001  Sandio 3D HID Mouse
19cf  Parrot SA
19d2  ZTE WCDMA Technologies MSM
	0001  CDMA Wireless Modem
	0002  MF632/ONDA ET502HS/MT505UP
	0007  TU25 WiMAX Adapter [Beceem BCS200]
	0031  MF110/MF627/MF636
	0063  K3565-Z HSDPA
	0064  MF627 AU
	0083  MF190
	0103  MF112
	0172  AX226 WIMAX MODEM (After Modeswitch)
	1203  MF691 [ T-Mobile webConnect Rocket 2.0]
	2000  MF627/MF628/MF628+/MF636+ HSDPA/HSUPA
	fff2  Gobi Wireless Modem (QDL mode)
	fff3  Gobi Wireless Modem
19e1  WeiDuan Electronic Accessory (S.Z.) Co., Ltd.
19e8  Industrial Technology Research Institute
19ef  Pak Heng Technology (Shenzhen) Co., Ltd.
19f7  RODE Microphones
	0001  Podcaster
19fa  Gampaq Co.Ltd
	0703  Steering Wheel
19ff  Dynex
	0102  1.3MP Webcam
	0201  Rocketfish Wireless 2.4G Laser Mouse
1a08  Bellwood International, Inc.
1a0a  USB-IF non-workshop
	badd  USB OTG Compliance test device
1a12  KES Co., Ltd.
1a1d  Veho
	0407  Mimi WiFi speakers
1a25  Amphenol East Asia Ltd.
1a2a  Seagate Branded Solutions
1a32  Quanta Microsystems, Inc.
	0304  802.11n Wireless LAN Card
1a36  Biwin Technology Ltd.
1a40  Terminus Technology Inc.
	0101  4-Port HUB
	0201  FE 2.1 7-port Hub
1a41  Action Electronics Co., Ltd.
1a44  VASCO Data Security International
	0001  Digipass 905 SmartCard Reader
1a4a  Silicon Image
1a4b  SafeBoot International B.V.
1a61  Abbott Diabetes Care
1a6a  Spansion Inc.
1a6d  SamYoung Electronics Co., Ltd
1a6e  Global Unichip Corp.
1a6f  Sagem Orga GmbH
1a79  Bayer Health Care LLC
1a7b  Lumberg Connect  GmbH & Co. KG
1a7c  Evoluent
	0068  VerticalMouse 3
	0168  VerticalMouse 3 Wireless
	0191  VerticalMouse 4
1a81  Holtek Semiconductor, Inc.
	2203  Laser Gaming mouse
	2204  Optical Mouse
1a86  QinHeng Electronics
	5523  CH341 in serial mode, usb to serial port converter
	5584  CH341 in parallel mode, usb to printer port converter
	7523  HL-340 USB-Serial adapter
	752d  CH345 MIDI adapter
	7584  CH340S
	e008  HID-based serial adapater
1a89  Dynalith Systems Co., Ltd.
1a8b  SGS Taiwan Ltd.
1a8d  BandRich, Inc.
	1002  BandLuxe 3.5G HSDPA Adapter
	1009  BandLuxe 3.5G HSPA Adapter
1a90  Corsair Voyager GT 16GB
1a98  Leica Camera AG
1aa4  Data Drive Thru, Inc.
1aa5  UBeacon Technologies, Inc.
1aa6  eFortune Technology Corp.
1ab1  Rigol Technologies
	0588  DS1000 SERIES
1acb  Salcomp Plc
1ad1  Desay Wire Co., Ltd.
1ad4  APS
	0002  KM290-HRS
1adb  SEL C662 Serial Cable
1ae4  ic-design Reinhard Gottinger GmbH
1ae7  X-TENSIONS
	0381  VS-DVB-T 380U (af9015 based)
	2001  SpeedLink SL-6825
1aed  High Top Precision Electronic Co., Ltd.
1aef  Conntech Electronic (Suzhou) Corporation
1b04  Meilhaus Electronic GmBH
	0630  ME-630
	0940  ME-94
	0950  ME-95
	0960  ME-96
	1000  ME-1000
	100a  ME-1000
	100b  ME-1000
	1400  ME-1400
	140a  ME-1400A
	140b  ME-1400B
	140c  ME-1400C
	140d  ME-1400D
	140e  ME-1400E
	14ea  ME-1400EA
	14eb  ME-1400EB
	1604  ME-1600/4U
	1608  ME-1600/8U
	160c  ME-1600/12U
	160f  ME-1600/16U
	168f  ME-1600/16U8I
	4610  ME-4610
	4650  ME-4650
	4660  ME-4660
	4661  ME-4660I
	4662  ME-4660
	4663  ME-4660I
	4670  ME-4670
	4671  ME-4670I
	4672  ME-4670S
	4673  ME-4670IS
	4680  ME-4680
	4681  ME-4680I
	4682  ME-4680S
	4683  ME-4680IS
	6004  ME-6000/4
	6008  ME-6000/8
	600f  ME-6000/16
	6014  ME-6000I/4
	6018  ME-6000I/8
	601f  ME-6000I/16
	6034  ME-6000ISLE/4
	6038  ME-6000ISLE/8
	603f  ME-6000ISLE/16
	6044  ME-6000/4/DIO
	6048  ME-6000/8/DIO
	604f  ME-6000/16/DIO
	6054  ME-6000I/4/DIO
	6058  ME-6000I/8/DIO
	605f  ME-6000I/16/DIO
	6074  ME-6000ISLE/4/DIO
	6078  ME-6000ISLE/8/DIO
	607f  ME-6000ISLE/16/DIO
	6104  ME-6100/4
	6108  ME-6100/8
	610f  ME-6100/16
	6114  ME-6100I/4
	6118  ME-6100I/8
	611f  ME-6100I/16
	6134  ME-6100ISLE/4
	6138  ME-6100ISLE/8
	613f  ME-6100ISLE/16
	6144  ME-6100/4/DIO
	6148  ME-6100/8/DIO
	614f  ME-6100/16/DIO
	6154  ME-6100I/4/DIO
	6158  ME-6100I/8/DIO
	615f  ME-6100I/16/DIO
	6174  ME-6100ISLE/4/DIO
	6178  ME-6100ISLE/8/DIO
	617f  ME-6100ISLE/16/DIO
	6259  ME-6200I/9/DIO
	6359  ME-6300I/9/DIO
	810a  ME-8100A
	810b  ME-8100B
	820a  ME-8200A
	820b  ME-8200B
1b0e  BLUTRONICS S.r.l.
	1078  BLUDRIVE II CCID
1b1c  Corsair
	0890  Flash Padlock
	0a00  SP2500 Speakers
	1a90  Flash Voyager GT
1b20  MStar Semiconductor, Inc.
1b22  WiLinx Corp.
1b26  Cellex Power Products, Inc.
1b27  Current Electronics Inc.
1b28  NAVIsis Inc.
1b32  Ugobe Life Forms, Inc.
	0064  Pleo robotic dinosaur
1b36  ViXS Systems, Inc.
1b3b  iPassion Technology Inc.
	2933  PC Camera/Webcam controller
	2935  PC Camera/Webcam controller
	2936  PC Camera/Webcam controller
	2937  PC Camera/Webcam controller
	2938  PC Camera/Webcam controller
	2939  PC Camera/Webcam controller
	2950  PC Camera/Webcam controller
	2951  PC Camera/Webcam controller
	2952  PC Camera/Webcam controller
	2953  PC Camera/Webcam controller
	2955  PC Camera/Webcam controller
	2956  PC Camera/Webcam controller
	2957  PC Camera/Webcam controller
	2958  PC Camera/Webcam controller
	2959  PC Camera/Webcam controller
	2960  PC Camera/Webcam controller
	2961  PC Camera/Webcam controller
	2962  PC Camera/Webcam controller
	2963  PC Camera/Webcam controller
	2965  PC Camera/Webcam controller
	2966  PC Camera/Webcam controller
	2967  PC Camera/Webcam controller
	2968  PC Camera/Webcam controller
	2969  PC Camera/Webcam controller
1b3f  Generalplus Technology Inc.
1b47  Energizer Holdings, Inc.
	0001  CHUSB Duo Charger (NiMH AA/AAA USB smart charger)
1b48  Plastron Precision Co., Ltd.
1b59  K.S. Terminals Inc.
1b5a  Chao Zhou Kai Yuan Electric Co., Ltd.
1b65  The Hong Kong Standards and Testing Centre Ltd.
1b72  ATERGI TECHNOLOGY CO., LTD.
1b73  Fresco Logic
	1000  xHC1 Controller
1b75  Ovislink Corp.
	3072  AirLive WN-360USB adapter
	8187  AirLive WL-1600USB 802.11g Adapter [Realtek RTL8187L]
	9170  AirLive X.USB 802.11abgn [Atheros AR9170+AR9104]
	a200  AirLive WN-200USB wireless 11b/g/n dongle
1b76  Legend Silicon Corp.
1b80  Afatech
	c810  MC810 [af9015]
	d393  DVB-T receiver [RTL2832U]
	d396  UB396-T [RTL2832U]
	d397  DVB-T receiver [RTL2832U]
	d398  DVB-T receiver [RTL2832U]
	d700  FM Radio SnapMusic Mobile 700 (FM700)
	e297  Conceptronic DVB-T CTVDIGRCU V3.0
	e383  DVB-T UB383-T [af9015]
	e385  DVB-T UB385-T [af9015]
	e386  DVB-T UB385-T [af9015]
	e399  DVB-T KWorld PlusTV 399U [af9015]
	e39a  DVB-T395U [af9015]
	e39b  DVB-T395U [af9015]
	e409  IT9137FN Dual DVB-T [KWorld UB499-2T]
1b86  Dongguan Guanshang Electronics Co., Ltd.
1b88  ShenMing Electron (Dong Guan) Co., Ltd.
1b8c  Altium Limited
1b8d  e-MOVE Technology Co., Ltd.
1b8e  Amlogic, Inc.
1b8f  MA LABS, Inc.
1b96  N-Trig
	0001  Duosense Transparent Electromagnetic Digitizer
1b98  YMax Communications Corp.
1b99  Shenzhen Yuanchuan Electronic
1ba1  JINQ CHERN ENTERPRISE CO., LTD.
1ba2  Lite Metals & Plastic (Shenzhen) Co., Ltd.
1ba4  Ember Corporation
	0001  InSight USB Link
1ba6  Abilis Systems
1ba8  China Telecommunication Technology Labs
1bad  Harmonix Music
	0002  Guitar for Xbox 360
	0003  Drum Kit for Xbox 360
1bae  Vuzix Corporation
	0002  VR920 Immersive Eyewear
1bbb  T & A Mobile Phones
1bc4  Ford Motor Co.
1bc5  AVIXE Technology (China) Ltd.
1bce  Contac Cable Industrial Limited
1bcf  Sunplus Innovation Technology Inc.
	0007  Optical Mouse
	053a  Targa Silvercrest OMC807-C optische Funkmaus
	05c5  SPRF2413A [2.4GHz Wireless Keyboard/Mouse Receiver]
	05cf  Micro keyboard & mouse receiver
	0c31  SPIF30x Serial-ATA bridge
1bd0  Hangzhou Riyue Electronic Co., Ltd.
1bd5  BG Systems, Inc.
1bde  P-TWO INDUSTRIES, INC.
1bef  Shenzhen Tongyuan Network-Communication Cables Co., Ltd
1bf0  RealVision Inc.
1bf5  Extranet Systems Inc.
1bf6  Orient Semiconductor Electronics, Ltd.
1bfd  TouchPack
	1268  Touch Screen
	1368  Touch Screen
	1568  Capacitive Touch Screen
	1668  IR Touch Screen
	1688  Resistive Touch Screen
	2968  Touch Screen
	5968  Touch Screen
	6968  Touch Screen
1c02  Kreton Corporation
1c04  QNAP System Inc.
1c0d  Relm Wireless
1c10  Lanterra Industrial Co., Ltd.
1c13  ALECTRONIC LIMITED
1c1a  Datel Electronics Ltd.
1c1b  Volkswagen of America, Inc.
1c1f  Goldvish S.A.
1c20  Fuji Electric Device Technology Co., Ltd.
1c21  ADDMM LLC
1c22  ZHONGSHAN CHIANG YU ELECTRIC CO., LTD.
1c26  Shanghai Haiying Electronics Co., Ltd.
1c27  HuiYang D & S Cable Co., Ltd.
1c31  LS Cable Ltd.
1c34  SpringCard
	7241  Prox'N'Roll RFID Scanner
1c37  Authorizer Technologies, Inc.
1c3d  NONIN MEDICAL INC.
1c3e  Wep Peripherals
1c40  EZPrototypes
	0533  TiltStick
	0534  i2c-tiny-usb interface
	0535  glcd2usb interface
	0536  Swiss ColorPAL
1c49  Cherng Weei Technology Corp.
1c4f  SiGma Micro
	0002  Keyboard TRACER Gamma Ivory
	0003  HID controller
	000e  Genius KB-120 Keyboard
	3000  Micro USB Web Camera
1c6b  Philips & Lite-ON Digital Solutions Corporation
	a222  DVD Writer Slimtype eTAU108
1c6c  Skydigital Inc.
1c73  AMT
	861f  Anysee E30 USB 2.0 DVB-T Receiver
1c77  Kaetat Industrial Co., Ltd.
1c78  Datascope Corp.
1c79  Unigen Corporation
1c7a  LighTuning Technology Inc.
	0801  Fingerprint Reader
1c7b  LUXSHARE PRECISION INDUSTRY (SHENZHEN) CO., LTD.
1c87  2N TELEKOMUNIKACE a.s.
1c88  Somagic, Inc.
	0007  SMI Grabber (EasyCAP DC60+ clone) (no firmware) [SMI-2021CBE]
	003c  SMI Grabber (EasyCAP DC60+ clone) [SMI-2021CBE]
1c89  HONGKONG WEIDIDA ELECTRON LIMITED
1c8e  ASTRON INTERNATIONAL CORP.
1c98  ALPINE ELECTRONICS, INC.
1c9e  OMEGA TECHNOLOGY
	6061  WL-72B 3.5G MODEM
1ca0  ACCARIO Inc.
1cac  Kinstone
	a332  C8 Webcam
	b288  C18 Webcam
1cb3  Aces Electronic Co., Ltd.
1cb4  OPEX CORPORATION
1cbe  Luminary Micro Inc.
1cbf  FORTAT SKYMARK INDUSTRIAL COMPANY
1cc0  PlantSense
1cca  NextWave Broadband Inc.
1ccd  Bodatong Technology (Shenzhen) Co., Ltd.
1cd4  adp corporation
1cd5  Firecomms Ltd.
1cd6  Antonio Precise Products Manufactory Ltd.
1cde  Telecommunications Technology Association (TTA)
1cdf  WonTen Technology Co., Ltd.
1ce0  EDIMAX TECHNOLOGY CO., LTD.
1ce1  Amphenol KAE
1cfc  ANDES TECHNOLOGY CORPORATION
1cfd  Flextronics Digital Design Japan, LTD.
1d03  iCON
	0028  iCreativ MIDI Controller
1d07  Solid-Motion
1d08  NINGBO HENTEK DRAGON ELECTRONICS CO., LTD.
1d09  TechFaith Wireless Technology Limited
	1026  HSUPA Modem FLYING-LARK46-VER0.07 [Flying Angel]
1d0a  Johnson Controls, Inc. The Automotive Business Unit
1d0b  HAN HUA CABLE & WIRE TECHNOLOGY (J.X.) CO., LTD.
1d14  ALPHA-SAT TECHNOLOGY LIMITED
1d17  C-Thru Music Ltd.
	0001  AXiS-49 Harmonic Table MIDI Keyboard
1d19  Dexatek Technology Ltd.
	1101  DK DVB-T Dongle
	1102  DK mini DVB-T Dongle
	1103  DK 5217 DVB-T Dongle
	6105  Video grabber
	8202  DK DVBC/T DONGLE
1d1f  Diostech Co., Ltd.
1d20  SAMTACK INC.
1d4d  PEGATRON CORPORATION
	0002  Ralink RT2770/2720 802.11b/g/n Wireless LAN Mini-USB Device
	000c  Ralink RT3070 802.11b/g/n Wireless Lan USB Device
	000e  Ralink RT3070 802.11b/g/n Wireless Lan USB Device
1d50  OpenMoko, Inc.
	5119  GTA01/GTA02 U-Boot Bootloader
1d57  Xenta
	0005  Wireless Receiver (Keyboard and Mouse)
	0006  Wireless Receiver (RC Laser Pointer)
	000c  Optical Mouse
	2400  Wireless Mouse Receiver
	32da  2.4GHz Receiver (Keyboard and Mouse)
	83d0  Click-mouse!
	ac01  Wireless Receiver (Keyboard and Mouse)
	af01  AUVIO Universal Remote Receiver for PlayStation 3
1d5b  Smartronix, Inc.
1d6b  Linux Foundation
	0001  1.1 root hub
	0002  2.0 root hub
	0003  3.0 root hub
	0100  PTP Gadget
	0101  Audio Gadget
	0102  EEM Gadget
	0103  NCM (Ethernet) Gadget
	0104  Multifunction Composite Gadget
	0105  FunctionFS Gadget
	0200  Qemu Audio Device
1de1  Actions Microelectronics Co.
	1101  Generic Display Device (Mass storage mode)
	c101  Generic Display Device
1e0e  Qualcomm / Option
1e10  Point Grey Research, Inc.
	2004  Sony 1.3MP 1/3" ICX445 IIDC video camera [Chameleon]
1e17  Mirion Technologies Dosimetry Services Division
	0001  instadose dosimeter
1e1d  Lumension Security
	0165  Secure Pen drive
1e1f  INVIA
1e29  Festo AG & Co. KG
	0101  CPX Adapter
	0102  CPX Adapter >=HW10.09 [CP2102]
	0401  iL3-TP [AT90USB646]
	0402  FTDI232 [EasyPort]
	0403  FTDI232 [EasyPort Mini]
	0404  FTDI232 [Netzteil-GL]
	0405  FTDI232 [MotorPrüfstand]
	0406  STM32F103 [EasyKit]
	0407  LPC2378 [Robotino]
	0408  LPC2378 [Robotino-Arm]
	0409  LPC2378 [Robotino-Arm Bootloader]
	040a  LPC2378 [Robotino Bootloader]
	0501  CP2102 [CMSP]
	0601  CMMP-AS
1e3d  Chipsbank Microelectronics Co., Ltd
	4082  CBM4082 SD Card Reader
1e41  Cleverscope
	0001  CS328A PC Oscilloscope
1e54  TypeMatrix
	2030  2030 USB Keyboard
1e68  TrekStor GmbH & Co. KG
	001b  DataStation maxi g.u
1e71  NZXT
	0001  Avatar Optical Mouse
1e74  Coby Electronics Corporation
	2211  MP300
	2659  Coby 4GB Go Video MP3 Player [MP620-4G]
	4641  A8705 MP3/Video Player
	6511  MP705-8G MP3 player
	6512  MP705-4G
1e7d  ROCCAT
	2c24  Pyra Mouse (wired)
	2ced  Kone Mouse
	2cf6  Pyra Mouse (wireless)
	2d50  Kova+ Mouse
	2d51  Kone+ Mouse
	30d4  Arvo Keyboard
1ebb  NuCORE Technology, Inc.
1eda  AirTies Wireless Networks
	2012  Air2210 54 Mbps Wireless Adapter
	2210  Air2210 54 Mbps Wireless Adapter
	2310  Air2310 150 Mbps Wireless Adapter
	2410  Air2410 300 Mbps Wireless Adapter
1edb  Blackmagic design
	bd3b  Intensity Shuttle
1ee8  ONDA COMMUNICATION S.p.a.
	0014  MT833UP
1ef6  EADS Deutschland GmbH
	5064  FDR Interface
	5648  RIU CSMU/BSD
	564a  Cassidian RIU CSMU/BSD Simulator
1f28  Cal-Comp
	0020  CDMA USB Modem A600
	0021  CD INSTALLER USB Device
1f44  The Neat Company
	0001  NM-1000 scanner
1f4d  G-Tek Electronics Group
	b803  Lifeview LV5TDLX DVB-T [RTL2832U]
1f82  TANDBERG
	0001  PrecisionHD Camera
1f84  Alere, Inc.
1f87  Stantum
	0002  Multi-touch HID Controller
1f9b  Ubiquiti Networks, Inc.
	0241  AirView2-EXT
1fbd  Delphin Technology AG
	0001  Expert Key - Data aquisition system
1fc9  NXP Semiconductors
	010b  PR533
1fde  ILX Lightwave Corporation
	0001  UART Bridge
1fe7  Vertex Wireless Co., Ltd.
	1000  VW100 series CDMA EV-DO Rev.A modem
2001  D-Link Corp.
	0001  DWL-120 WIRELESS ADAPTER
	0201  DHN-120 10Mb Home Phoneline Adapter
	1a00  10/100 Ethernet
	200c  10/100 Ethernet
	3200  DWL-120 802.11b Wireless Adapter(rev.E1) [Atmel at76c503a]
	3301  DWA-130 802.11n Wireless N Adapter(rev.C1) [Realtek RTL8192U]
	3306  DWL-G122 Wireless Adapter(rev.F1) [Realtek RTL8188SU]
	3308  DWA-121 802.11n Wireless N 150 Pico Adapter [Realtek RTL8188CUS]
	3309  DWA-135 802.11n Wireless N Adapter(rev.A1) [Realtek RTL8192CU]
	330a  DWA-133 802.11n Wireless N Adapter [Realtek RTL8192CU]
	3500  Elitegroup Computer Systems WLAN card WL-162
	3700  DWL-122 802.11b [Intersil Prism 3]
	3701  DWL-G120 Spinnaker 802.11g [Intersil ISL3886]
	3702  DWL-120 802.11b Wireless Adapter(rev.F) [Intersil ISL3871]
	3703  AirPlus G DWL-G122 Wireless Adapter(rev.A1) [Intersil ISL3880]
	3704  AirPlus G DWL-G122 Wireless Adapter(rev.A2) [Intersil ISL3887]
	3705  AirPlus G DWL-G120 Wireless Adapter(rev.C) [Intersil ISL3887]
	3761  IEEE 802.11g USB2.0 Wireless Network Adapter-PN
	3a00  DWL-AG132 [Atheros AR5523]
	3a01  DWL-AG132 (no firmware) [Atheros AR5523]
	3a02  DWL-G132 [Atheros AR5523]
	3a03  DWL-G132 (no firmware) [Atheros AR5523]
	3a04  DWL-AG122 [Atheros AR5523]
	3a05  DWL-AG122 (no firmware) [Atheros AR5523]
	3a80  AirPlus Xtreme G DWL-G132 Wireless Adapter
	3a81  predator Bootloader Download
	3a82  AirPremier AG DWL-AG132 Wireless Adapter
	3a83  predator Bootloader Download
	3b00  AirPlus DWL-120+ Wireless Adapter [Texas Instruments ACX100USB]
	3b01  WLAN Boot Device
	3c00  AirPlus G DWL-G122 Wireless Adapter(rev.B1) [Ralink RT2571]
	3c01  AirPlus AG DWL-AG122 Wireless Adapter
	3c02  AirPlus G DWL-G122 Wireless Adapter
	3c05  DUB-E100 Fast Ethernet [asix]
	3c19  DWA-125 Wireless N 150 Adapter(rev.A3) [Ralink RT5370]
	4000  DSB-650C Ethernet [klsi]
	4001  DSB-650TX Ethernet [pegasus]
	4002  DSB-650TX Ethernet [pegasus]
	4003  DSB-650TX-PNA Ethernet [pegasus]
	400b  10/100 Ethernet
	4102  10/100 Ethernet
	5100  DSL-200 ADSL ATM Modem
	5102  DSL-200 ADSL Loader
	5b00  Remote NDIS Network Device
	9414  Cable Modem
	9b00  Broadband Cable Modem Remote NDIS Device
	abc1  DSB-650 Ethernet [pegasus]
	f013  DLink 7 port USB2.0 Hub
	f103  DUB-H7 7-port USB 2.0 hub
	f10d  Accent Communications Modem
	f110  DUB-AV300 A/V Capture
	f111  DBT-122 Bluetooth adapter
	f112  DUB-T210 Audio Device
	f116  Formosa 2
	f117  Formosa 3
	f118  Formosa 4
2002  DAP Technologies
2013  PCTV Systems
	0245  PCTV 73ESE
	0246  PCTV 74E
	0248  PCTV 282E
	024f  nanoStick T2 290e
2019  PLANEX
	3220  GW-US11S WLAN [Atmel AT76C503A]
	4903  GW-USFang300 802.11abgn Wireless Adapter [Realtek RTL8192DU]
	5303  GW-US54GXS 802.11bg
	5304  GWUS300 802.11n
	ab01  GW-US54HP
	ab24  GW-US300MiniS
	ab25  GW-USMini2N 802.11n Wireless Adapter [Ralink RT2870]
	ab28  GW-USNano
	ab29  GW-USMicro300
	ab2a  GW-USNano2 802.11n Wireless Adapter [Realtek RTL8188CUS]
	ab2c  GW-USDual300 802.11abgn Wireless Adapter [Realtek RTL8192DU]
	ab50  GW-US54Mini2
	c002  GW-US54SG
	c007  GW-US54GZL
	ed02  GW-USMM
	ed06  GW-US300MiniW 802.11bgn Wireless Adapter
	ed10  GW-US300Mini2
	ed14  GW-USMicroN
	ed17  GW-USValue-EZ 802.11n Wireless Adapter [Realtek RTL8188CUS]
2040  Hauppauge
	0c80  Windham
	0c90  Windham
	1700  CataMount
	1800  Okemo A
	1801  Okemo B
	2000  Tiger Minicard
	2009  Tiger Minicard R2
	200a  Tiger Minicard
	2010  Tiger Minicard
	2011  WinTV MiniCard [Dell Digital TV Receiver]
	2019  Tiger Minicard
	2400  WinTV PVR USB2 (Model 24019)
	4700  WinTV Nova-S-USB2
	4902  HD PVR
	4903  HS PVR
	4982  HD PVR
	5500  Windham
	5510  Windham
	5520  Windham
	5530  Windham
	5580  Windham
	5590  Windham
	6500  WinTV HVR-900
	6502  WinTV HVR-900
	6503  WinTV HVR-930
	6513  WinTV HVR-980
	7050  Nova-T Stick
	7060  Nova-T Stick 2
	7070  Nova-T Stick 3
	7240  WinTV HVR-850
	8400  WinTV Nova-T-500
	9300  WinTV NOVA-T USB2 (cold)
	9301  WinTV NOVA-T USB2 (warm)
	9941  WinTV Nova-T-500
	9950  WinTV Nova-T-500
	b910  Windham
	b980  Windham
	b990  Windham
	c000  Windham
	c010  Windham
2047  Texas Instruments
	0200  MSP430 USB HID Bootstrap Loader
2080  Barnes & Noble
	0001  nook
	0002  NOOKcolor
	0003  NOOK Simple Touch
	0004  NOOK Tablet
2087  Cando
	0a01  Multi Touch Panel
	0a02  Multi Touch Panel
	0b03  Multi Touch Panel
20a0  Clay Logic
	4123  IKALOGIC SCANALOGIC 2
	414a  MDE SPI Interface
	415a  OpenPilot
	415b  CopterControl
	415c  PipXtreme
20b1  XMOS Ltd
	10ad  XUSB Loader
	f7d1  XTAG2 - JTAG Adapter
20b3  Hanvon
	0a18  10.1 Touch screen overlay
20b7  Qi Hardware
	0713  Milkymist JTAG/serial
	1540  ben-wpan, AT86RF230-based
	1db5  IDBG in DFU mode
	1db6  IDBG in normal mode
	c25b  C2 Dongle
	cb72  ben-wpan, cntr
20df  Simtec Electronics
	0001  Entropy Key [UDEKEY01]
20f4  TRENDnet
	648b  TEW-648UBM 802.11n 150Mbps Micro Wireless N Adapter [Realtek RTL8188CUS]
2101  ActionStar
	0201  SIIG 4-to-2 Printer Switch
2162  Creative (?)
	2031  Network Blaster Wireless Adapter
	500c  DE5771 Modem Blaster
	8001  Broadxent BritePort DSL Bridge 8010U
2184  GW Instek
	0005  GDS-3000 Oscilloscope
	0006  GDS-3000 Oscilloscope
	0011  AFG Function Generator (CDC)
21a1  Emotiv Systems Pty. Ltd.
	0001  EPOC Consumer Headset Wireless Dongle
21d6  Agecodagis SARL
	0002  Seismic recorder [Tellus]
2222  MacAlly
	0004  iWebKey Keyboard
	2520  Mini Tablet
	4050  AirStick joystick
2227  SAMWOO Enterprise
	3105  SKYDATA SKD-U100
2233  RadioShack Corporation
	6323  USB Electronic Scale
2237  Kobo Inc.
	4161  eReader White
22a6  Pie Digital, Inc.
	ffff  PieKey "beta" 4GB model 4E4F41482E4F5247 (SM3251Q BB)
22b8  Motorola PCS
	0001  Wally 2.2 chipset
	0002  Wally 2.4 chipset
	0005  V.60c/V.60i GSM Phone
	0830  2386C-HT820
	0833  2386C-HT820 [Flash Mode]
	0850  Bluetooth Device
	1001  Patriot 1.0 (GSM) chipset
	1002  Patriot 2.0 chipset
	1005  T280e GSM/GPRS Phone
	1101  Patriot 1.0 (TDMA) chipset
	1801  Rainbow chipset flash
	2035  Bluetooth Device
	2805  GSM Modem
	2821  T720 GSM Phone
	2822  V.120e GSM Phone
	2823  Flash Interface
	2a01  MSM6050 chipset
	2a02  CDMA modem
	2a03  MSM6050 chipset flash
	2a21  V710 GSM Phone (P2K)
	2a22  V710 GSM Phone (AT)
	2a23  MSM6100 chipset flash
	2a41  MSM6300 chipset
	2a42  Usb Modem
	2a43  MSM6300 chipset flash
	2a61  E815 GSM Phone (P2K)
	2a62  E815 GSM Phone (AT)
	2a63  MSM6500 chipset flash
	2a81  MSM6025 chipset
	2a83  MSM6025 chipset flash
	2ac1  MSM6100 chipset
	2ac3  MSM6100 chipset flash
	2d78  XT300[SPICE]
	3001  A835/E1000 GSM Phone (P2K)
	3002  A835/E1000 GSM Phone (AT)
	3801  C350L/C450 (P2K)
	3802  C330/C350L/C450/EZX GSM Phone (AT)
	3803  Neptune LT chipset flash
	4001  OMAP 1.0 chipset
	4002  A920/A925 UMTS Phone
	4003  OMAP 1.0 chipset flash
	4008  OMAP 1.0 chipset RDL
	41d6  Droid X (Windows media mode)
	41d9  Droid/Milestone
	41db  Droid/Milestone (Debug mode)
	41de  Droid X (PC mode)
	4204  MPx200 Smartphone
	4214  MPc GSM
	4224  MPx220 Smartphone
	4234  MPc CDMA
	4244  MPx100 Smartphone
	4285  Droid X (Mass storage)
	4801  Neptune LTS chipset
	4803  Neptune LTS chipset flash
	4810  Triplet GSM Phone (storage)
	4901  Triplet GSM Phone (P2K)
	4902  Triplet GSM Phone (AT)
	4903  Neptune LTE chipset flash
	4a01  Neptune LTX chipset
	4a03  Neptune LTX chipset flash
	4a32  L6-imode Phone
	5801  Neptune ULS chipset
	5803  Neptune ULS chipset flash
	5901  Neptune VLT chipset
	5903  Neptune VLT chipset flash
	6001  Dalhart EZX
	6003  Dalhart flash
	6004  EZX GSM Phone (CDC Net)
	6006  MOTOROKR E6
	6008  Dalhart RDL
	6009  EZX GSM Phone (P2K)
	600a  Dalhart EZX config 17
	600b  Dalhart EZX config 18
	600c  EZX GSM Phone (USBLAN)
	6021  JUIX chipset
	6023  JUIX chipset flash
	6026  Flash RAM Downloader/miniOS
	6027  USBLAN
	604c  EZX GSM Phone (Storage)
	6101  Talon integrated chipset
	6401  Argon chipset
	6403  Argon chipset flash
	6415  ROKR Z6 (MTP mode)
	6604  Washington CDMA Phone
	6631  CDC Modem
	7001  Q Smartphone
	fe01  StarTAC III MS900
22b9  eTurboTouch Technology, Inc.
	0006  Touch Screen
22ba  Technology Innovation Holdings, Ltd
2304  Pinnacle Systems, Inc.
	0109  Studio PCTV USB (SECAM)
	0110  Studio PCTV USB (PAL)
	0111  Miro PCTV USB
	0112  Studio PCTV USB (NTSC) with FM radio
	0201  Systems MovieBox Device
	0204  MovieBox USB_B
	0205  DVC 150B
	0206  Systems MovieBox Deluxe Device
	0207  Dazzle DVC90 Video Device
	0208  Studio PCTV USB2
	020e  PCTV 200e
	020f  PCTV 400e BDA Device
	0210  Studio PCTV USB (PAL) with FM radio
	0212  Studio PCTV USB (NTSC)
	0213  500-USB Device
	0214  Studio PCTV USB (PAL) with FM radio
	0216  PCTV 60e
	0219  PCTV 260e
	021a  Dazzle DVC100 Audio Device
	021b  Dazzle DVC130/DVC170
	021d  Dazzle DVC130
	021e  Dazzle DVC170
	021f  PCTV Sat HDTV Pro BDA Device
	0222  PCTV Sat Pro BDA Device
	0223  DazzleTV Sat BDA Device
	0225  Remote Kit Infrared Transceiver
	0226  PCTV 330e
	0227  PCTV for Mac, HD Stick
	0228  PCTV DVB-T Flash Stick
	0229  PCTV Dual DVB-T 2001e
	022a  PCTV 160e
	022b  PCTV 71e [Afatech AF9015]
	0232  PCTV 170e
	0236  PCTV 72e [DiBcom DiB7000PC]
	0237  PCTV 73e [DiBcom DiB7000PC]
	023a  PCTV 801e
	023b  PCTV 801e SE
	023d  PCTV 340e
	023e  PCTV 340e SE
	0300  Studio Linx Video input cable (NTSC)
	0301  Studio Linx Video input cable (PAL)
	0302  Dazzle DVC120
	0419  PCTV Bungee USB (PAL) with FM radio
	061d  PCTV Deluxe (NTSC) Device
	061e  PCTV Deluxe (PAL) Device
2318  Shining Technologies, Inc. [hex]
	0011  CitiDISK Jr. IDE Enclosure
2341  Arduino SA
	0001  Uno (CDC ACM)
	0010  Mega 2560 (CDC ACM)
	003b  Serial Adapter (CDC ACM)
	003f  Mega ADK (CDC ACM)
	0042  Mega 2560 R3 (CDC ACM)
	0043  Uno R3 (CDC ACM)
	0044  Mega ADK R3 (CDC ACM)
	0045  Serial R3 (CDC ACM)
2373  Pumatronix Ltda
	0001  5 MegaPixel Digital Still Camera [DSC5M]
2375  Digit@lway, Inc.
	0001  Digital Audio Player
2406  SANHO Digital Electronics Co., Ltd.
	6688  PD7X Portable Storage
2478  Tripp-Lite
	2008  U209-000-R Serial Port
2632  TwinMOS
	3209  7-in-1 Card Reader
2650  Electronics For Imaging, Inc. [hex]
2659  Sundtek
	1101  TNT DVB-T/DAB/DAB+/FM
2730  Citizen
	200f  CT-S310 Label printer
2735  DigitalWay
	0003  MPIO HS100
	1001  MPIO FY200
	1002  MPIO FL100
	1003  MPIO FD100
	1004  MPIO HD200
	1005  MPIO HD300
	1006  MPIO FG100
	1007  MPIO FG130
	1008  MPIO FY300
	1009  MPIO FY400
	100a  MPIO FL300
	100b  MPIO HS200
	100c  MPIO FL350
	100d  MPIO FY500
	100e  MPIO FY500
	100f  MPIO FY600
	1012  MPIO FL400
	1013  MPIO HD400
	1014  MPIO HD400
	1016  MPIO FY700
	1017  MPIO FY700
	1018  MPIO FY800
	1019  MPIO FY800
	101a  MPIO FY900
	101b  MPIO FY900
	102b  MPIO FL500
	102c  MPIO FL500
	103f  MPIO FY570
	1040  MPIO FY570
	1041  MPIO FY670
	1042  MPIO FY670
	1043  HCT HMD-180A
	1044  HCT HMD-180A
2770  NHJ, Ltd
	0a01  ScanJet 4600 series
	905c  Che-Ez Snap SNAP-U/Digigr8/Soundstar TDC-35
	9060  A130
	9120  Che-ez! Snap / iClick Tiny VGA Digital Camera
	9130  TCG 501
	913c  Argus DC-1730
	9150  Mini Cam
	9153  iClick 5X
	915d  Cyberpix S-210S / Little Tikes My Real Digital Camera
	930b  CCD Webcam(PC370R)
	930c  CCD Webcam(PC370R)
2821  ASUSTek Computer Inc.
	0161  WL-161 802.11b Wireless Adapter [SiS 162U]
	160f  WL-160g 802.11g Wireless Adapter [Envara WiND512]
	3300  WL-140 / Hawking HWU36D 802.11b Wireless Adapter [Intersil PRISM 3]
2899  Toptronic Industrial Co., Ltd
	012c  Camera Device
2c02  Planex Communications
	14ea  GW-US11H WLAN
2c1a  Dolphin Peripherals
	0000  Wireless Optical Mouse
2fb2  Fujitsu, Ltd
3125  Eagletron
	0001  TrackerPod Camera Stand
3176  Whanam Electronics Co., Ltd
3275  VidzMedia Pte Ltd
	4fb1  MonsterTV P2H
3334  AEI
	1701  Fast Ethernet
3340  Yakumo
	043a  Mio A701 DigiWalker PPCPhone
	0e3a  Pocket PC 300 GPS SL / Typhoon MyGuide 3500
	a0a3  deltaX 5 BT (D) PDA
3504  Micro Star
	f110  Security Key
3538  Power Quotient International Co., Ltd
	0001  Travel Flash
	0015  Mass Storge Device
	0022  Hi-Speed Mass Storage Device
	0042  Cool Drive U339 Flash Disk
	0054  Flash Drive (2GB)
3579  DIVA
	6901  Media Reader
3636  InVibro
3838  WEM
	0001  5-in-1 Card Reader
3923  National Instruments Corp.
	12c0  DAQPad-6020E
	12d0  DAQPad-6507
	12e0  NI 4350
	12f0  NI 5102
	1750  DAQPad-6508
	17b0  USB-ISA-Bridge
	1820  DAQPad-6020E (68 pin I/O)
	1830  DAQPad-6020E (BNC)
	1f00  DAQPad-6024E
	1f10  DAQPad-6024E
	1f20  DAQPad-6025E
	1f30  DAQPad-6025E
	1f40  DAQPad-6036E
	1f50  DAQPad-6036E
	2f80  DAQPad-6052E
	2f90  DAQPad-6052E
	702b  GPIB-USB-B
	703c  USB-485 RS485 Cable
	709b  GPIB-USB-HS
	7254  NI MIO (data acquisition card) firmware updater
	729e  USB-6251 (OEM) data acquisition card
40bb  I-O Data
	0a09  USB2.0-SCSI Bridge USB2-SC
4101  i-rocks
	1301  IR-2510 usb phone
4102  iRiver, Ltd.
	1001  iFP-100 series mp3 player
	1003  iFP-300 series mp3 player
	1005  iFP-500 series mp3 player
	1007  iFP-700 series mp3/ogg vorbis player
	1008  iFP-800 series mp3/ogg vorbis player
	100a  iFP-1000 series mp3/ogg vorbis player
	1014  T20 series mp3/ogg vorbis player (ums firmware)
	1019  T30
	1034  T60
	1040  M1Player
	1041  E100 (ums)
	1101  iFP-100 series mp3 player (ums firmware)
	1103  iFP-300 series mp3 player (ums firmware)
	1105  iFP-500 series mp3 player (ums firmware)
	1113  T10 (alternate)
	1117  T10
	1119  T30 series mp3/ogg/wma player
	1141  E100 (mtp)
	2002  H10 6GB
	2101  H10 20GB (mtp)
	2102  H10 5GB (mtp)
	2105  H10 5/6GB (mtp)
413c  Dell Computer Corp.
	0000  DRAC 5 Virtual Keyboard and Mouse
	0001  DRAC 5 Virtual Media
	0058  Port Replicator
	1001  Keyboard Hub
	1002  Keyboard Hub
	1003  Keyboard Hub
	1005  Multimedia Pro Keyboard Hub
	2001  Keyboard HID Support
	2002  SK-8125 Keyboard
	2003  Keyboard
	2005  RT7D50 Keyboard
	2010  Keyboard
	2011  Multimedia Pro Keyboard
	2100  SK-3106 Keyboard
	2101  SmartCard Reader Keyboard
	2105  Model L100 Keyboard
	2106  Dell QuietKey Keyboard
	2500  DRAC4 Remote Access Card
	2513  internal USB Hub of E-Port Replicator
	3010  Optical Wheel Mouse
	3012  Optical Wheel Mouse
	3016  Optical 5-Button Wheel Mouse
	3200  Mouse
	4001  Axim X5
	4002  Axim X3
	4003  Axim X30
	4004  Axim Sync
	4005  Axim Sync
	4006  Axim Sync
	4007  Axim Sync
	4008  Axim Sync
	4009  Axim Sync
	4011  Axim X51v
	5103  AIO Printer A940
	5105  AIO Printer A920
	5107  AIO Printer A960
	5109  Photo AIO Printer 922
	5110  Photo AIO Printer 962
	5111  Photo AIO Printer 942
	5112  Photo AIO Printer 924
	5113  Photo AIO Printer 944
	5114  Photo AIO Printer 964
	5115  Photo AIO Printer 926
	5116  AIO Printer 946
	5117  Photo AIO Printer 966
	5118  AIO 810
	5124  Laser MFP 1815
	5128  Photo AIO 928
	5200  Laser Printer
	5202  Printing Support
	5203  Printing Support
	5210  Printing Support
	5211  1110 Laser Printer
	5220  Laser MFP 1600n
	5225  Printing Support
	5226  Printing Support
	5300  Laser Printer
	5400  Laser Printer
	5401  Laser Printer
	5513  WLA3310 Wireless Adapter [Intersil ISL3887]
	5601  Laser Printer 3100cn
	5602  Laser Printer 3000cn
	5631  Laser Printer 5100cn
	5905  Printing Support
	8000  BC02 Bluetooth Adapter
	8010  TrueMobile Bluetooth Module in
	8100  TrueMobile 1180 802.11b Adapter [Intersil PRISM 3]
	8102  TrueMobile 1300 802.11g Wireless Adapter [Intersil ISL3880]
	8103  Wireless 350 Bluetooth
	8104  Wireless 1450 Dual-band (802.11a/b/g) Adapter [Intersil ISL3887]
	8105  U2 in HID - Driver
	8106  Wireless 350 Bluetooth Internal Card in
	8110  Wireless 3xx Bluetooth Internal Card
	8111  Wireless 3xx Bluetooth Internal Card in
	8114  Wireless 5700 Mobile Broadband (CDMA EV-DO) Minicard Modem
	8115  Wireless 5500 Mobile Broadband (3G HSDPA) Minicard Modem
	8116  Wireless 5505 Mobile Broadband (3G HSDPA) Minicard Modem
	8117  Wireless 5700 Mobile Broadband (CDMA EV-DO) Expresscard Modem
	8118  Wireless 5510 Mobile Broadband (3G HSDPA) Expresscard Status Port
	8120  Bluetooth adapter
	8121  Eastfold in HID
	8122  Eastfold in DFU
	8123  eHome Infrared Receiver
	8124  eHome Infrared Receiver
	8126  Wireless 355 Bluetooth
	8127  Wireless 355 Module with Bluetooth 2.0 + EDR Technology.
	8128  Wireless 5700-Sprint Mobile Broadband (CDMA EV-DO) Mini-Card Status Port
	8129  Wireless 5700-Telus Mobile Broadband (CDMA EV-DO) Mini-Card Status Port
	8131  Wireless 360 Bluetooth 2.0 + EDR module.
	8133  Wireless 5720 VZW Mobile Broadband (EVDO Rev-A) Minicard GPS Port
	8134  Wireless 5720 Sprint Mobile Broadband (EVDO Rev-A) Minicard Status Port
	8135  Wireless 5720 TELUS Mobile Broadband (EVDO Rev-A) Minicard Diagnostics Port
	8136  Wireless 5520 Cingular Mobile Broadband (3G HSDPA) Minicard Diagnostics Port
	8137  Wireless 5520 Voda L Mobile Broadband (3G HSDPA) Minicard Status Port
	8138  Wireless 5520 Voda I Mobile Broadband (3G HSDPA) Minicard EAP-SIM Port
	8140  Wireless 360 Bluetooth
	8142  Mobile 360 in DFU
	8147  F3507g Mobile Broadband Module
	8156  Wireless 370 Bluetooth Mini-card
	8157  Integrated Keyboard
	8158  Integrated Touchpad / Trackstick
	8160  Wireless 365 Bluetooth
	8161  Integrated Keyboard
	8162  Integrated Touchpad [Synaptics]
	8171  Gobi Wireless Modem (QDL mode)
	8172  Gobi Wireless Modem
	8183  F3607gw Mobile Broadband Module
	8184  F3607gw v2 Mobile Broadband Module
	8185  Gobi 2000 Wireless Modem (QDL mode)
	8186  Gobi 2000 Wireless Modem
	8187  DW375 Bluetooth Module
	8501  Bluetooth Adapter
	9500  USB CP210x UART Bridge Controller [DW700]
	a001  Hub
	a005  Internal 2.0 Hub
	a700  Hub (in 1905FP LCD Monitor)
4146  USBest Technology
	9281  Iomega Micro Mini 128MB Flash Drive
	ba01  Intuix Flash Drive
4242  USB Design by Example
	4201  Buttons and Lights HID device
	4220  Echo 1 Camera
4317  Broadcom Corp.
	0700  U.S. Robotics USR5426 802.11g Adapter
	0701  U.S. Robotics USR5425 Wireless MAXg Adapter
	0711  Belkin F5D7051 v3000 802.11g
	0720  Dynex DX-BUSB
4348  WinChipHead
	5523  USB->RS 232 adapter with Prolifec PL 2303 chipset
	5537  13.56Mhz RFID Card Reader and Writer
	5584  CH34x printer adapter cable
4572  Shuttle, Inc.
	4572  Shuttle PN31 Remote
4586  Panram
	1026  Crystal Bar Flash Drive
4670  EMS Production
	9394  Game Cube USB Memory Adaptor 64M
4752  Miditech
	0011  Midistart-2
4757  GW Instek
	2009  PEL-2000 Series Electronic Load (CDC)
	2010  PEL-2000 Series Electronic Load (CDC)
4766  Aceeca
	0001  MEZ1000 RDA
4855  Memorex
	7288  Ultra Traveldrive 160G 2.5" HDD
4971  SimpleTech
	cb01  SP-U25/120G
	ce17  1TB SimpleDrive II USB External Hard Drive
5032  Grandtec
	0bb8  Grandtec USB1.1 DVB-T (cold)
	0bb9  Grandtec USB1.1 DVB-T (warm)
	0fa0  Grandtec USB1.1 DVB-T (cold)
	0fa1  Grandtec USB1.1 DVB-T (warm)
5041  Linksys (?)
	2234  WUSB54G v1 802.11g Adapter [Intersil ISL3886]
	2235  WUSB54GP v1 802.11g Adapter [Intersil ISL3886]
50c2  Averatec (?)
	4013  WLAN Adapter
5173  Sweex
	1809  ZD1211
5219  I-Tetra
	1001  Cetus CDC Device
5345  Owon
	1234  PDS6062T Oscilloscope
544d  Transmeta Corp.
5543  UC-Logic Technology Corp.
	0002  SuperPen WP3325U Tablet
	0003  Tablet WP4030U
	0004  Tablet WP5540U
	0005  Tablet WP8060U
	0041  Genius PenSketch 6x8 Tablet
	0042  Tablet PF1209
	0064  Aiptek HyperPen 10000U
5555  Epiphan Systems Inc.
	1110  VGA2USB
	1120  KVM2USB
	2222  DVI2USB
	3333  VGA2USB Pro
	3337  KVM2USB Pro
	3340  VGA2USB LR
	3344  KVM2USB LR
	3411  DVI2USB Solo
	3422  DVI2USB Duo
55aa  OnSpec Electronic, Inc.
	0015  Hard Drive
	0102  SuperDisk
	0103  IDE Hard Drive
	0201  DDI to Reader-19
	1234  ATAPI Bridge
	a103  Sandisk SDDR-55 SmartMedia Card Reader
	b000  USB to CompactFlash Card Reader
	b004  OnSpec MMC/SD Reader/Writer
	b00b  USB to Memory Stick Card Reader
	b00c  USB to SmartMedia Card Reader
	b012  Mitsumi FA402M 8-in-2 Card Reader
	b200  Compact Flash Reader
	b204  MMC/ SD Reader
	b207  Memory Stick Reader
5656  Uni-Trend Group Limited
	0832  UT2000/UT3000 Digital Storage Oscilloscope
595a  IRTOUCHSYSTEMS Co. Ltd.
	0001  Touchscreen
5986  Acer, Inc
	0100  Orbicam
	0101  USB2.0 Camera
	0102  Crystal Eye Webcam
	01a6  Lenovo Integrated Webcam
	01a7  Lenovo Integrated Webcam
	01a9  Lenovo Integrated Webcam
	0200  OrbiCam
	0203  BisonCam NB Pro 1300
	0241  BisonCam, NB Pro
	02d0  Lenovo Integrated Webcam [R5U877]
	03d0  Lenovo Integrated Webcam [R5U877]
5a57  Zinwell
	0260  RT2570
	0280  802.11a/b/g/n USB Wireless LAN Card
	0282  802.11b/g/n USB Wireless LAN Card
	0283  802.11b/g/n USB Wireless LAN Card
	0284  802.11a/b/g/n USB Wireless LAN Card
	0290  ZW-N290 802.11n [Realtek RTL8192SU]
	5257  Metronic 495257 wifi 802.11ng
6000  Beholder International Ltd.
	dec0  TV Wander
	dec1  TV Voyage
601a  Ingenic Semiconductor Ltd.
	4740  XBurst Jz4740 boot mode
6189  Sitecom
	182d  USB 2.0 Ethernet
	2068  USB to serial cable (v2)
6253  TwinHan Technology Co., Ltd
	0100  Ir reciver f. remote control
636c  CoreLogic, Inc.
6472  Unknown (Sony?)
	01c8  PlayStation Portable [Mass Storage]
6547  Arkmicro Technologies Inc.
	0232  ARK3116 Serial
6615  IRTOUCHSYSTEMS Co. Ltd.
	0001  Touchscreen
6666  Prototype product Vendor ID
	0667  WiseGroup Smart Joy PSX, PS-PC Smart JoyPad
	2667  JCOP BlueZ Smartcard reader
	8802  SmartJoy Dual Plus PS2 converter
	8804  WiseGroup SuperJoy Box 5
6677  WiseGroup, Ltd.
	8802  SmartJoy Dual Plus PS2 converter
	8811  Deluxe Dance Mat
6891  3Com
	a727  3CRUSB10075 802.11bg [ZyDAS ZD1211]
695c  Opera1
	3829  Opera1 DVB-S (warm state)
6993  Yealink Network Technology Co., Ltd.
	b001  VoIP Phone
6a75  Shanghai Jujo Electronics Co., Ltd
7104  CME (Central Music Co.)
	2202  UF5/UF6/UF7/UF8 MIDI Master Keyboard
726c  StackFoundry LLC
	2149  EntropyKing Random Number Generator
734c  TBS Technologies China
	5920  Q-Box II DVB-S2 HD
	5928  Q-Box II DVB-S2 HD
7392  Edimax Technology Co., Ltd
	7711  EW-7711UTn nLite Wireless Adapter [Ralink RT2870]
	7717  EW-7717UN 802.11n Wireless Adapter [Ralink RT2870]
	7718  EW-7718UN 802.11n Wireless Adapter [Ralink RT2870]
	7722  EW-7722UTn 802.11n Wireless Adapter [Ralink RT307x]
	7811  EW-7811Un 802.11n Wireless Adapter [Realtek RTL8188CUS]
8086  Intel Corp.
	0001  AnyPoint (TM) Home Network 1.6 Mbps Wireless Adapter
	0044  CPU DRAM Controller
	0046  HD Graphics
	0100  Personal Audio Player 3000
	0101  Personal Audio Player 3000
	0110  Easy PC Camera
	0120  PC Camera CS120
	0180  WiMAX Connection 2400m
	0181  WiMAX Connection 2400m
	0182  WiMAX Connection 2400m
	0186  WiMAX Connection 2400m
	0188  WiMAX Connection 2400m
	0200  AnyPoint(TM) Wireless II Network 11Mbps Adapter [Atmel AT76C503A]
	0431  Intel Pro Video PC Camera
	0510  Digital Movie Creator
	0630  Pocket PC Camera
	0780  CS780 Microphone Input
	07d3  BLOB boot loader firmware
	0dad  Cherry MiniatureCard Keyboard
	1010  AnyPoint(TM) Home Network 10 Mbps Phoneline Adapter
	110a  Bluetooth Controller from (Ericsson P4A)
	110b  Bluetooth Controller from (Intel/CSR)
	1110  PRO/Wireless LAN Module
	1111  PRO/Wireless 2011B 802.11b Adapter [Intersil PRISM 2.5]
	1134  Hollister Mobile Monitor
	1139  In-Target Probe (ITP)
	1234  Prototype Reader/Writer
	1403  WiMAX Connection 2400m
	1405  WiMAX Connection 2400m
	1406  WiMAX Connection 2400m
	2448  82801 PCI Bridge
	3100  PRO/DSL 3220 Modem - WAN
	3101  PRO/DSL 3220 Modem
	3240  AnyPoint® 3240 Modem - WAN
	3241  AnyPoint® 3240 Modem
	8602  Miniature Card Slot
	9303  Intel 8x930Hx Hub
	9500  CE 9500 DVB-T
	9890  82930 Test Board
	beef  SCM Miniature Card Reader/Writer
	c013  Wireless HID Station
	f001  XScale PXA27x Bulverde flash
	f1a5  Z-U130 [Value Solid State Drive]
8087  Intel Corp.
	0020  Integrated Rate Matching Hub
	0024  Integrated Rate Matching Hub
80ee  VirtualBox
	0021  USB Tablet
8282  Keio
	3201  Retro Adapter
	3301  Retro Adapter Mouse
8341  EGO Systems, Inc.
	2000  Flashdisk
9016  Sitecom
	182d  WL-022 802.11b Adapter
9022  TeVii Technology Ltd.
	d630  DVB-S S630
	d650  DVB-S2 S650
	d660  DVB-S2 S660
9148  GeoLab, Ltd
# All of GeoLab's devices share the same ID 0004.
	0004  R3 Compatible Device
9710  MosChip Semiconductor
	7703  MCS7703 Serial Port Adapter
	7705  MCS7705 Parallel port adapter
	7715  MCS7715 Parallel and serial port adapter
	7717  MCS7717 3-port hub with serial and parallel adapter
	7720  MCS7720 Dual serial port adapter
	7730  MCS7730 10/100 Mbps Ethernet adapter
	7780  MCS7780 4Mbps Fast IrDA Adapter
	7830  MCS7830 10/100 Mbps Ethernet adapter
	7832  MCS7832 10/100 Mbps Ethernet adapter
	7840  MCS7820/MCS7840 2/4 port serial adapter
99fa  Grandtec
	8988  V.cap Camera Device
9ac4  J. Westhues
	4b8f  ProxMark-3 RFID Instrument
a128  AnMo Electronics Corp. / Dino-Lite (?)
	0610  Dino-Lite Digital Microscope (SN9C201 + HV7131R)
	0611  Dino-Lite Digital Microscope (SN9C201 + HV7131R)
	0612  Dino-Lite Digital Microscope (SN9C120 + HV7131R)
	0613  Dino-Lite Digital Microscope (SN9C201 + HV7131R)
	0614  Dino-Lite Digital Microscope (SN9C201 + MI1310/MT9M111)
	0615  Dino-Lite Digital Microscope (SN9C201 + MI1310/MT9M111)
	0616  Dino-Lite Digital Microscope (SN9C120 + HV7131R)
	0617  Dino-Lite Digital Microscope (SN9C201 + MI1310/MT9M111)
	0618  Dino-Lite Digital Microscope (SN9C201 + HV7131R)
a168  AnMo Electronics Corporation
	0610  Dino-Lite Digital Microscope
	0611  Dino-Lite Digital Microscope
	0613  Dino-Lite Digital Microscope
	0614  Dino-Lite Pro Digital Microscope
	0615  Dino-Lite Pro Digital Microscope
	0617  Dino-Lite Pro Digital Microscope
	0618  Dino-Lite Digital Microscope
a600  Asix
	e110  OK1ZIA Davac 4.x
a727  3Com
	6893  3CRUSB20075 OfficeConnect Wireless 108Mbps 11g Adapter [Atheros AR5523]
	6895  AR5523
	6897  AR5523
abcd  Unknown
	cdee  Petcam
c251  Keil Software, Inc.
	2710  ULink
cace  CACE Technologies Inc.
	0002  AirPCAP Classic 802.11 packet capture adapter
	0300  AirPcap NX [Atheros AR9001U-(2)NG]
d209  Ultimarc
	0301  I-PAC Arcade Control Interface
	0501  Ultra-Stik Ultimarc Ultra-Stik Player 1
e4e4  Xorcom Ltd.
	1130  Astribank series
	1131  Astribank series
	1132  Astribank series
	1140  Astribank series
	1141  Astribank series
	1142  Astribank series
	1150  Astribank series
	1151  Astribank series
	1152  Astribank series
	1160  Astribank 2 series
	1161  Astribank 2 series
	1162  Astribank 2 series
eb03  MakingThings
	0920  Make Controller Kit
eb1a  eMPIA Technology, Inc.
	17de  KWorld V-Stream XPERT DTV - DVB-T USB cold
	17df  KWorld V-Stream XPERT DTV - DVB-T USB warm
	2571  M035 Compact Web Cam
	2710  SilverCrest Webcam
	2750  ECS Elitegroup G220 integrated Webcam
	2761  EeePC 701 integrated Webcam
	2776  Combined audio and video input device
	2800  Terratec Cinergy 200
	2801  GrabBeeX+ Video Encoder
	2863  Video Grabber
	2870  Pinnacle PCTV Stick
	2881  EM2881 Video Controller
	50a3  Gadmei UTV380 TV Box
	50a6  Gadmei UTV330 TV Box
	e355  KWorld DVB-T 355U Digital TV Dongle
eb2a  KWorld
f003  Hewlett Packard
	6002  PhotoSmart C500
f4ec  Atten Electronics / Siglent Technologies
	ee38  Digital Storage Oscilloscope

# List of known device classes, subclasses and protocols

# Syntax:
# C class  class_name
#	subclass  subclass_name			<-- single tab
#		protocol  protocol_name		<-- two tabs

C 00  (Defined at Interface level)
C 01  Audio
	01  Control Device
	02  Streaming
	03  MIDI Streaming
C 02  Communications
	01  Direct Line
	02  Abstract (modem)
		00  None
		01  AT-commands (v.25ter)
		02  AT-commands (PCCA101)
		03  AT-commands (PCCA101 + wakeup)
		04  AT-commands (GSM)
		05  AT-commands (3G)
		06  AT-commands (CDMA)
		fe  Defined by command set descriptor
		ff  Vendor Specific (MSFT RNDIS?)
	03  Telephone
	04  Multi-Channel
	05  CAPI Control
	06  Ethernet Networking
	07  ATM Networking
	08  Wireless Handset Control
	09  Device Management
	0a  Mobile Direct Line
	0b  OBEX
	0c  Ethernet Emulation
		07  Ethernet Emulation (EEM)
C 03  Human Interface Device
	00  No Subclass
		00  None
		01  Keyboard
		02  Mouse
	01  Boot Interface Subclass
		00  None
		01  Keyboard
		02  Mouse
C 05  Physical Interface Device
C 06  Imaging
	01  Still Image Capture
		01  Picture Transfer Protocol (PIMA 15470)
C 07  Printer
	01  Printer
		00  Reserved/Undefined
		01  Unidirectional
		02  Bidirectional
		03  IEEE 1284.4 compatible bidirectional
		ff  Vendor Specific
C 08  Mass Storage
	01  RBC (typically Flash)
		00  Control/Bulk/Interrupt
		01  Control/Bulk
		50  Bulk-Only
	02  SFF-8020i, MMC-2 (ATAPI)
	03  QIC-157
	04  Floppy (UFI)
		00  Control/Bulk/Interrupt
		01  Control/Bulk
		50  Bulk-Only
	05  SFF-8070i
	06  SCSI
		00  Control/Bulk/Interrupt
		01  Control/Bulk
		50  Bulk-Only
C 09  Hub
	00  Unused
		00  Full speed (or root) hub
		01  Single TT
		02  TT per port
C 0a  CDC Data
	00  Unused
		30  I.430 ISDN BRI
		31  HDLC
		32  Transparent
		50  Q.921M
		51  Q.921
		52  Q.921TM
		90  V.42bis
		91  Q.932 EuroISDN
		92  V.120 V.24 rate ISDN
		93  CAPI 2.0
		fd  Host Based Driver
		fe  CDC PUF
		ff  Vendor specific
C 0b  Chip/SmartCard
C 0d  Content Security
C 0e  Video
	00  Undefined
	01  Video Control
	02  Video Streaming
	03  Video Interface Collection
C 58  Xbox
	42  Controller
C dc  Diagnostic
	01  Reprogrammable Diagnostics
		01  USB2 Compliance
C e0  Wireless
	01  Radio Frequency
		01  Bluetooth
		02  Ultra WideBand Radio Control
		03  RNDIS
	02  Wireless USB Wire Adapter
		01  Host Wire Adapter Control/Data Streaming
		02  Device Wire Adapter Control/Data Streaming
		03  Device Wire Adapter Isochronous Streaming
C ef  Miscellaneous Device
	01  ?
		01  Microsoft ActiveSync
		02  Palm Sync
	02  ?
		01  Interface Association
		02  Wire Adapter Multifunction Peripheral
	03  ?
		01  Cable Based Association
C fe  Application Specific Interface
	01  Device Firmware Update
	02  IRDA Bridge
	03  Test and Measurement
		01  TMC
		02  USB488
C ff  Vendor Specific Class
	ff  Vendor Specific Subclass
		ff  Vendor Specific Protocol

# List of Audio Class Terminal Types

# Syntax:
# AT terminal_type  terminal_type_name

AT 0100  USB Undefined
AT 0101  USB Streaming
AT 01ff  USB Vendor Specific
AT 0200  Input Undefined
AT 0201  Microphone
AT 0202  Desktop Microphone
AT 0203  Personal Microphone
AT 0204  Omni-directional Microphone
AT 0205  Microphone Array
AT 0206  Processing Microphone Array
AT 0300  Output Undefined
AT 0301  Speaker
AT 0302  Headphones
AT 0303  Head Mounted Display Audio
AT 0304  Desktop Speaker
AT 0305  Room Speaker
AT 0306  Communication Speaker
AT 0307  Low Frequency Effects Speaker
AT 0400  Bidirectional Undefined
AT 0401  Handset
AT 0402  Headset
AT 0403  Speakerphone, no echo reduction
AT 0404  Echo-suppressing speakerphone
AT 0405  Echo-canceling speakerphone
AT 0500  Telephony Undefined
AT 0501  Phone line
AT 0502  Telephone
AT 0503  Down Line Phone
AT 0600  External Undefined
AT 0601  Analog Connector
AT 0602  Digital Audio Interface
AT 0603  Line Connector
AT 0604  Legacy Audio Connector
AT 0605  SPDIF interface
AT 0606  1394 DA stream
AT 0607  1394 DV stream soundtrack
AT 0700  Embedded Undefined
AT 0701  Level Calibration Noise Source
AT 0702  Equalization Noise
AT 0703  CD Player
AT 0704  DAT
AT 0705  DCC
AT 0706  MiniDisc
AT 0707  Analog Tape
AT 0708  Phonograph
AT 0709  VCR Audio
AT 070a  Video Disc Audio
AT 070b  DVD Audio
AT 070c  TV Tuner Audio
AT 070d  Satellite Receiver Audio
AT 070e  Cable Tuner Audio
AT 070f  DSS Audio
AT 0710  Radio Receiver
AT 0711  Radio Transmitter
AT 0712  Multitrack Recorder
AT 0713  Synthesizer

# List of HID Descriptor Types

# Syntax:
# HID descriptor_type  descriptor_type_name

HID 21  HID
HID 22  Report
HID 23  Physical

# List of HID Descriptor Item Types
# Note: 2 bits LSB encode data length following

# Syntax:
# R item_type  item_type_name

R 04  Usage Page
R 08  Usage
R 14  Logical Minimum
R 18  Usage Minimum
R 24  Logical Maximum
R 28  Usage Maximum
R 34  Physical Minimum
R 38  Designator Index
R 44  Physical Maximum
R 48  Designator Minimum
R 54  Unit Exponent
R 58  Designator Maximum
R 64  Unit
R 74  Report Size
R 78  String Index
R 80  Input
R 84  Report ID
R 88  String Minimum
R 90  Output
R 94  Report Count
R 98  String Maximum
R a0  Collection
R a4  Push
R a8  Delimiter
R b0  Feature
R b4  Pop
R c0  End Collection

# List of Physical Descriptor Bias Types

# Syntax:
# BIAS item_type  item_type_name

BIAS 0  Not Applicable
BIAS 1  Right Hand
BIAS 2  Left Hand
BIAS 3  Both Hands
BIAS 4  Either Hand

# List of Physical Descriptor Item Types

# Syntax:
# PHY item_type  item_type_name

PHY 00  None
PHY 01  Hand
PHY 02  Eyeball
PHY 03  Eyebrow
PHY 04  Eyelid
PHY 05  Ear
PHY 06  Nose
PHY 07  Mouth
PHY 08  Upper Lip
PHY 09  Lower Lip
PHY 0a  Jaw
PHY 0b  Neck
PHY 0c  Upper Arm
PHY 0d  Elbow
PHY 0e  Forearm
PHY 0f  Wrist
PHY 10  Palm
PHY 11  Thumb
PHY 12  Index Finger
PHY 13  Middle Finger
PHY 14  Ring Finger
PHY 15  Little Finger
PHY 16  Head
PHY 17  Shoulder
PHY 18  Hip
PHY 19  Waist
PHY 1a  Thigh
PHY 1b  Knee
PHY 1c  calf
PHY 1d  Ankle
PHY 1e  Foot
PHY 1f  Heel
PHY 20  Ball of Foot
PHY 21  Big Toe
PHY 22  Second Toe
PHY 23  Third Toe
PHY 24  Fourth Toe
PHY 25  Fifth Toe
PHY 26  Brow
PHY 27  Cheek

# List of HID Usages

# Syntax:
# HUT hi  _usage_page  hid_usage_page_name
#	hid_usage  hid_usage_name

HUT 00  Undefined
HUT 01  Generic Desktop Controls
	000  Undefined
	001  Pointer
	002  Mouse
	004  Joystick
	005  Gamepad
	006  Keyboard
	007  Keypad
	008  Multi-Axis Controller
	030  Direction-X
	031  Direction-Y
	032  Direction-Z
	033  Rotate-X
	034  Rotate-Y
	035  Rotate-Z
	036  Slider
	037  Dial
	038  Wheel
	039  Hat Switch
	03a  Counted Buffer
	03b  Byte Count
	03c  Motion Wakeup
	03d  Start
	03e  Select
	040  Vector-X
	041  Vector-Y
	042  Vector-Z
	043  Vector-X relative Body
	044  Vector-Y relative Body
	045  Vector-Z relative Body
	046  Vector
	080  System Control
	081  System Power Down
	082  System Sleep
	083  System Wake Up
	084  System Context Menu
	085  System Main Menu
	086  System App Menu
	087  System Menu Help
	088  System Menu Exit
	089  System Menu Select
	08a  System Menu Right
	08b  System Menu Left
	08c  System Menu Up
	08d  System Menu Down
	090  Direction Pad Up
	091  Direction Pad Down
	092  Direction Pad Right
	093  Direction Pad Left
HUT 02  Simulation Controls
	000  Undefined
	001  Flight Simulation Device
	002  Automobile Simulation Device
	003  Tank Simulation Device
	004  Spaceship Simulation Device
	005  Submarine Simulation Device
	006  Sailing Simulation Device
	007  Motorcycle Simulation Device
	008  Sports Simulation Device
	009  Airplane Simualtion Device
	00a  Helicopter Simulation Device
	00b  Magic Carpet Simulation Device
	00c  Bicycle Simulation Device
	020  Flight Control Stick
	021  Flight Stick
	022  Cyclic Control
	023  Cyclic Trim
	024  Flight Yoke
	025  Track Control
	0b0  Aileron
	0b1  Aileron Trim
	0b2  Anti-Torque Control
	0b3  Autopilot Enable
	0b4  Chaff Release
	0b5  Collective Control
	0b6  Dive Break
	0b7  Electronic Countermeasures
	0b8  Elevator
	0b9  Elevator Trim
	0ba  Rudder
	0bb  Throttle
	0bc  Flight COmmunications
	0bd  Flare Release
	0be  Landing Gear
	0bf  Toe Break
	0c0  Trigger
	0c1  Weapon Arm
	0c2  Weapons Select
	0c3  Wing Flaps
	0c4  Accelerator
	0c5  Brake
	0c6  Clutch
	0c7  Shifter
	0c8  Steering
	0c9  Turret Direction
	0ca  Barrel Elevation
	0cb  Drive Plane
	0cc  Ballast
	0cd  Bicylce Crank
	0ce  Handle Bars
	0cf  Front Brake
	0d0  Rear Brake
HUT 03  VR Controls
	000  Unidentified
	001  Belt
	002  Body Suit
	003  Flexor
	004  Glove
	005  Head Tracker
	006  Head Mounted Display
	007  Hand Tracker
	008  Oculometer
	009  Vest
	00a  Animatronic Device
	020  Stereo Enable
	021  Display Enable
HUT 04  Sport Controls
	000  Unidentified
	001  Baseball Bat
	002  Golf Club
	003  Rowing Machine
	004  Treadmill
	030  Oar
	031  Slope
	032  Rate
	033  Stick Speed
	034  Stick Face Angle
	035  Stick Heel/Toe
	036  Stick Follow Through
	038  Stick Type
	039  Stick Height
	047  Stick Temp
	050  Putter
	051  1 Iron
	052  2 Iron
	053  3 Iron
	054  4 Iron
	055  5 Iron
	056  6 Iron
	057  7 Iron
	058  8 Iron
	059  9 Iron
	05a  10 Iron
	05b  11 Iron
	05c  Sand Wedge
	05d  Loft Wedge
	05e  Power Wedge
	05f  1 Wood
	060  3 Wood
	061  5 Wood
	062  7 Wood
	063  9 Wood
HUT 05  Game Controls
	000  Undefined
	001  3D Game Controller
	002  Pinball Device
	003  Gun Device
	020  Point Of View
	021  Turn Right/Left
	022  Pitch Right/Left
	023  Roll Forward/Backward
	024  Move Right/Left
	025  Move Forward/Backward
	026  Move Up/Down
	027  Lean Right/Left
	028  Lean Forward/Backward
	029  Height of POV
	02a  Flipper
	02b  Secondary Flipper
	02c  Bump
	02d  New Game
	02e  Shoot Ball
	02f  Player
	030  Gun Bolt
	031  Gun Clip
	032  Gun Selector
	033  Gun Single Shot
	034  Gun Burst
	035  Gun Automatic
	036  Gun Safety
	037  Gamepad Fire/Jump
	038  Gamepad Fun
	039  Gamepad Trigger
HUT 07  Keyboard
	000  No Event
	001  Keyboard ErrorRollOver
	002  Keyboard POSTfail
	003  Keyboard Error Undefined
	004  A
	005  B
	006  C
	007  D
	008  E
	009  F
	00a  G
	00b  H
	00c  I
	00d  J
	00e  K
	00f  L
	010  M
	011  N
	012  O
	013  P
	014  Q
	015  R
	016  S
	017  T
	018  U
	019  V
	01a  W
	01b  X
	01c  Y
	01d  Z
	01e  1 and ! (One and Exclamation)
	01f  2 and @ (2 and at)
	020  3 and # (3 and Hash)
	021  4 and $ (4 and Dollar Sign)
	022  5 and % (5 and Percent Sign)
	023  6 and ^ (6 and circumflex)
	024  7 and & (Seven and Ampersand)
	025  8 and * (Eight and asterisk)
	026  9 and ( (Nine and Parenthesis Left)
	027  0 and ) (Zero and Parenthesis Right)
	028  Return (Enter)
	029  Escape
	02a  Delete (Backspace)
	02b  Tab
	02c  Space Bar
	02d  - and _ (Minus and underscore)
	02e  = and + (Equal and Plus)
	02f  [ and { (Bracket and Braces Left)
	030  ] and } (Bracket and Braces Right)
	031  \ and | (Backslash and Bar)
	032  # and ~ (Hash and Tilde, Non-US Keyboard near right shift)
	033  ; and : (Semicolon and Colon)
	034  � and " (Accent Acute and Double Quotes)
	035  ` and ~ (Accent Grace and Tilde)
	036  , and < (Comma and Less)
	037  . and > (Period and Greater)
	038  / and ? (Slash and Question Mark)
	039  Caps Lock
	03a  F1
	03b  F2
	03c  F3
	03d  F4
	03e  F5
	03f  F6
	040  F7
	041  F8
	042  F9
	043  F10
	044  F11
	045  F12
	046  Print Screen
	047  Scroll Lock
	048  Pause
	049  Insert
	04a  Home
	04b  Page Up
	04c  Delete Forward (without Changing Position)
	04d  End
	04e  Page Down
	04f  Right Arrow
	050  Left Arrow
	051  Down Arrow
	052  Up Arrow
	053  Num Lock and Clear
	054  Keypad / (Division Sign)
	055  Keypad * (Multiplication Sign)
	056  Keypad - (Subtraction Sign)
	057  Keypad + (Addition Sign)
	058  Keypad Enter
	059  Keypad 1 and END
	05a  Keypad 2 and Down Arrow
	05b  Keypad 3 and Page Down
	05c  Keypad 4 and Left Arrow
	05d  Keypad 5 (Tactilei Raised)
	05f  Keypad 6 and Right Arrow
	060  Keypad 7 and Home
	061  Keypad 8 and Up Arrow
	062  Keypad 8 and Page Up
	063  Keypad . (decimal delimiter) and Delete
	064  \ and | (Backslash and Bar, UK and Non-US Keyboard near left shift)
	065  Keyboard Application (Windows Key for Win95 or Compose)
	066  Power (not a key)
	067  Keypad = (Equal Sign)
	068  F13
	069  F14
	06a  F15
	06b  F16
	06c  F17
	06d  F18
	06e  F19
	06f  F20
	070  F21
	071  F22
	072  F23
	073  F24
	074  Execute
	075  Help
	076  Menu
	077  Select
	078  Stop
	079  Again
	07a  Undo
	07b  Cut
	07c  Copy
	07d  Paste
	07e  Find
	07f  Mute
	080  Volume Up
	081  Volume Down
	082  Locking Caps Lock
	083  Locking Num Lock
	084  Locking Scroll Lock
	085  Keypad Comma
	086  Keypad Equal Sign (AS/400)
	087  International 1 (PC98)
	088  International 2 (PC98)
	089  International 3 (PC98)
	08a  International 4 (PC98)
	08b  International 5 (PC98)
	08c  International 6 (PC98)
	08d  International 7 (Toggle Single/Double Byte Mode)
	08e  International 8
	08f  International 9
	090  LANG 1 (Hangul/English Toggle, Korea)
	091  LANG 2 (Hanja Conversion, Korea)
	092  LANG 3 (Katakana, Japan)
	093  LANG 4 (Hiragana, Japan)
	094  LANG 5 (Zenkaku/Hankaku, Japan)
	095  LANG 6
	096  LANG 7
	097  LANG 8
	098  LANG 9
	099  Alternate Erase
	09a  SysReq/Attention
	09b  Cancel
	09c  Clear
	09d  Prior
	09e  Return
	09f  Separator
	0a0  Out
	0a1  Open
	0a2  Clear/Again
	0a3  CrSel/Props
	0a4  ExSel
	0e0  Control Left
	0e1  Shift Left
	0e2  Alt Left
	0e3  GUI Left
	0e4  Control Right
	0e5  Shift Right
	0e6  Alt Rigth
	0e7  GUI Right
HUT 08  LEDs
	000  Undefined
	001  NumLock
	002  CapsLock
	003  Scroll Lock
	004  Compose
	005  Kana
	006  Power
	007  Shift
	008  Do not disturb
	009  Mute
	00a  Tone Enabke
	00b  High Cut Filter
	00c  Low Cut Filter
	00d  Equalizer Enable
	00e  Sound Field ON
	00f  Surround On
	010  Repeat
	011  Stereo
	012  Sampling Rate Detect
	013  Spinning
	014  CAV
	015  CLV
	016  Recording Format Detect
	017  Off-Hook
	018  Ring
	019  Message Waiting
	01a  Data Mode
	01b  Battery Operation
	01c  Battery OK
	01d  Battery Low
	01e  Speaker
	01f  Head Set
	020  Hold
	021  Microphone
	022  Coverage
	023  Night Mode
	024  Send Calls
	025  Call Pickup
	026  Conference
	027  Stand-by
	028  Camera On
	029  Camera Off
	02a  On-Line
	02b  Off-Line
	02c  Busy
	02d  Ready
	02e  Paper-Out
	02f  Paper-Jam
	030  Remote
	031  Forward
	032  Reverse
	033  Stop
	034  Rewind
	035  Fast Forward
	036  Play
	037  Pause
	038  Record
	039  Error
	03a  Usage Selected Indicator
	03b  Usage In Use Indicator
	03c  Usage Multi Indicator
	03d  Indicator On
	03e  Indicator Flash
	03f  Indicator Slow Blink
	040  Indicator Fast Blink
	041  Indicator Off
	042  Flash On Time
	043  Slow Blink On Time
	044  Slow Blink Off Time
	045  Fast Blink On Time
	046  Fast Blink Off Time
	047  Usage Color Indicator
	048  Indicator Red
	049  Indicator Green
	04a  Indicator Amber
	04b  Generic Indicator
	04c  System Suspend
	04d  External Power Connected
HUT 09  Buttons
	000  No Button Pressed
	001  Button 1 (Primary)
	002  Button 2 (Secondary)
	003  Button 3 (Tertiary)
	004  Button 4
	005  Button 5
HUT 0a  Ordinal
	001  Instance 1
	002  Instance 2
	003  Instance 3
HUT 0b  Telephony
	000  Unassigned
	001  Phone
	002  Answering Machine
	003  Message Controls
	004  Handset
	005  Headset
	006  Telephony Key Pad
	007  Programmable Button
	020  Hook Switch
	021  Flash
	022  Feature
	023  Hold
	024  Redial
	025  Transfer
	026  Drop
	027  Park
	028  Forward Calls
	029  Alternate Function
	02a  Line
	02b  Speaker Phone
	02c  Conference
	02d  Ring Enable
	02e  Ring Select
	02f  Phone Mute
	030  Caller ID
	050  Speed Dial
	051  Store Number
	052  Recall Number
	053  Phone Directory
	070  Voice Mail
	071  Screen Calls
	072  Do Not Disturb
	073  Message
	074  Answer On/Offf
	090  Inside Dial Tone
	091  Outside Dial Tone
	092  Inside Ring Tone
	093  Outside Ring Tone
	094  Priority Ring Tone
	095  Inside Ringback
	096  Priority Ringback
	097  Line Busy Tone
	098  Recorder Tone
	099  Call Waiting Tone
	09a  Confirmation Tone 1
	09b  Confirmation Tone 2
	09c  Tones Off
	09d  Outside Ringback
	0b0  Key 1
	0b1  Key 2
	0b3  Key 3
	0b4  Key 4
	0b5  Key 5
	0b6  Key 6
	0b7  Key 7
	0b8  Key 8
	0b9  Key 9
	0ba  Key Star
	0bb  Key Pound
	0bc  Key A
	0bd  Key B
	0be  Key C
	0bf  Key D
HUT 0c  Consumer
	000  Unassigned
	001  Consumer Control
	002  Numeric Key Pad
	003  Programmable Buttons
	020  +10
	021  +100
	022  AM/PM
	030  Power
	031  Reset
	032  Sleep
	033  Sleep After
	034  Sleep Mode
	035  Illumination
	036  Function Buttons
	040  Menu
	041  Menu Pick
	042  Menu Up
	043  Menu Down
	044  Menu Left
	045  Menu Right
	046  Menu Escape
	047  Menu Value Increase
	048  Menu Value Decrease
	060  Data on Screen
	061  Closed Caption
	062  Closed Caption Select
	063  VCR/TV
	064  Broadcast Mode
	065  Snapshot
	066  Still
	080  Selection
	081  Assign Selection
	082  Mode Step
	083  Recall Last
	084  Enter Channel
	085  Order Movie
	086  Channel
	087  Media Selection
	088  Media Select Computer
	089  Media Select TV
	08a  Media Select WWW
	08b  Media Select DVD
	08c  Media Select Telephone
	08d  Media Select Program Guide
	08e  Media Select Video Phone
	08f  Media Select Games
	090  Media Select Messages
	091  Media Select CD
	092  Media Select VCR
	093  Media Select Tuner
	094  Quit
	095  Help
	096  Media Select Tape
	097  Media Select Cable
	098  Media Select Satellite
	099  Media Select Security
	09a  Media Select Home
	09b  Media Select Call
	09c  Channel Increment
	09d  Channel Decrement
	09e  Media Select SAP
	0a0  VCR Plus
	0a1  Once
	0a2  Daily
	0a3  Weekly
	0a4  Monthly
	0b0  Play
	0b1  Pause
	0b2  Record
	0b3  Fast Forward
	0b4  Rewind
	0b5  Scan Next Track
	0b6  Scan Previous Track
	0b7  Stop
	0b8  Eject
	0b9  Random Play
	0ba  Select Disc
	0bb  Enter Disc
	0bc  Repeat
	0bd  Tracking
	0be  Track Normal
	0bf  Slow Tracking
	0c0  Frame Forward
	0c1  Frame Back
	0c2  Mark
	0c3  Clear Mark
	0c4  Repeat from Mark
	0c5  Return to Mark
	0c6  Search Mark Forward
	0c7  Search Mark Backward
	0c8  Counter Reset
	0c9  Show Counter
	0ca  Tracking Increment
	0cb  Tracking Decrement
	0cc  Stop/Eject
	0cd  Play/Pause
	0ce  Play/Skip
	0e0  Volume
	0e1  Balance
	0e2  Mute
	0e3  Bass
	0e4  Treble
	0e5  Bass Boost
	0e6  Surround Mode
	0e7  Loudness
	0e8  MPX
	0e9  Volume Increment
	0ea  Volume Decrement
	0f0  Speed Select
	0f1  Playback Speed
	0f2  Standard Play
	0f3  Long Play
	0f4  Extended Play
	0f5  Slow
	100  Fan Enable
	101  Fan Speed
	102  Light Enable
	103  Light Illumination Level
	104  Climate Control Enable
	105  Room Temperature
	106  Security Enable
	107  Fire Alarm
	108  Police Alarm
	150  Balance Right
	151  Balance Left
	152  Bass Increment
	153  Bass Decrement
	154  Treble Increment
	155  Treble Decrement
	160  Speaker System
	161  Channel Left
	162  Channel Right
	163  Channel Center
	164  Channel Front
	165  Channel Center Front
	166  Channel Side
	167  Channel Surround
	168  Channel Low Frequency Enhancement
	169  Channel Top
	16a  Channel Unknown
	170  Sub-Channel
	171  Sub-Channel Increment
	172  Sub-Channel Decrement
	173  Alternative Audio Increment
	174  Alternative Audio Decrement
	180  Application Launch Buttons
	181  AL Launch Button Configuration Tool
	182  AL Launch Button Configuration
	183  AL Consumer Control Configuration
	184  AL Word Processor
	185  AL Text Editor
	186  AL Spreadsheet
	187  AL Graphics Editor
	188  AL Presentation App
	189  AL Database App
	18a  AL Email Reader
	18b  AL Newsreader
	18c  AL Voicemail
	18d  AL Contacts/Address Book
	18e  AL Calendar/Schedule
	18f  AL Task/Project Manager
	190  AL Log/Jounal/Timecard
	191  AL Checkbook/Finance
	192  AL Calculator
	193  AL A/V Capture/Playback
	194  AL Local Machine Browser
	195  AL LAN/Wan Browser
	196  AL Internet Browser
	197  AL Remote Networking/ISP Connect
	198  AL Network Conference
	199  AL Network Chat
	19a  AL Telephony/Dialer
	19b  AL Logon
	19c  AL Logoff
	19d  AL Logon/Logoff
	19e  AL Terminal Local/Screensaver
	19f  AL Control Panel
	1a0  AL Command Line Processor/Run
	1a1  AL Process/Task Manager
	1a2  AL Select Task/Application
	1a3  AL Next Task/Application
	1a4  AL Previous Task/Application
	1a5  AL Preemptive Halt Task/Application
	200  Generic GUI Application Controls
	201  AC New
	202  AC Open
	203  AC CLose
	204  AC Exit
	205  AC Maximize
	206  AC Minimize
	207  AC Save
	208  AC Print
	209  AC Properties
	21a  AC Undo
	21b  AC Copy
	21c  AC Cut
	21d  AC Paste
	21e  AC Select All
	21f  AC Find
	220  AC Find and Replace
	221  AC Search
	222  AC Go To
	223  AC Home
	224  AC Back
	225  AC Forward
	226  AC Stop
	227  AC Refresh
	228  AC Previous Link
	229  AC Next Link
	22b  AC History
	22c  AC Subscriptions
	22d  AC Zoom In
	22e  AC Zoom Out
	22f  AC Zoom
	230  AC Full Screen View
	231  AC Normal View
	232  AC View Toggle
	233  AC Scroll Up
	234  AC Scroll Down
	235  AC Scroll
	236  AC Pan Left
	237  AC Pan Right
	238  AC Pan
	239  AC New Window
	23a  AC Tile Horizontally
	23b  AC Tile Vertically
	23c  AC Format
HUT 0d  Digitizer
	000  Undefined
	001  Digitizer
	002  Pen
	003  Light Pen
	004  Touch Screen
	005  Touch Pad
	006  White Board
	007  Coordinate Measuring Machine
	008  3D Digitizer
	009  Stereo Plotter
	00a  Articulated Arm
	00b  Armature
	00c  Multiple Point Digitizer
	00d  Free Space Wand
	020  Stylus
	021  Puck
	022  Finger
	030  Tip Pressure
	031  Barrel Pressure
	032  In Range
	033  Touch
	034  Untouch
	035  Tap
	036  Quality
	037  Data Valid
	038  Transducer Index
	039  Tablet Function Keys
	03a  Program Change Keys
	03b  Battery Strength
	03c  Invert
	03d  X Tilt
	03e  Y Tilt
	03f  Azimuth
	040  Altitude
	041  Twist
	042  Tip Switch
	043  Secondary Tip Switch
	044  Barrel Switch
	045  Eraser
	046  Tablet Pick
	047  Confidence
	048  Width
	049  Height
	051  Contact ID
	052  Input Mode
	053  Device Index
	054  Contact Count
	055  Maximum Contact Number
HUT 0f  PID Page
	000  Undefined
	001  Physical Interface Device
	020  Normal
	021  Set Effect Report
	022  Effect Block Index
	023  Parameter Block Offset
	024  ROM Flag
	025  Effect Type
	026  ET Constant Force
	027  ET Ramp
	028  ET Custom Force Data
	030  ET Square
	031  ET Sine
	032  ET Triangle
	033  ET Sawtooth Up
	034  ET Sawtooth Down
	040  ET Spring
	041  ET Damper
	042  ET Inertia
	043  ET Friction
	050  Duration
	051  Sample Period
	052  Gain
	053  Trigger Button
	054  Trigger Repeat Interval
	055  Axes Enable
	056  Direction Enable
	057  Direction
	058  Type Specific Block Offset
	059  Block Type
	05A  Set Envelope Report
	05B  Attack Level
	05C  Attack Time
	05D  Fade Level
	05E  Fade Time
	05F  Set Condition Report
	060  CP Offset
	061  Positive Coefficient
	062  Negative Coefficient
	063  Positive Saturation
	064  Negative Saturation
	065  Dead Band
	066  Download Force Sample
	067  Isoch Custom Force Enable
	068  Custom Force Data Report
	069  Custom Force Data
	06A  Custom Force Vendor Defined Data
	06B  Set Custom Force Report
	06C  Custom Force Data Offset
	06D  Sample Count
	06E  Set Periodic Report
	06F  Offset
	070  Magnitude
	071  Phase
	072  Period
	073  Set Constant Force Report
	074  Set Ramp Force Report
	075  Ramp Start
	076  Ramp End
	077  Effect Operation Report
	078  Effect Operation
	079  Op Effect Start
	07A  Op Effect Start Solo
	07B  Op Effect Stop
	07C  Loop Count
	07D  Device Gain Report
	07E  Device Gain
	07F  PID Pool Report
	080  RAM Pool Size
	081  ROM Pool Size
	082  ROM Effect Block Count
	083  Simultaneous Effects Max
	084  Pool Alignment
	085  PID Pool Move Report
	086  Move Source
	087  Move Destination
	088  Move Length
	089  PID Block Load Report
	08B  Block Load Status
	08C  Block Load Success
	08D  Block Load Full
	08E  Block Load Error
	08F  Block Handle
	090  PID Block Free Report
	091  Type Specific Block Handle
	092  PID State Report
	094  Effect Playing
	095  PID Device Control Report
	096  PID Device Control
	097  DC Enable Actuators
	098  DC Disable Actuators
	099  DC Stop All Effects
	09A  DC Device Reset
	09B  DC Device Pause
	09C  DC Device Continue
	09F  Device Paused
	0A0  Actuators Enabled
	0A4  Safety Switch
	0A5  Actuator Override Switch
	0A6  Actuator Power
	0A7  Start Delay
	0A8  Parameter Block Size
	0A9  Device Managed Pool
	0AA  Shared Parameter Blocks
	0AB  Create New Effect Report
	0AC  RAM Pool Available
HUT 10  Unicode
HUT 14  Alphanumeric Display
	000  Undefined
	001  Alphanumeric Display
	020  Display Attributes Report
	021  ASCII Character Set
	022  Data Read Back
	023  Font Read Back
	024  Display Control Report
	025  Clear Display
	026  Display Enable
	027  Screen Saver Delay
	028  Screen Saver Enable
	029  Vertical Scroll
	02a  Horizontal Scroll
	02b  Character Report
	02c  Display Data
	02d  Display Status
	02e  Stat Not Ready
	02f  Stat Ready
	030  Err Not a loadable Character
	031  Err Font Data Cannot Be Read
	032  Cursur Position Report
	033  Row
	034  Column
	035  Rows
	036  Columns
	037  Cursor Pixel Positioning
	038  Cursor Mode
	039  Cursor Enable
	03a  Cursor Blink
	03b  Font Report
	03c  Font Data
	03d  Character Width
	03e  Character Height
	03f  Character Spacing Horizontal
	040  Character Spacing Vertical
	041  Unicode Character Set
HUT 80  USB Monitor
	001  Monitor Control
	002  EDID Information
	003  VDIF Information
	004  VESA Version
HUT 81  USB Monitor Enumerated Values
HUT 82  Monitor VESA Virtual Controls
	001  Degauss
	010  Brightness
	012  Contrast
	016  Red Video Gain
	018  Green Video Gain
	01a  Blue Video Gain
	01c  Focus
	020  Horizontal Position
	022  Horizontal Size
	024  Horizontal Pincushion
	026  Horizontal Pincushion Balance
	028  Horizontal Misconvergence
	02a  Horizontal Linearity
	02c  Horizontal Linearity Balance
	030  Vertical Position
	032  Vertical Size
	034  Vertical Pincushion
	036  Vertical Pincushion Balance
	038  Vertical Misconvergence
	03a  Vertical Linearity
	03c  Vertical Linearity Balance
	040  Parallelogram Balance (Key Distortion)
	042  Trapezoidal Distortion (Key)
	044  Tilt (Rotation)
	046  Top Corner Distortion Control
	048  Top Corner Distortion Balance
	04a  Bottom Corner Distortion Control
	04c  Bottom Corner Distortion Balance
	056  Horizontal Moire
	058  Vertical Moire
	05e  Input Level Select
	060  Input Source Select
	06c  Red Video Black Level
	06e  Green Video Black Level
	070  Blue Video Black Level
	0a2  Auto Size Center
	0a4  Polarity Horizontal Sychronization
	0a6  Polarity Vertical Synchronization
	0aa  Screen Orientation
	0ac  Horizontal Frequency in Hz
	0ae  Vertical Frequency in 0.1 Hz
	0b0  Settings
	0ca  On Screen Display (OSD)
	0d4  Stereo Mode
HUT 84  Power Device Page
	000  Undefined
	001  iName
	002  Present Status
	003  Changed Status
	004  UPS
	005  Power Supply
	010  Battery System
	011  Battery System ID
	012  Battery
	013  Battery ID
	014  Charger
	015  Charger ID
	016  Power Converter
	017  Power Converter ID
	018  Outlet System
	019  Outlet System ID
	01a  Input
	01b  Input ID
	01c  Output
	01d  Output ID
	01e  Flow
	01f  Flow ID
	020  Outlet
	021  Outlet ID
	022  Gang
	023  Gang ID
	024  Power Summary
	025  Power Summary ID
	030  Voltage
	031  Current
	032  Frequency
	033  Apparent Power
	034  Active Power
	035  Percent Load
	036  Temperature
	037  Humidity
	038  Bad Count
	040  Config Voltage
	041  Config Current
	042  Config Frequency
	043  Config Apparent Power
	044  Config Active Power
	045  Config Percent Load
	046  Config Temperature
	047  Config Humidity
	050  Switch On Control
	051  Switch Off Control
	052  Toggle Control
	053  Low Voltage Transfer
	054  High Voltage Transfer
	055  Delay Before Reboot
	056  Delay Before Startup
	057  Delay Before Shutdown
	058  Test
	059  Module Reset
	05a  Audible Alarm Control
	060  Present
	061  Good
	062  Internal Failure
	063  Voltage out of range
	064  Frequency out of range
	065  Overload
	066  Over Charged
	067  Over Temperature
	068  Shutdown Requested
	069  Shutdown  Imminent
	06a  Reserved
	06b  Switch On/Off
	06c  Switchable
	06d  Used
	06e  Boost
	06f  Buck
	070  Initialized
	071  Tested
	072  Awaiting Power
	073  Communication Lost
	0fd  iManufacturer
	0fe  iProduct
	0ff  iSerialNumber
HUT 85  Battery System Page
	000  Undefined
	001  SMB Battery Mode
	002  SMB Battery Status
	003  SMB Alarm Warning
	004  SMB Charger Mode
	005  SMB Charger Status
	006  SMB Charger Spec Info
	007  SMB Selector State
	008  SMB Selector Presets
	009  SMB Selector Info
	010  Optional Mfg. Function 1
	011  Optional Mfg. Function 2
	012  Optional Mfg. Function 3
	013  Optional Mfg. Function 4
	014  Optional Mfg. Function 5
	015  Connection to SMBus
	016  Output Connection
	017  Charger Connection
	018  Battery Insertion
	019  Use Next
	01a  OK to use
	01b  Battery  Supported
	01c  SelectorRevision
	01d  Charging Indicator
	028  Manufacturer Access
	029  Remaining Capacity Limit
	02a  Remaining Time Limit
	02b  At Rate
	02c  Capacity Mode
	02d  Broadcast To Charger
	02e  Primary Battery
	02f  Charge Controller
	040  Terminate Charge
	041  Terminate Discharge
	042  Below Remaining Capacity Limit
	043  Remaining Time Limit Expired
	044  Charging
	045  Discharging
	046  Fully Charged
	047  Fully Discharged
	048  Conditioning Flag
	049  At Rate OK
	04a  SMB Error Code
	04b  Need Replacement
	060  At Rate Time To Full
	061  At Rate Time To Empty
	062  Average Current
	063  Max Error
	064  Relative State Of Charge
	065  Absolute State Of Charge
	066  Remaining Capacity
	067  Full Charge Capacity
	068  Run Time To Empty
	069  Average Time To Empty
	06a  Average Time To Full
	06b  Cycle Count
	080  Batt. Pack Model Level
	081  Internal Charge Controller
	082  Primary Battery Support
	083  Design Capacity
	084  Specification Info
	085  Manufacturer Date
	086  Serial Number
	087  iManufacturerName
	088  iDeviceName
	089  iDeviceChemistry
	08a  Manufacturer Data
	08b  Rechargeable
	08c  Warning Capacity Limit
	08d  Capacity Granularity 1
	08e  Capacity Granularity 2
	08f  iOEMInformation
	0c0  Inhibit Charge
	0c1  Enable Polling
	0c2  Reset To Zero
	0d0  AC Present
	0d1  Battery Present
	0d2  Power Fail
	0d3  Alarm Inhibited
	0d4  Thermistor Under Range
	0d5  Thermistor Hot
	0d6  Thermistor Cold
	0d7  Thermistor Over Range
	0d8  Voltage Out Of Range
	0d9  Current Out Of Range
	0da  Current Not Regulated
	0db  Voltage Not Regulated
	0dc  Master Mode
	0f0  Charger Selector Support
	0f1  Charger Spec
	0f2  Level 2
	0f3  Level 3
HUT 86  Power Pages
HUT 87  Power Pages
HUT 8c  Bar Code Scanner Page (POS)
HUT 8d  Scale Page (POS)
HUT 90  Camera Control Page
HUT 91  Arcade Control Page
HUT f0  Cash Device
	0f1  Cash Drawer
	0f2  Cash Drawer Number
	0f3  Cash Drawer Set
	0f4  Cash Drawer Status
HUT ff  Vendor Specific

# List of Languages

# Syntax:
# L language_id  language_name
#	dialect_id  dialect_name

L 0001  Arabic
	01  Saudi Arabia
	02  Iraq
	03  Egypt
	04  Libya
	05  Algeria
	06  Morocco
	07  Tunesia
	08  Oman
	09  Yemen
	0a  Syria
	0b  Jordan
	0c  Lebanon
	0d  Kuwait
	0e  U.A.E
	0f  Bahrain
	10  Qatar
L 0002  Bulgarian
L 0003  Catalan
L 0004  Chinese
	01  Traditional
	02  Simplified
	03  Hongkong SAR, PRC
	04  Singapore
	05  Macau SAR
L 0005  Czech
L 0006  Danish
L 0007  German
	01  German
	02  Swiss
	03  Austrian
	04  Luxembourg
	05  Liechtenstein
L 0008  Greek
L 0009  English
	01  US
	02  UK
	03  Australian
	04  Canadian
	05  New Zealand
	06  Ireland
	07  South Africa
	08  Jamaica
	09  Carribean
	0a  Belize
	0b  Trinidad
	0c  Zimbabwe
	0d  Philippines
L 000a  Spanish
	01  Castilian
	02  Mexican
	03  Modern
	04  Guatemala
	05  Costa Rica
	06  Panama
	07  Dominican Republic
	08  Venzuela
	09  Colombia
	0a  Peru
	0b  Argentina
	0c  Ecuador
	0d  Chile
	0e  Uruguay
	0f  Paraguay
	10  Bolivia
	11  El Salvador
	12  Honduras
	13  Nicaragua
	14  Puerto Rico
L 000b  Finnish
L 000c  French
	01  French
	02  Belgian
	03  Canadian
	04  Swiss
	05  Luxembourg
	06  Monaco
L 000d  Hebrew
L 000e  Hungarian
L 000f  Idelandic
L 0010  Italian
	01  Italian
	02  Swiss
L 0011  Japanese
L 0012  Korean
	01  Korean
L 0013  Dutch
	01  Dutch
	02  Belgian
L 0014  Norwegian
	01  Bokmal
	02  Nynorsk
L 0015  Polish
L 0016  Portuguese
	01  Portuguese
	02  Brazilian
L 0017  forgotten
L 0018  Romanian
L 0019  Russian
L 001a  Serbian
	01  Croatian
	02  Latin
	03  Cyrillic
L 001b  Slovak
L 001c  Albanian
L 001d  Swedish
	01  Swedish
	02  Finland
L 001e  Thai
L 001f  Turkish
L 0020  Urdu
	01  Pakistan
	02  India
L 0021  Indonesian
L 0022  Ukrainian
L 0023  Belarusian
L 0024  Slovenian
L 0025  Estonian
L 0026  Latvian
L 0027  Lithuanian
	01  Lithuanian
L 0028  forgotten
L 0029  Farsi
L 002a  Vietnamese
L 002b  Armenian
L 002c  Azeri
	01  Cyrillic
	02  Latin
L 002d  Basque
L 002e  forgotten
L 002f  Macedonian
L 0036  Afrikaans
L 0037  Georgian
L 0038  Faeroese
L 0039  Hindi
L 003e  Malay
	01  Malaysia
	02  Brunei Darassalam
L 003f  Kazak
L 0041  Awahili
L 0043  Uzbek
	01  Latin
	02  Cyrillic
L 0044  Tatar
L 0045  Bengali
L 0046  Punjabi
L 0047  Gujarati
L 0048  Oriya
L 0049  Tamil
L 004a  Telugu
L 004b  Kannada
L 004c  Malayalam
L 004d  Assamese
L 004e  Marathi
L 004f  Sanskrit
L 0057  Konkani
L 0058  Manipuri
L 0059  Sindhi
L 0060  Kashmiri
	02  India
L 0061  Nepali
	02  India

# HID Descriptor bCountryCode
# HID Specification 1.11 (2001-06-27) page 23
#
# Syntax:
# HCC country_code keymap_type

HCC 00  Not supported
HCC 01  Arabic
HCC 02  Belgian
HCC 03  Canadian-Bilingual
HCC 04  Canadian-French
HCC 05  Czech Republic
HCC 06  Danish
HCC 07  Finnish
HCC 08  French
HCC 09  German
HCC 10  Greek
HCC 11  Hebrew
HCC 12  Hungary
HCC 13  International (ISO)
HCC 14  Italian
HCC 15  Japan (Katakana)
HCC 16  Korean
HCC 17  Latin American
HCC 18  Netherlands/Dutch
HCC 19  Norwegian
HCC 20  Persian (Farsi)
HCC 21  Poland
HCC 22  Portuguese
HCC 23  Russia
HCC 24  Slovakia
HCC 25  Spanish
HCC 26  Swedish
HCC 27  Swiss/French
HCC 28  Swiss/German
HCC 29  Switzerland
HCC 30  Taiwan
HCC 31  Turkish-Q
HCC 32  UK
HCC 33  US
HCC 34  Yugoslavia
HCC 35  Turkish-F

# List of Video Class Terminal Types

# Syntax:
# VT terminal_type  terminal_type_name

VT 0100  USB Vendor Specific
VT 0101  USB Streaming
VT 0200  Input Vendor Specific
VT 0201  Camera Sensor
VT 0202  Sequential Media
VT 0300  Output Vendor Specific
VT 0301  Generic Display
VT 0302  Sequential Media
VT 0400  External Vendor Specific
VT 0401  Composite Video
VT 0402  S-Video
VT 0403  Component Video
