#include "pico/stdlib.h"
#include "lcd_lib/lcd_1602_i2c.h"
#include "encoder_lib/encoder.h"

int8_t encoder_counter = 0;

int main()
{
    lcd_init();
    encoder_init(); 
    encoder(&encoder_counter);

   
    while (1)
    {
        lcd_set_cursor(0,1);
        lcd_string("code works");
        sleep_ms(2000);
        lcd_clear();
    }
}