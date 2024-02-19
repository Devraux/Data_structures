#include "pico/stdlib.h"
#include "lcd_lib/lcd_1602_i2c.h"
#include "buttons/buttons.h"



int main()
{
    lcd_init();
    buttons_init();
    
    while(1)
    {
        lcd_set_cursor(0,1);
        lcd_string("code works");

        int8_t var = button_counter;
        char int_str[8];
        sprintf(int_str, "%d", var);
        printf("Var: %s\n", int_str);

        sleep_ms(2000);
        lcd_clear();
    }

}