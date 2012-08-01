/*
** Filename: USBSlaveBoms_iomux.c
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
***
*/
#include "vos.h"
#include "Timers.h"
#include "main.h"

void iomux_setup(void)
{
	unsigned char packageType;
	tmr_context_t tmrCtx; // timer context for timer to sequence VID/PID

	packageType = vos_get_package_type();

	// This is for the smaller package.  This is probably what you want
	// for a couple of reasons.  First off the LCD doesn't fit on a
	// Vinco shield very well.  Also, you can leave off the buttons
	// and LCD if you don't want all the functionality, those items
	// will simply be ignored.  If you leave out the LCD then you could
	// still build a pretty compact device with just a button and LEDs
	// for the write protect functionality.
	if (packageType == VINCULUM_II_32_PIN)
	{
		// Debugger to pin 11 as Bi-Directional.
		vos_iomux_define_bidi(199, IOMUX_IN_DEBUGGER, IOMUX_OUT_DEBUGGER);
		// GPIO_Port_E_1 to pin 12 as Input.
		vos_iomux_define_input(12, IOMUX_IN_GPIO_PORT_E_1); //VID+ button
		// GPIO_Port_E_2 to pin 14 as Input.
		vos_iomux_define_input(14, IOMUX_IN_GPIO_PORT_E_2); //VID- button
		// GPIO_Port_E_3 to pin 15 as Input.
		vos_iomux_define_input(15, IOMUX_IN_GPIO_PORT_E_3); //write protect button
		// GPIO_Port_B_0 to pin 23 as Output.
		vos_iomux_define_output(23, IOMUX_OUT_GPIO_PORT_B_0); //LCD DB4
		// GPIO_Port_B_1 to pin 24 as Output.
		vos_iomux_define_output(24, IOMUX_OUT_GPIO_PORT_B_1); //LCD DB5
		// GPIO_Port_B_2 to pin 25 as Output.
		vos_iomux_define_output(25, IOMUX_OUT_GPIO_PORT_B_2); //LCD DB6
		// GPIO_Port_B_3 to pin 26 as Output.
		vos_iomux_define_output(26, IOMUX_OUT_GPIO_PORT_B_3); //LCD DB7
		// GPIO_Port_B_4 to pin 29 as Output.
		vos_iomux_define_output(29, IOMUX_OUT_GPIO_PORT_B_4); //LCD RS
		// GPIO_Port_B_5 to pin 30 as Output.
		vos_iomux_define_output(30, IOMUX_OUT_GPIO_PORT_B_5); //LCD E
		// GPIO_Port_B_6 to pin 31 as Output.
		vos_iomux_define_output(31, IOMUX_OUT_GPIO_PORT_B_6); //Green LED
		// GPIO_Port_B_7 to pin 32 as Output.
		vos_iomux_define_output(32, IOMUX_OUT_GPIO_PORT_B_7); //Red LED
	}

	// This is for people who hate to solder and want to base their device
	// on the Vinco.  Personally, I think that basing your device off the
	// 32-pin V2DIP1-32 is a better idea.  Note that setup for pins 40
	// and 41 is only needed for the Vinco, so if you are running
	// a dev board with a 64-pin chip it is not really needed.
	if (packageType == VINCULUM_II_64_PIN)
	{
		// Debugger to pin 11 as Bi-Directional.
		vos_iomux_define_bidi(199, IOMUX_IN_DEBUGGER, IOMUX_OUT_DEBUGGER);

		// GPIO_Port_E_1 to pin 12 as Input.
		vos_iomux_define_input(12, IOMUX_IN_GPIO_PORT_E_1); //VID+ button
		// GPIO_Port_E_2 to pin 13 as Input.
		vos_iomux_define_input(13, IOMUX_IN_GPIO_PORT_E_2); //VID- button
		// GPIO_Port_E_3 to pin 14 as Input.
		vos_iomux_define_input(14, IOMUX_IN_GPIO_PORT_E_3); //write protect button
		// for Vinco need to set pins to output for LED and power on host
		// both are active low
		vos_iomux_define_output(40, IOMUX_OUT_GPIO_PORT_E_5); // USB host LED
		vos_iomux_define_output(41, IOMUX_OUT_GPIO_PORT_E_6); // USB host power
		// GPIO_Port_B_0 to pin 24 as Output.
		vos_iomux_define_output(24, IOMUX_OUT_GPIO_PORT_B_0); //LCD DB4
		// GPIO_Port_B_1 to pin 25 as Output.
		vos_iomux_define_output(25, IOMUX_OUT_GPIO_PORT_B_1); //LCD DB5
		// GPIO_Port_B_2 to pin 26 as Output.
		vos_iomux_define_output(26, IOMUX_OUT_GPIO_PORT_B_2); //LCD DB6
		// GPIO_Port_B_3 to pin 27 as Output.
		vos_iomux_define_output(27, IOMUX_OUT_GPIO_PORT_B_3); //LCD DB7
		// GPIO_Port_B_4 to pin 28 as Output.
		vos_iomux_define_output(28, IOMUX_OUT_GPIO_PORT_B_4); //LCD RS
		// GPIO_Port_B_5 to pin 29 as Output.
		vos_iomux_define_output(29, IOMUX_OUT_GPIO_PORT_B_5); //LCD E
		// GPIO_Port_B_6 to pin 31 as Output.
		vos_iomux_define_output(31, IOMUX_OUT_GPIO_PORT_B_6); //Green LED
		// GPIO_Port_B_7 to pin 32 as Output.
		vos_iomux_define_output(32, IOMUX_OUT_GPIO_PORT_B_7); //Red LED
	}
	// setup the timer used to cycle through VID/PID
	tmrCtx.timer_identifier = TIMER_0;
	tmr_init(TIMER0, &tmrCtx);

}

