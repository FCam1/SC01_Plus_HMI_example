// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

extern lv_obj_t * ui_Screen1;
void ui_event_Screen1_Switch3(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Switch3;
void ui_event_Screen1_Dropdown4(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Dropdown4;
extern lv_obj_t * ui_Screen1_Bar3;
extern lv_obj_t * ui_Screen1_Label1;
void ui_event_Screen1_Button1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Button1;
extern lv_obj_t * ui_Screen1_Panel2;
extern lv_obj_t * ui_Screen2;
void ui_event_Screen2_Arc1(lv_event_t * e);
extern lv_obj_t * ui_Screen2_Arc1;
void ui_event_Screen2_Checkbox1(lv_event_t * e);
extern lv_obj_t * ui_Screen2_Checkbox1;
extern lv_obj_t * ui_Screen2_Label1;
extern lv_obj_t * ui_Screen2_Slider1;


LV_IMG_DECLARE(ui_img_1658854876);    // assets\kingfisher-478.png

//SquareLine functions to add manually if "dont export function" checked
void myfunction(lv_event_t * e);
void dropdown(lv_event_t * e);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
