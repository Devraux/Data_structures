#include "Lists.h"  

void print_list(struct Lists *print_data)
{
    while(print_data != NULL)
    {
        printf("%c", print_data->data); // very simple print func
        print_data = print_data->next;
    }
}


void print_list_from_begin(struct Lists* print_data)
{
    while(print_data != NULL)
    {
        printf("%c", print_data->data); 
        print_data = print_data->next;
    }
}
void print_list_from_end(struct Lists* print_data)
{
while(print_data != NULL)
    {
        printf("%c", print_data->data); 
        print_data = print_data->prev;
    }
}


struct Lists *List_init()
{
    struct Lists *head;
    struct Lists *parent_1 = NULL;
    struct Lists *parent_2 = NULL;
    struct Lists *parent_3 = NULL;
    struct Lists *parent_4 = NULL;


    parent_1 = malloc(sizeof(struct Lists));
    parent_2 = malloc(sizeof(struct Lists));
    parent_3 = malloc(sizeof(struct Lists));
    parent_4 = malloc(sizeof(struct Lists));


    parent_1->data = 1;
    parent_2->data = 2;
    parent_3->data = 3;
    parent_4->data = 4;


    parent_1->next = parent_2; parent_1->prev = NULL;
    parent_2->next = parent_3; parent_2->prev = parent_1; 
    parent_3->next = parent_4; parent_3->prev = parent_2;
    parent_4->next = NULL; parent_4->prev = parent_3;

    head = parent_1;
    return head;
}