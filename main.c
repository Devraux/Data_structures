#include "pico/stdlib.h"
#include "lcd_lib/lcd_1602_i2c.h"
#include "encoder_lib/encoder.h"

//int8_t encoder_counter = 0;

int main()
{
    lcd_init();
    encoder_init(); 
    //encoder(&encoder_counter);
   
    while(1)
    {
        lcd_set_cursor(0,1);
        lcd_string("code works");

        //int8_t var = encoder_counter;
        //char int_str[8];
        //sprintf(int_str, "%d", var);
        //printf("Var: %s\n", int_str);

        sleep_ms(2000);
        lcd_clear();
    }

}