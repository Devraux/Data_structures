# include "encoder.h"


void encoder_init()
{
stdio_init_all();

gpio_init(clk);
gpio_set_dir(clk, GPIO_IN);
//gpio_pull_up(clk);

gpio_init(data); 
gpio_set_dir(data, GPIO_IN);
//gpio_pull_up(data);

gpio_set_irq_enabled_with_callback(clk, GPIO_IRQ_EDGE_FALL, true, &encoder);
gpio_set_irq_enabled_with_callback(data, GPIO_IRQ_EDGE_FALL, true, &encoder);

}

void encoder(int8_t* encoder_counter)
{
    if(gpio_get(clk) == 1)
        *encoder_counter++;
    else
        encoder_counter--;
}