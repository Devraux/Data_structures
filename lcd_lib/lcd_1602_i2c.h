#ifndef LCD_DRIVER_H
#define LCD_DRIVER_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "pico/binary_info.h"
#include "stdbool.h"

// commands
extern const int LCD_CLEARDISPLAY;
extern const int LCD_RETURNHOME;
extern const int LCD_ENTRYMODESET;
extern const int LCD_DISPLAYCONTROL;
extern const int LCD_CURSORSHIFT;
extern const int LCD_FUNCTIONSET;
extern const int LCD_SETCGRAMADDR;
extern const int LCD_SETDDRAMADDR;

// flags for display entry mode
extern const int LCD_ENTRYSHIFTINCREMENT;
extern const int LCD_ENTRYLEFT;

// flags for display and cursor control
extern const int LCD_BLINKON;
extern const int LCD_CURSORON;
extern const int LCD_DISPLAYON;

// flags for display and cursor shift
extern const int LCD_MOVERIGHT;
extern const int LCD_DISPLAYMOVE;

// flags for function set
extern const int LCD_5x10DOTS;
extern const int LCD_2LINE;
extern const int LCD_8BITMODE;

// flag for backlight control
extern const int LCD_BACKLIGHT;
extern const int LCD_ENABLE_BIT;
static int addr;


// Modes for lcd_send_byte
#define LCD_CHARACTER  1
#define LCD_COMMAND    0

#define MAX_LINES      2
#define MAX_CHARS      16
#define DELAY_US 600

void lcd_init(void);
void lcd_clear(void);
void lcd_set_cursor(int line, int position);
void lcd_string(const char *s);

#endif