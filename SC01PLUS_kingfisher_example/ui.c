// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
void ui_event_Screen1_Switch3(lv_event_t * e);
lv_obj_t * ui_Screen1_Switch3;
void ui_event_Screen1_Dropdown4(lv_event_t * e);
lv_obj_t * ui_Screen1_Dropdown4;
lv_obj_t * ui_Screen1_Bar3;
lv_obj_t * ui_Screen1_Label1;
void ui_event_Screen1_Button1(lv_event_t * e);
lv_obj_t * ui_Screen1_Button1;
lv_obj_t * ui_Screen1_Panel2;
lv_obj_t * ui_Screen2;
void ui_event_Screen2_Arc1(lv_event_t * e);
lv_obj_t * ui_Screen2_Arc1;
void ui_event_Screen2_Checkbox1(lv_event_t * e);
lv_obj_t * ui_Screen2_Checkbox1;
lv_obj_t * ui_Screen2_Label1;
lv_obj_t * ui_Screen2_Slider1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1_Switch3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        myfunction(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_opacity_set(ui_Screen1_Panel2, 255);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_opacity_set(ui_Screen1_Panel2, 100);
    }
}
void ui_event_Screen1_Dropdown4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        dropdown(e);
    }
}
void ui_event_Screen1_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 100, 0);
    }
}
void ui_event_Screen2_Arc1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Screen2_Label1, target, "", "");
    }
}
void ui_event_Screen2_Checkbox1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_1658854876, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Switch3 = lv_switch_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Switch3, 86);
    lv_obj_set_height(ui_Screen1_Switch3, 50);
    lv_obj_set_x(ui_Screen1_Switch3, -184);
    lv_obj_set_y(ui_Screen1_Switch3, -125);
    lv_obj_set_align(ui_Screen1_Switch3, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_color(ui_Screen1_Switch3, lv_color_hex(0xC53800), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Screen1_Switch3, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_Screen1_Dropdown4 = lv_dropdown_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Dropdown4, 150);
    lv_obj_set_height(ui_Screen1_Dropdown4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Dropdown4, -146);
    lv_obj_set_y(ui_Screen1_Dropdown4, -41);
    lv_obj_set_align(ui_Screen1_Dropdown4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Dropdown4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Screen1_Bar3 = lv_bar_create(ui_Screen1);
    lv_bar_set_value(ui_Screen1_Bar3, 100, LV_ANIM_OFF);
    lv_obj_set_width(ui_Screen1_Bar3, 358);
    lv_obj_set_height(ui_Screen1_Bar3, 47);
    lv_obj_set_x(ui_Screen1_Bar3, -4);
    lv_obj_set_y(ui_Screen1_Bar3, 126);
    lv_obj_set_align(ui_Screen1_Bar3, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Screen1_Bar3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Bar3, lv_color_hex(0xBDA718), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Bar3, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Screen1_Bar3, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Bar3, lv_color_hex(0xC5AA20), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Bar3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Bar3, lv_color_hex(0xC53800), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Bar3, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Screen1_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, -194);
    lv_obj_set_y(ui_Screen1_Label1, 49);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(ui_Screen1_Label1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Button1, 49);
    lv_obj_set_height(ui_Screen1_Button1, 46);
    lv_obj_set_x(ui_Screen1_Button1, 208);
    lv_obj_set_y(ui_Screen1_Button1, -129);
    lv_obj_set_align(ui_Screen1_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1_Button1, lv_color_hex(0xC53800), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen1_Button1, lv_color_hex(0xC6633C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen1_Button1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Screen1_Button1, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Screen1_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Screen1_Button1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Screen1_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_Screen1_Button1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_Screen1_Button1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Panel2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Panel2, 49);
    lv_obj_set_height(ui_Screen1_Panel2, 50);
    lv_obj_set_x(ui_Screen1_Panel2, -76);
    lv_obj_set_y(ui_Screen1_Panel2, -126);
    lv_obj_set_align(ui_Screen1_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Screen1_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Screen1_Panel2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen1_Switch3, ui_event_Screen1_Switch3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Dropdown4, ui_event_Screen1_Dropdown4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1_Button1, ui_event_Screen1_Button1, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Screen2_Arc1 = lv_arc_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Arc1, 150);
    lv_obj_set_height(ui_Screen2_Arc1, 150);
    lv_obj_set_x(ui_Screen2_Arc1, -133);
    lv_obj_set_y(ui_Screen2_Arc1, -40);
    lv_obj_set_align(ui_Screen2_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Screen2_Arc1, 50);

    lv_obj_set_style_arc_color(ui_Screen2_Arc1, lv_color_hex(0xC53800), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Screen2_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Screen2_Arc1, lv_color_hex(0xC53A00), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Screen2_Arc1, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui_Screen2_Arc1, 255, LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui_Screen2_Arc1, 2, LV_PART_KNOB | LV_STATE_PRESSED);

    ui_Screen2_Checkbox1 = lv_checkbox_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Checkbox1, 114);
    lv_obj_set_height(ui_Screen2_Checkbox1, lv_pct(7));
    lv_obj_set_x(ui_Screen2_Checkbox1, -171);
    lv_obj_set_y(ui_Screen2_Checkbox1, -139);
    lv_obj_set_align(ui_Screen2_Checkbox1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen2_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    lv_obj_set_style_border_color(ui_Screen2_Checkbox1, lv_color_hex(0xC53800), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Screen2_Checkbox1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen2_Checkbox1, 2, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Screen2_Label1 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label1, -132);
    lv_obj_set_y(ui_Screen2_Label1, -47);
    lv_obj_set_align(ui_Screen2_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label1, "50");

    ui_Screen2_Slider1 = lv_slider_create(ui_Screen2);
    lv_slider_set_range(ui_Screen2_Slider1, 0, 255);
    lv_slider_set_value(ui_Screen2_Slider1, 20, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Screen2_Slider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Screen2_Slider1, 0,
                                                                                                    LV_ANIM_OFF);
    lv_obj_set_width(ui_Screen2_Slider1, 274);
    lv_obj_set_height(ui_Screen2_Slider1, 42);
    lv_obj_set_x(ui_Screen2_Slider1, 16);
    lv_obj_set_y(ui_Screen2_Slider1, 117);
    lv_obj_set_align(ui_Screen2_Slider1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Screen2_Slider1, lv_color_hex(0xFBFBFB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Slider1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Screen2_Slider1, lv_color_hex(0x242424), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Screen2_Slider1, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Screen2_Slider1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Screen2_Slider1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen2_Slider1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen2_Slider1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Screen2_Slider1, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_Screen2_Slider1, lv_color_hex(0xC53800), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Slider1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Screen2_Slider1, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Screen2_Slider1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen2_Slider1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen2_Slider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Screen2_Slider1, 255, LV_PART_INDICATOR | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_Screen2_Slider1, lv_color_hex(0xC53800), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Slider1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen2_Arc1, ui_event_Screen2_Arc1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen2_Checkbox1, ui_event_Screen2_Checkbox1, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
