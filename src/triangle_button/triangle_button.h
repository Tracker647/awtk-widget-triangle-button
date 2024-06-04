/* triangle_button.h */
#ifndef TK_TRANGLE_BUTTON_H
#define TK_TRANGLE_BUTTON_H

#include "base/widget.h"

BEGIN_C_DECLS
/**
 * @class triangle_button_t
 * @parent widget_t
 * @annotation ["scriptable","design","widget"]
 * 
 * ```xml
 * <!-- ui -->
 * <triangle_button name="triangle_button" w="14" h="40">
 * ```
 *
 * ```xml
 * <!-- style -->
 * <style name="default" font_size="32" text_color="#000000">
 *   <normal bg_color="#ADB8C9"/>
 *   <pressed bg_color="#00C2FF"/>
 * </style>
 * ```
 * 
 */
typedef struct _triangle_button_t {
  widget_t widget;
 /**
 * @property {bool_t} is_left
 * @annotation ["set_prop","get_prop","readable","design","scriptable"]
 * 标记三角形向左还是向右
 */
  bool_t is_left;
  /**
   * @property {bool_t} pressed
   * @annotation ["set_prop","get_prop","readable","design","scriptable"]
   * 标记按钮是否按下
   */
  bool_t pressed;
} triangle_button_t;

/**
 * @method triangle_button_create
 * 创建triangle_button对象
 * @annotation ["constructor", "scriptable"]
 * @param {widget_t*} parent 父控件
 * @param {xy_t} x x坐标
 * @param {xy_t} y y坐标
 * @param {wh_t} w 宽度
 * @param {wh_t} h 高度
 *
 * @return {widget_t*} 对象。
 */
widget_t* triangle_button_create(widget_t* parent, xy_t x, xy_t y, wh_t w, wh_t h);

/**
 * @method triangle_button_cast
 * 转换为triangle_button对象(供脚本语言使用)。
 * @annotation ["cast", "scriptable"]
 * @param {widget_t*} widget triangle_button对象。
 *
 * @return {widget_t*} triangle_button对象。
 */
widget_t* triangle_button_cast(widget_t* widget);

#define WIDGET_TYPE_TRIANGLE_BUTTON "triangle_button"
#define WIDGET_PROP_IS_LEFT "is_left"

#define TRANGLE_BUTTON(widget) ((triangle_button_t*)(widget))

END_C_DECLS

#endif /*TK_TRANGLE_BUTTON_H*/
