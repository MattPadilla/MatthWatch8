#include "OLED128x64.h"


void init_OLED(OLED128x64 screen, const char *str)
{
    this->text = str;

    for (uint8_t i = 0; i < OLED_ROWS; i++)
    {
        for (uint8_t j = 0; j < OLED_ROW_BYTES; j++)
            pixels[i][j] = 0;
    }
}

void write_screen(OLED128x64 screen)
{

}

// Sets a single byte on the OLED

void set_pixel_byte(OLED128x64 screen, uint8_t row, uint8_t col, uint8_t data)
{
    pixels[row][col] = data;
}

void set_text(OLED128x64 screen, const char *str)
{
}

void set_pixels(OLED128x64 screen)
{
}
