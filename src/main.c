/*
 *
 * Matthew Adam Padilla
 * file: main.c
 * Date of Creation: 10/30/2024
 * 
 */
 #include "include/main.h"
 
 void delay(void) {
	
	unsigned long i;
	for(i = 50000; i > 0; i--);
 
 }

main()
{
	// Initializes the SDA(C3) and SCL(C4) pins for I2C communication 
	GPIO_Init(I2C_PORT, SDA_PIN | SCL_PIN, GPIO_MODE_OUT_PP_LOW_FAST);


	while (1) {

		// Switches the pin from on to off and vice-versa every cycle
		GPIO_WriteReverse(I2C_PORT, SDA_PIN | SCL_PIN);
		delay();
	}
}