#include "menu.h"


/*
struct menu 
{
    char string_1;
    char string_2;
    struct menu* next;
};
*/

void print_linked_list(struct menu *p)
{
    while (p != NULL)
    {
        printf("%c ", p->string_1);// printf("%d ", p-> string_2);
        p = p->next;
    }    
}

void menu_val_init()
{
sleep_ms(10000);
struct menu *head;
struct menu *parent_1 = NULL;
struct menu *parent_2 = NULL;
struct menu *parent_3 = NULL;

parent_1 = malloc(sizeof(struct menu));
parent_2 = malloc(sizeof(struct menu));
parent_3 = malloc(sizeof(struct menu));

parent_1 -> string_1 = 'a'; parent_1 -> string_2 = 'b';
parent_2 -> string_1 = 'c'; parent_2 -> string_2 = 'd';
parent_3 -> string_1 = '5'; parent_3 -> string_2 = '6';

parent_1 -> next = parent_2;
parent_2 -> next = parent_3;
parent_3 -> next = NULL;

head = parent_1;

print_linked_list(head);
}
