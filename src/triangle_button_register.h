/**
 * File:   triangle_button_register.h
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


#ifndef TK_TRIANGLE_BUTTON_REGISTER_H
#define TK_TRIANGLE_BUTTON_REGISTER_H

#include "base/widget.h"

BEGIN_C_DECLS

/**
 * @method  triangle_button_register
 * 注册控件。
 *
 * @annotation ["global"]
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t triangle_button_register(void);

/**
 * @method  triangle_button_supported_render_mode
 * 获取支持的渲染模式。
 *
 * @annotation ["global"]
 *
 * @return {const char*} 返回渲染模式。
 */
const char* triangle_button_supported_render_mode(void);

END_C_DECLS

#endif /*TK_TRIANGLE_BUTTON_REGISTER_H*/
