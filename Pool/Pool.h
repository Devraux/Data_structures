#ifndef _Pool_
#define _Pool_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct {
bool isUsed;
uint8_t element[64];
} pool[10];


#endif