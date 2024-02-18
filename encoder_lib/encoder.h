#include <stdio.h>
#include "pico.h"
#include "hardware/gpio.h"
#include "hardware/irq.h"


#define clk 15 // clock
#define data 14 // data

void encoder_init();
void encoder(int8_t* encoder_counter);