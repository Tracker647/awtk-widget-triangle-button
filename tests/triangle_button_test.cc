#include "triangle_button/triangle_button.h"
#include "gtest/gtest.h"

TEST(triangle_button, basic) {
  value_t v;
  widget_t* w = triangle_button_create(NULL, 10, 20, 30, 40);

  widget_destroy(w);
}
