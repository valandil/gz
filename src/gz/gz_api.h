#ifndef GZ_API_H
#define GZ_API_H

#include "gfx.h"

// gfx functions
Gfx *    get_display_list_for_injection(void);

// input functions
int8_t   get_raw_input_x(void);
int8_t   get_raw_input_y(void);
uint16_t get_input_z_pad(void);

#endif // GZ_API_H