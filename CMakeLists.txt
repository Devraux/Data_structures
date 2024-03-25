cmake_minimum_required(VERSION 3.27.4)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(I2C_display C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${PROJECT_NAME} 
    main.c
    lcd_lib/lcd_1602_i2c.c
    buttons/buttons.c
    menu/menu.c
    RingBuffer/RingBuffer.c
    Pool/Pool.c
    Lists/Lists.c)

# enable usb output, disable uart output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

include_directories(lcd_lib)
pico_add_extra_outputs(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} pico_stdlib hardware_i2c hardware_rtc hardware_irq)
