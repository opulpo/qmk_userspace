// QMK requires this file to be named config.h.
// User options are in options.h — edit that file to customize your keymap.

#pragma once
#include "options.h"

/******************************************************************************
 * QMK-specific settings (usually no need to change below)
 ******************************************************************************/

#define ONEDEADKEY_LAYOUT_planck_mit
/* NOTE: This line gets automatically filled in by the generator, but the
 * underlying layout may not yet exist, and keyboard specific layout may have
 * other variants you might want to check out.
 */

#define HRM_TAPPING_TERM 300
/* This is the delay used by Arsenik for sensitive tap-holds, which include
 * home-row-mods and mod-taps using the spacebar
 */

#undef PERMISSIVE_HOLD
/* QMK's `PERMISSIVE_HOLD` can be some extra comfort for experienced users, but
 * can also be an absolute pain for beginners, especially if you are trying to
 * learn home-row-mods, which is why we chose to deactivate this option by
 * default.
 */

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
/* QMK considers tap-hold actions as "tap by default" when another key is
 * pressed during the "quantum period", but some tap-holds should ideally be
 * "hold by default" to avoid this delay or accidentally pressing keys like
 * Enter or Escape.
 *
 * This option allows us to have a fine-grain controll over this behaviour.
 *
 * Arsenik provides a good default implementation of the required function
 * `get_hold_on_other_key_press` in the `keymap.c` file.
 */

#define TAPPING_TERM_PER_KEY
/* Tap-hold actions (especially home-row-mods) may be hard to use as a
 * beginner, as it is common to hold those keys for too long and accidentally
 * use the `hold-action`.
 *
 * This option allows us to have a fine-grain controll over the `TAPPING_TERM`
 * for each tap-hold key, allowing for a longer delay on those sensitive keys
 * without slowing down the safer ones.
 *
 * Arsenik provides a good default implementation of the required function
 * `get_tapping_term` in the `keymap.c` file.
 */

#undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE

#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#undef ENABLE_RGB_MATRIX_CYCLE_ALL
#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#undef ENABLE_RGB_MATRIX_DUAL_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#undef ENABLE_RGB_MATRIX_FLOWER_BLOOMING
#undef ENABLE_RGB_MATRIX_RAINDROPS
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#undef ENABLE_RGB_MATRIX_HUE_BREATHING
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM
#undef ENABLE_RGB_MATRIX_HUE_WAVE
#undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#undef ENABLE_RGB_MATRIX_PIXEL_FLOW
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN

#undef ENABLE_RGB_MATRIX_STARLIGHT
#undef ENABLE_RGB_MATRIX_STARLIGHT_SMOOTH
#undef ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
#undef ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT
#undef ENABLE_RGB_MATRIX_RIVERFLOW

#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN

#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_MULTISPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define RGB_MATRIX_DEFAULT_HUE 170
#define RGB_MATRIX_DEFAULT_SPD 255
