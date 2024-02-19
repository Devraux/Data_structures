#include "pico/stdlib.h"
#include "lcd_lib/lcd_1602_i2c.h"
#include "buttons/buttons.h"


//int8_t* button_counter;

int main()
{
    lcd_init();
    //*button_counter += 1;
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