//USB CDC on boot : enable for Serial.print
//to define fonts : lv_conf.h #define LV_FONT_MONTSERRAT_8  1
//doc lvgl : https://docs.lvgl.io/latest/en/html/intro/index.html
//depedencies : LovyanGFX / lvgl

#include "displayStuff.h"


void setup() {
  Serial.begin(115200);

  tft.begin();
  tft.setRotation(3);
  tft.setBrightness(255);

  lv_init();
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touch_read;
  lv_indev_drv_register(&indev_drv);

  ui_init();

  Serial.println("setup ok");
}




void loop() {
  lv_timer_handler();
  delay(5);
}

//SquareLine functions to add manually if "dont export function" checked

void myfunction(lv_event_t *e) {
  bool clicked = 0;
  Serial.println("clicked");
  clicked = !clicked;

  int new_value;

  if (clicked == 0) new_value = 0;
  else new_value = 100;

  lv_bar_set_value(ui_Screen1_Bar3, new_value, LV_ANIM_OFF);
}

  int value = 0;
  char chaine[8] = { 0 } ;

void dropdown(lv_event_t *e) {
  value = lv_dropdown_get_selected(ui_Screen1_Dropdown4);

  sprintf(chaine, "Option %d", value + 1);

  Serial.println(chaine);

  lv_label_set_text(ui_Screen1_Label1, chaine);
}
