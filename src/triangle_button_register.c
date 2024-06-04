/**
 * File:   triangle_button.c
 * Author: 
 * Brief:  
 *
 * Copyright (c) 2024 - 2024 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2024-6-4  created
 *
 */


#include "tkc/mem.h"
#include "tkc/utils.h"
#include "triangle_button_register.h"
#include "base/widget_factory.h"
#include "triangle_button/triangle_button.h"

ret_t triangle_button_register(void) {
  return widget_factory_register(widget_factory(), WIDGET_TYPE_TRIANGLE_BUTTON, triangle_button_create);
}

const char* triangle_button_supported_render_mode(void) {
  return "OpenGL|AGGE-BGR565|AGGE-BGRA8888|AGGE-MONO";
}
