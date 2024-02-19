#include <stdio.h>
#include "hardware/gpio.h"
#include "stdbool.h"
#include "pico/stdlib.h"

#define left_button 15
#define right_button 13
#define mode_button 14

extern int8_t button_counter;

void buttons_init();
void irq_handler();
