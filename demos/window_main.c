#include "awtk.h"
#include "triangle_button_register.h"

static ret_t on_close(void* ctx, event_t* e) {
  tk_quit();

  return RET_OK;
}

/**
 * 初始化
 */
ret_t application_init(void) {
  triangle_button_register();

  widget_t* win = window_open("main");
  return RET_OK;
}

/**
 * 退出
 */
ret_t application_exit(void) {
  log_debug("application_exit\n");
  return RET_OK;
}
