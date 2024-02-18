# include "encoder.h"

int8_t encoder_counter = 0;
uint32_t debouncing = 0;

void encoder_init()
{
stdio_init_all();

gpio_init(clk);
gpio_set_dir(clk, GPIO_IN);
gpio_disable_pulls(clk);

gpio_init(data); 
gpio_set_dir(data, GPIO_IN);
gpio_disable_pulls(data);

//gpio_set_irq_enabled_with_callback(clk, GPIO_IRQ_EDGE_RISE, true, &encoder_irq);
gpio_set_irq_enabled_with_callback(data, GPIO_IRQ_EDGE_FALL, true, &encoder_irq);
}

void encoder(int8_t* encoder_counter)
{
    uint32_t current_time = us_to_ms(time_us_32());//debouncing
    
    if((gpio_get(clk) == 1) && (current_time - debouncing > 100))
    {
        *encoder_counter += 1;
        debouncing = current_time;
    }
    else if(current_time - debouncing > 100)
    {
        *encoder_counter -= 1;
        debouncing = current_time;
    }

    int8_t var = *encoder_counter;
    char int_str[20];
    sprintf(int_str, "%d", var);
    printf("Var: %s\n", int_str);

}

void encoder_irq()
{
    encoder(&encoder_counter);
}