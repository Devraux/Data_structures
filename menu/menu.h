#include "pico/stdlib.h"
#include <stdio.h>
#include <stdlib.h>

struct menu 
{
    char string_1;
    char string_2;
    struct menu* next;
};

struct menu* menu_val_init();
void print_linked_list(struct menu *p);
