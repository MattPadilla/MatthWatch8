#ifndef OLED128x64_H
#define OLED128x64_H

    #include "include/spl/stm8s.h"
    #include "include/spl/stm8s_i2c.h"



    #define OLED_I2C_ADDRESS1 0x3C
    #define OLED_I2C_ADDRESS2 0x3D

    #define OLED_ROWS 128
    #define OLED_COLUMNS 64
    #define OLED_ROW_BYTES OLED_COLUMNS/8

    // There are 128x64 and there are 8 bit in each section of the array
    typedef struct {

        uint8_t pixels[OLED_ROWS][OLED_ROW_BYTES];
        const char text[20];

        
    } OLED128x64;

    // Initializes the OLED screen with a string to print to the screen
    void init_OLED(OLED128x64 screen, const char* str);

    // Writes to the entire_OLED screen
    void write_screen(OLED128x64 screen);

    // Sets a single byte on the OLED
    void set_pixel_byte(OLED128x64 screen, uint8_t row, uint8_t col, uint8_t data);

    // Changes text to be displayed on the screen
    void set_text(OLED128x64 screen, const char *str);

    // Changes the values of the pixel array
    void set_pixels(OLED128x64 screen);

    // Creates an OLED struct
    extern OLED128x64 OLED;

#endif