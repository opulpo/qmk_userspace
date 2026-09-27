#pragma once

#include "keycodes_aekeynox.h"
#include "layouts.h"

// Symbols layer access
#ifdef ENABLE_SYMBOLS_LAYER
#    define SYMBOLS            MO(_symbols)
#    define SYMBOLS_T(keycode) LT(_symbols, keycode)
#else
#    define SYMBOLS            KC_RALT
#    define SYMBOLS_T(keycode) RALT_T(keycode)
#endif

// TODO: find better names for those macros ?
#ifdef MAC_MODIFIERS
#    define _GUI_T LCTL_T
#    define _CTL_T LGUI_T
#    define _ALT_T LALT_T
#    define _GUI   KC_LCTL
#    define _CTL   KC_LGUI
#    define _ALT   KC_LALT
#else
#    define _GUI_T LGUI_T
#    define _CTL_T LCTL_T
#    define _ALT_T LALT_T
#    define _GUI   KC_LGUI
#    define _CTL   KC_LCTL
#    define _ALT   KC_LALT
#endif

#ifdef ENABLE_HRM
#    define KC_SS _GUI_T(KC_S)
#    define KC_DD _CTL_T(KC_D)
#    define KC_FF _ALT_T(KC_F)
#    define KC_JJ _ALT_T(KC_J)
#    define KC_KK _CTL_T(KC_K)
#    define KC_LL _GUI_T(KC_L)
#else
#    define KC_SS KC_S
#    define KC_DD KC_D
#    define KC_FF KC_F
#    define KC_JJ KC_J
#    define KC_KK KC_K
#    define KC_LL KC_L
#endif

// Extra simple config for beginners with bigger keyboards
#if defined SIMPLE_THUMBS
#    define LTHUMB_WIDE  _GUI
#    define LEFT_THUMB   _ALT
#    define THUMB_BAR    KC_SPC
#    define RIGHT_THUMB  SYMBOLS
#    define RTHUMB_WIDE  MO(_num_nav)
#elif defined VIM_NAVIGATION
#    define LTHUMB_WIDE  OS_LSFT
#    define LEFT_THUMB   LT(_vim_nav, KC_BSPC)
#    define THUMB_BAR    LT(_num_row, KC_ENT)
#    define RIGHT_THUMB  LT(_vim_nav, KC_SPC)
#    define RTHUMB_WIDE  OSL(_symbols)
#else
#    define LTHUMB_WIDE  LT(_num_nav, KC_BSPC)
#    define LEFT_THUMB   OS_LSFT
#    define THUMB_BAR    LT(_num_nav, KC_SPC)
#    define RIGHT_THUMB  OSL(_symbols)
#    define RTHUMB_WIDE  LT(_num_row, KC_ENT)
#endif
