#include "main.h"


int main()
{
    lcd_init();
    buttons_init();
    

    List* head;
    List* parent1 = (List*)malloc(sizeof(List));
    List* parent2 = (List*)malloc(sizeof(List));
    
    head = parent1;
    parent1->next = parent2;
    parent1->prev = NULL;
    parent1->data = 10;
    
    parent2->next = NULL;
    parent2->prev = parent1;
    parent2->data = 20;
    
    print(&head);
    push_back(30,&head);
    print(&head);


    while(1){}
    return 0;
}

