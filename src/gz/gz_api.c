#include "gz_api.h"

#include "z64.h"

// gfx functions
Gfx ** get_display_list_for_injection(void)
{

  return &z64_ctxt.gfx->overlay.p;
}

// input functions
int8_t get_raw_input_x(void)
{
  return z64_input_direct.raw.x;
}

int8_t get_raw_input_y(void)
{
  return z64_input_direct.raw.y;
}

uint16_t get_input_z_pad(void)
{
  return z64_input_direct.raw.pad;
}
