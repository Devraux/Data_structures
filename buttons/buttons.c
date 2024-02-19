#include "buttons.h"

int8_t* button_counter;

int8_t* buttons_init()
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

return button_counter;
}