#include "buttons.h"

int8_t button_counter;

void buttons_init()
{   
stdio_init_all();

gpio_init(left_button);
gpio_set_dir(left_button,GPIO_IN);
gpio_pull_up(left_button);

gpio_init(mode_button);
gpio_set_dir(mode_button,GPIO_IN);
gpio_pull_up(mode_button);

gpio_init(right_button);
gpio_set_dir(right_button,GPIO_IN);
gpio_pull_up(right_button);

gpio_set_irq_enabled_with_callback(left_button, GPIO_IRQ_EDGE_FALL, true, &irq_handler);
gpio_set_irq_enabled_with_callback(mode_button, GPIO_IRQ_EDGE_FALL, true, &irq_handler);
gpio_set_irq_enabled_with_callback(right_button, GPIO_IRQ_EDGE_FALL, true, &irq_handler);
}


void irq_handler()
{
    static uint32_t last_button_press = 0;
    uint32_t current_time = us_to_ms(time_us_32());//debouncing
    if (gpio_get(left_button) == 0 && (current_time - last_button_press > 150))
    {
        button_counter -= 1;
        last_button_press = current_time;
    }
    if (gpio_get(mode_button) == 0 && (current_time - last_button_press > 150))
    {
        last_button_press = current_time;
    }
    if (gpio_get(right_button) == 0 && (current_time - last_button_press > 150))
    {
        button_counter += 1;
        last_button_press = current_time;
    }
}

