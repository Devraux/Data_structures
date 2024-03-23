#include "pico/stdlib.h"
#include "lcd_lib/lcd_1602_i2c.h"
#include "buttons/buttons.h"
#include "menu/menu.h"


int main()
{
    struct menu *head = NULL;
    lcd_init();
    buttons_init();
    head = menu_val_init();
    
    while(1)
    {
        lcd_set_cursor(0,1);
        lcd_string("Menu");

        //int8_t var = button_counter;
        //char int_str[8];
        //sprintf("%d", 1);
        //printf("Var: %s\n", int_str);

        //lcd_set_cursor(1,5);
        //lcd_string(int_str);
        printf("hello world");
        print_linked_list(head);
        sleep_ms(1000);
        lcd_clear();
    }


    return 0;
}

