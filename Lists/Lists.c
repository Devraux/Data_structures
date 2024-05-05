#include "Lists.h"  

void push_begin(List** head, size_t data)
{
    List* node = (List*)malloc(sizeof(List));
    node->data = data;
    node->prev = NULL;
    node->next = *head;
    *head = node;
}

void push_back(List** head, size_t data)
{
    List* current = *head;
    while(current->next != NULL)
        current = current->next;

    List* node = (List*)malloc(sizeof(List));
    node->data = data;
    node->next = NULL;
    node->prev = current;
    current->next = node;

}

void push_before(uint8_t data, List* next)
{
    List* node = (List*)malloc(sizeof(List));
    node->data = data;
    node->prev = next->prev;
    node->next = next;
    
    next->prev = node;
}

void print(List** head)
{
    List* current = *head;
    while(current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}