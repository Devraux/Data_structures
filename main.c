#include "main.h"


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
        print_linked_list(head);
        sleep_ms(1000);
        lcd_clear();
    }


    return 0;
}

