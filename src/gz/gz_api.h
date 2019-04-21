#ifndef GZ_API_H
#define GZ_API_H

#include <n64.h>

#define STRINGIFY_MACRO(x) STR(x)
#define STR(x) #x

// Default values for the screen size.
#ifndef GAME_SCREEN_WIDTH
#define GAME_SCREEN_WIDTH          320
#endif
#ifndef GAME_SCREEN_HEIGHT
#define GAME_SCREEN_HEIGHT         240
#endif

// gfx functions
Gfx ** get_display_list_for_injection(void);

// input functions
int8_t   get_raw_input_x(void);
int8_t   get_raw_input_y(void);
uint16_t get_input_z_pad(void);

#endif // GZ_API_H
