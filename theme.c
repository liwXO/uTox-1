#include "main.h"

void theme_load(char loadtheme)
{
    // Update the settings dropdown UI
    dropdown_theme.selected = loadtheme;

    // ==== Default theme ====
    //---- Main chat area ----
    COLOR_MAIN_BACKGROUND = 0xFFFFFF;
    COLOR_MAIN_TEXT       = 0x333333;
    COLOR_MAIN_SUBTEXT    = 0x595959;
    COLOR_MAIN_ACTIONTEXT = 0x4444ff;
    COLOR_MAIN_QUOTETEXT  = 0x008800;
    COLOR_MAIN_URLTEXT    = COLOR_MAIN_ACTIONTEXT;

    //---- Top & bottom menu colours ----
    COLOR_MENU_BACKGROUND        = 0x1c1c1c;
    COLOR_MENU_TEXT              = 0xC0C0C0;
    COLOR_MENU_HOVER_BACKGROUND  = 0x202020;
    COLOR_MENU_ACTIVE_BACKGROUND = 0x404040;
    COLOR_MENU_ACTIVE_TEXT       = 0xE5E5E5;

    //---- Friend list  ----
    COLOR_LIST_BACKGROUND       = 0x282828;
    COLOR_LIST_HOVER_BACKGROUND = 0x555555;
    COLOR_LIST_TEXT             = COLOR_MAIN_BACKGROUND;
    COLOR_LIST_SUBTEXT          = 0xBaBaBa;

    //---- Text selection ----
    COLOR_SELECTION_BACKGROUND = COLOR_MAIN_TEXT;
    COLOR_SELECTION_TEXT       = COLOR_MAIN_BACKGROUND;
    COLOR_GROUP_UNUSUAL        = COLOR_MAIN_URLTEXT;

    //---- Inputs, dropdowns & tooltips ----
    COLOR_EDGE_NORMAL             = 0xC0C0C0;
    COLOR_EDGE_ACTIVE             = COLOR_MAIN_URLTEXT;
    COLOR_EDGE_HOVER              = 0x707070;
    COLOR_ACTIVEOPTION_BACKGROUND = 0xCCCCFF;
    COLOR_ACTIVEOPTION_TEXT       = COLOR_MAIN_TEXT;
    
    //---- Status circles ----
    COLOR_STATUS_ONLINE = 0x6bc260;
    COLOR_STATUS_AWAY   = 0xcebf45;
    COLOR_STATUS_BUSY   = 0xc84e4e;
    
    //---- Buttons ---
    COLOR_BUTTON_SUCCESS_BACKGROUND       = COLOR_STATUS_ONLINE;
    COLOR_BUTTON_SUCCESS_TEXT             = COLOR_MAIN_BACKGROUND;
    COLOR_BUTTON_SUCCESS_HOVER_BACKGROUND = 0x76d56a;
    COLOR_BUTTON_SUCCESS_HOVER_TEXT       = COLOR_MAIN_BACKGROUND;
    COLOR_BUTTON_WARNING_BACKGROUND       = COLOR_STATUS_AWAY;
    COLOR_BUTTON_WARNING_TEXT             = COLOR_MAIN_BACKGROUND;
    COLOR_BUTTON_WARNING_HOVER_BACKGROUND = 0xe3d24c;
    COLOR_BUTTON_WARNING_HOVER_TEXT       = COLOR_MAIN_BACKGROUND;
    COLOR_BUTTON_DANGER_BACKGROUND        = COLOR_STATUS_BUSY;
    COLOR_BUTTON_DANGER_TEXT              = COLOR_MAIN_BACKGROUND;
    COLOR_BUTTON_DANGER_HOVER_BACKGROUND  = 0xdc5656;
    COLOR_BUTTON_DANGER_HOVER_TEXT        = COLOR_MAIN_BACKGROUND;
    COLOR_BUTTON_DISABLED_BACKGROUND      = 0xd1d1d1;
    COLOR_BUTTON_DISABLED_TEXT            = COLOR_MAIN_BACKGROUND;
    
    switch (loadtheme) {
    case THEME_DARK:
        COLOR_MAIN_BACKGROUND = 0x333333;
        COLOR_MAIN_TEXT = 0xdfdfdf;
        COLOR_MAIN_SUBTEXT = 0xbbbbbb;
        COLOR_MAIN_ACTIONTEXT = 0x27a9bc;
        COLOR_MAIN_URLTEXT = COLOR_MAIN_ACTIONTEXT;
        COLOR_MAIN_QUOTETEXT = 0x55b317;
        COLOR_LIST_BACKGROUND = 0x222222;
        COLOR_LIST_HOVER_BACKGROUND = 0x151515;
        COLOR_MENU_BACKGROUND = COLOR_LIST_BACKGROUND;
        COLOR_MENU_HOVER_BACKGROUND = COLOR_LIST_HOVER_BACKGROUND;
        COLOR_MENU_ACTIVE_BACKGROUND = COLOR_MAIN_TEXT;
        COLOR_SELECTION_BACKGROUND = COLOR_MAIN_TEXT;
        COLOR_SELECTION_TEXT = COLOR_MAIN_BACKGROUND;
        COLOR_GROUP_UNUSUAL = COLOR_MAIN_URLTEXT;
        COLOR_EDGE_NORMAL = 0x555555;
        COLOR_EDGE_ACTIVE = 0x228888;
        COLOR_EDGE_HOVER = 0x999999;
        COLOR_ACTIVEOPTION_BACKGROUND = 0x228888;
        COLOR_ACTIVEOPTION_TEXT = COLOR_MAIN_TEXT;
        COLOR_MENU_ACTIVE_TEXT = 0x151515;
        COLOR_BUTTON_SUCCESS_BACKGROUND       = 0x414141;
        COLOR_BUTTON_SUCCESS_TEXT             = 0x33a63d;
        COLOR_BUTTON_SUCCESS_HOVER_BACKGROUND = 0x455147;
        COLOR_BUTTON_SUCCESS_HOVER_TEXT       = 0x6eff3a;
        COLOR_BUTTON_WARNING_BACKGROUND       = 0x414141;
        COLOR_BUTTON_WARNING_TEXT             = 0xbd9e22;
        COLOR_BUTTON_WARNING_HOVER_BACKGROUND = 0x4c493c;
        COLOR_BUTTON_WARNING_HOVER_TEXT       = 0xff8d2a;
        COLOR_BUTTON_DANGER_BACKGROUND        = 0x414141;
        COLOR_BUTTON_DANGER_TEXT              = 0xbd2525;
        COLOR_BUTTON_DANGER_HOVER_BACKGROUND  = 0x513939;
        COLOR_BUTTON_DANGER_HOVER_TEXT        = 0xfa2626;
        COLOR_BUTTON_DISABLED_BACKGROUND      = 0x414141;
        COLOR_BUTTON_DISABLED_TEXT            = COLOR_MAIN_BACKGROUND;
        break;

    case THEME_LIGHT:
        COLOR_LIST_BACKGROUND = 0xF0F0F0;
        COLOR_LIST_HOVER_BACKGROUND = 0xE0E0E0;
        COLOR_LIST_TEXT = COLOR_MAIN_TEXT;
        COLOR_LIST_SUBTEXT = COLOR_MAIN_SUBTEXT;
        COLOR_MENU_BACKGROUND = 0xF0F0F0;
        COLOR_MENU_HOVER_BACKGROUND = 0xE0E0E0;
        COLOR_MENU_ACTIVE_BACKGROUND = 0x555555;
        COLOR_MENU_TEXT = 0x555555;
        COLOR_MENU_ACTIVE_TEXT = 0xffffff;
        COLOR_EDGE_NORMAL = 0xC0C0C0;
        COLOR_EDGE_ACTIVE = COLOR_MAIN_URLTEXT;
        COLOR_EDGE_HOVER = 0x707070;
        COLOR_ACTIVEOPTION_BACKGROUND = 0xDDEEFF;
        COLOR_ACTIVEOPTION_TEXT = COLOR_MAIN_TEXT;
        break;

    case THEME_HIGHCONTRAST:
        
        COLOR_MAIN_BACKGROUND = 0xFFFFFF;
        COLOR_MAIN_TEXT = 0x000001;
        COLOR_MAIN_SUBTEXT = COLOR_MAIN_TEXT;
        COLOR_MAIN_ACTIONTEXT = 0x000033;
        COLOR_MAIN_QUOTETEXT = 0x003300;
        COLOR_MAIN_URLTEXT = COLOR_MAIN_ACTIONTEXT;
        COLOR_MENU_BACKGROUND = COLOR_MAIN_BACKGROUND;
        COLOR_MENU_TEXT = COLOR_MAIN_TEXT;
        COLOR_MENU_HOVER_BACKGROUND = COLOR_MAIN_BACKGROUND;
        COLOR_MENU_ACTIVE_BACKGROUND = COLOR_MAIN_TEXT;
        COLOR_MENU_ACTIVE_TEXT = COLOR_MAIN_BACKGROUND;
        COLOR_LIST_BACKGROUND = 0x444444;
        COLOR_LIST_HOVER_BACKGROUND = COLOR_MAIN_TEXT;
        COLOR_LIST_TEXT = COLOR_MAIN_BACKGROUND;
        COLOR_LIST_SUBTEXT = COLOR_MAIN_BACKGROUND;
        COLOR_SELECTION_BACKGROUND = COLOR_MAIN_TEXT;
        COLOR_SELECTION_TEXT = COLOR_MAIN_BACKGROUND;
        COLOR_GROUP_UNUSUAL = COLOR_MAIN_URLTEXT;
        COLOR_EDGE_NORMAL = COLOR_MAIN_TEXT;
        COLOR_EDGE_ACTIVE = COLOR_MAIN_TEXT;
        COLOR_EDGE_HOVER = COLOR_MAIN_TEXT;
        COLOR_ACTIVEOPTION_BACKGROUND = COLOR_MAIN_TEXT;
        COLOR_ACTIVEOPTION_TEXT = COLOR_MAIN_BACKGROUND;
        COLOR_STATUS_ONLINE = 0x00ff00;
        COLOR_STATUS_AWAY   = 0xffff00;
        COLOR_STATUS_BUSY   = 0xff0000;
        COLOR_BUTTON_SUCCESS_BACKGROUND       = 0x00ff00;
        COLOR_BUTTON_SUCCESS_TEXT             = COLOR_MAIN_BACKGROUND;
        COLOR_BUTTON_SUCCESS_HOVER_BACKGROUND = 0x00ff00;
        COLOR_BUTTON_SUCCESS_HOVER_TEXT       = COLOR_MAIN_BACKGROUND;
        COLOR_BUTTON_WARNING_BACKGROUND       = 0xffff00;
        COLOR_BUTTON_WARNING_TEXT             = COLOR_MAIN_BACKGROUND;
        COLOR_BUTTON_WARNING_HOVER_BACKGROUND = 0xffff00;
        COLOR_BUTTON_WARNING_HOVER_TEXT       = COLOR_MAIN_BACKGROUND;
        COLOR_BUTTON_DANGER_BACKGROUND        = 0xff0000;
        COLOR_BUTTON_DANGER_TEXT              = COLOR_MAIN_BACKGROUND;
        COLOR_BUTTON_DANGER_HOVER_BACKGROUND  = 0xff0000;
        COLOR_BUTTON_DANGER_HOVER_TEXT        = COLOR_MAIN_BACKGROUND;
        COLOR_BUTTON_DISABLED_BACKGROUND      = 0x444444;
        COLOR_BUTTON_DISABLED_TEXT            = COLOR_MAIN_TEXT;
        break;
    }
    
    status_color[0] = COLOR_STATUS_ONLINE;
    status_color[1] = COLOR_STATUS_AWAY;
    status_color[2] = COLOR_STATUS_BUSY;
    status_color[3] = COLOR_STATUS_BUSY;
}
