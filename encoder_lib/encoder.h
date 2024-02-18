#include <stdio.h>
#include "hardware/gpio.h"
#include "hardware/irq.h"
#include "stdbool.h"
#include "pico/stdlib.h"


#define clk 15 // clock
#define data 14 // data

void encoder_init();
void encoder(int8_t *encoder_counter);
void encoder_irq();