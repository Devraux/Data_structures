#include <stdio.h>
#include "pico.h"
#include "hardware/gpio.h"

#define left_button 15
#define right_button 13
#define mode_button 14

extern int8_t *button_counter;

int8_t* buttons_init();
void irq_handler();
void buttons();
