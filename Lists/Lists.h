#ifndef _Lists_
#define _Lists_

#include <stdio.h>
#include <stdlib.h>

struct Lists
{
   char data;
   struct  Lists *next;
   struct Lists *prev;
};

struct Lists* List_init();
void print_list(struct Lists* print_data);
void print_list_from_begin(struct Lists* print_data);
void print_list_from_end(struct Lists* print_data);

#endif