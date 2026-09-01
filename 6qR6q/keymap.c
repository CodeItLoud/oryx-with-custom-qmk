#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
};



#define HOME_THUMB_LEFT LT(13, KC_L)
#define MAGIC_H_KEY MT(MOD_RGUI, KC_H)
#define MAGIC_C_KEY KC_C

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_Q,       MAGIC_C_KEY,           KC_U,           KC_A,           KC_COMMA,                                           KC_P,           KC_B,           KC_M,           KC_L,           KC_F,           KC_MINUS,
    CW_TOGG,        MT(MOD_LGUI, KC_SCLN),         MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_I), MT(MOD_LCTL, KC_E),           KC_O,                                           KC_D,           MT(MOD_RCTL, KC_T), MT(MOD_RSFT, KC_N), MT(MOD_LALT, KC_R), MAGIC_H_KEY, KC_X,
    MT(MOD_LGUI, KC_SLASH),KC_TRANSPARENT, KC_Z,           KC_LBRC,        KC_QUOTE,       KC_DOT,                                        KC_V,           KC_G,           KC_W,           KC_Y,           KC_K,           KC_J,
    KC_TRANSPARENT, KC_7,           KC_5,           KC_3,           LT(4, KC_BSPC), LT(2, KC_SPACE),                                    LT(5, KC_SPACE),LT(3, KC_DELETE), KC_EQL,           LSFT(KC_EQL),           KC_GRV,           KC_8,
                                                    LT(2, KC_TAB),  KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(6, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_H),     LSFT(KC_U),     LSFT(KC_A),     LSFT(KC_Q),                                     RSFT(KC_P),     RSFT(KC_B),     RSFT(KC_M),     RSFT(KC_L),     KC_MINUS,       RSFT(KC_X),     
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_S),     LSFT(KC_I),     LSFT(KC_E),     LSFT(KC_O),                                     RSFT(KC_D),     RSFT(KC_T),     RSFT(KC_N),     RSFT(KC_R),     RSFT(KC_G),     RSFT(KC_F),     
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_LBRC),  LSFT(KC_QUOTE), LSFT(KC_SCLN),                                  RSFT(KC_V),     RSFT(KC_C),     RSFT(KC_W),     RSFT(KC_Z),     RSFT(KC_K),     RSFT(KC_J),     
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 OSL(5),         KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_X),     KC_TRANSPARENT,                                 LCTL(KC_Z),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,  KC_TRANSPARENT,                                 KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT,                                 KC_INSERT,      KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_TRANSPARENT,                                 KC_SPACE,       KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ENTER
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, ST_MACRO_0,     KC_QUES,        RALT(KC_8),     RALT(KC_9),     ST_MACRO_1,                                     KC_TRANSPARENT, RCTL(KC_X),     RCTL(KC_V),     RCTL(KC_C),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, RALT(KC_MINUS), LSFT(KC_7),     RALT(KC_7),     RALT(KC_0),     LSFT(KC_RBRC),                                  KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        LSFT(KC_4),     RALT(KC_NUBS),  RALT(KC_RBRC),  ST_MACRO_2,                                     KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, ST_MACRO_3,     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_X),     ST_MACRO_4,                                     LSFT(KC_1),     KC_NUBS,        LSFT(KC_NUBS),  LSFT(KC_0),     LSFT(KC_6),     RALT(KC_Q),
    KC_TRANSPARENT, RALT(KC_MINUS), KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   LSFT(KC_RBRC),                                  LSFT(KC_MINUS), LSFT(KC_8),     LSFT(KC_9),     KC_SLASH,       LSFT(KC_DOT),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,        ST_MACRO_5,                                     KC_RBRC,        LSFT(KC_5),     LSFT(KC_2),     LSFT(KC_BSLS),  LSFT(KC_COMMA), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_SPACE,       KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TAB,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ENTER
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_KP_PLUS,      KC_4,           KC_5,           KC_6,           KC_KP_DOT,                                    KC_TRANSPARENT, RCTL(KC_X),     RCTL(KC_V),     RCTL(KC_C),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_KP_MINUS,         KC_1,           KC_2,           KC_3,           LSFT(KC_DOT),                                   KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_DOT,                                     KC_TRANSPARENT, QK_LLCK,        TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_0,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TAB,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_PSCR,                                        KC_TRANSPARENT, RCTL(KC_X),     RCTL(KC_V),     RCTL(KC_C),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_SCRL,                                        KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_LEFT_ALT,    KC_RIGHT_GUI, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PAUSE,                                       KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_TRANSPARENT,                                 KC_SPACE,       KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_MINUS,    KC_4,           KC_5,           KC_6,           KC_KP_DOT,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_TRANSPARENT,                                 LSFT(KC_DOT),   KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,231,214}, {74,231,214}, {74,231,214}, {74,231,214}, {0,0,0}, {0,0,0}, {74,231,214}, {74,231,214}, {74,231,214}, {74,231,214}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {0,0,0}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {12,252,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {37,253,255}, {37,253,255}, {37,253,255}, {37,253,255}, {0,0,0}, {0,0,0}, {37,253,255}, {37,253,255}, {37,253,255}, {37,253,255}, {0,0,0}, {0,0,0}, {37,253,255}, {37,253,255}, {37,253,255}, {37,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {139,218,205}, {139,218,205}, {0,0,0}, {0,0,0}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


static bool last_was_s_tap = false;
static bool last_was_left_home_thumb_tap = false;

// Define how many past keystrokes you want to remember
#define KEY_HISTORY_SIZE 2
#define KEY_HISTORY_ALLOWED_MODS (MOD_MASK_SHIFT | MOD_BIT(KC_RALT))
#define KEY_HISTORY_KEYCODE_SHIFT_MODS (MOD_LSFT | MOD_RSFT)

// Array to store the key history
static uint16_t key_history[KEY_HISTORY_SIZE] = {0};

// Custom QMK starts
static uint16_t typed_keycode_for_history(uint16_t keycode) {
  uint16_t typed_keycode = keycode;
  bool keycode_has_shift = false;

  if (IS_QK_MOD_TAP(keycode)) {
    typed_keycode = QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
  } else if (IS_QK_LAYER_TAP(keycode)) {
    typed_keycode = QK_LAYER_TAP_GET_TAP_KEYCODE(keycode);
  } else if (IS_QK_MODS(keycode)) {
    uint8_t keycode_mods = QK_MODS_GET_MODS(keycode);
    if (keycode_mods & ~KEY_HISTORY_KEYCODE_SHIFT_MODS) {
      return keycode;
    }

    typed_keycode = QK_MODS_GET_BASIC_KEYCODE(keycode);
    keycode_has_shift = keycode_mods & KEY_HISTORY_KEYCODE_SHIFT_MODS;
  }

  if (typed_keycode > QK_BASIC_MAX) {
    return typed_keycode;
  }

  if (keycode_has_shift || ((get_mods() | get_oneshot_mods() | get_weak_mods()) & MOD_MASK_SHIFT)) {
    return LSFT(typed_keycode);
  }

  return typed_keycode;
}

static uint16_t history_base_keycode(uint16_t keycode) {
  if (IS_QK_MODS(keycode)) {
    uint8_t keycode_mods = QK_MODS_GET_MODS(keycode);
    if (keycode_mods & ~KEY_HISTORY_KEYCODE_SHIFT_MODS) {
      return keycode;
    }

    return QK_MODS_GET_BASIC_KEYCODE(keycode);
  }

  return keycode;
}

static bool history_key_is(uint8_t index, uint16_t keycode) {
  return history_base_keycode(key_history[index]) == keycode;
}

// Helper function to push a new keycode into the history buffer
void add_to_history(uint16_t keycode) {
  uint8_t active_mods = get_mods() | get_oneshot_mods() | get_weak_mods();
  if (active_mods & ~KEY_HISTORY_ALLOWED_MODS) {
    return;
  }

  keycode = typed_keycode_for_history(keycode);

  // Shift elements to the left to make room for the newest key
  for (int i = 0; i < KEY_HISTORY_SIZE - 1; i++) {
    key_history[i] = key_history[i + 1];
  }
  // Insert the newest key at the end of the array
  key_history[KEY_HISTORY_SIZE - 1] = keycode;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_0) SS_TAP(X_1) SS_TAP(X_3) SS_TAP(X_3) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(1)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_0) SS_TAP(X_1) SS_TAP(X_3) SS_TAP(X_3) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(1)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(1)  SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;




    // Custom QMK starts
    case MAGIC_H_KEY:
      if (record->tap.count && record->event.pressed) {
        bool was_caps_word_on = is_caps_word_on();

        // Look back at the history array!
        // index 0 is two keys ago; index 1 is the immediate last key

        if (history_key_is(0, KC_O) && history_key_is(1, KC_E)) {
          SEND_STRING(was_caps_word_on ? "S" : "s");
          add_to_history(was_caps_word_on ? LSFT(KC_S) : KC_S);
        } else if (history_key_is(0, KC_O) && history_key_is(1, KC_A)) {
          SEND_STRING(was_caps_word_on ? "S" : "s");
          add_to_history(was_caps_word_on ? LSFT(KC_S) : KC_S);
        } else if (history_key_is(0, KC_S) && history_key_is(1, KC_I)) {
          tap_code(KC_BSPC); // Sendet garantiert ein echtes Backspace
          if (was_caps_word_on) {
            caps_word_on();
          }
          SEND_STRING(was_caps_word_on ? "CH" : "ch");
          key_history[KEY_HISTORY_SIZE - 1] = was_caps_word_on ? LSFT(KC_C) : KC_C;
          add_to_history(was_caps_word_on ? LSFT(KC_H) : KC_H);
        } else {
          if (was_caps_word_on) {
            tap_code16(LSFT(KC_H));
          } else {
            tap_code(KC_H);
          }
          add_to_history(was_caps_word_on ? LSFT(KC_H) : KC_H);
        }

        return false;
      }
      return true;

    case MAGIC_C_KEY:
      if (record->event.pressed) {
        bool was_caps_word_on = is_caps_word_on();

        // Look back at the history array!
        // index 0 is two keys ago; index 1 is the immediate last key

        if (history_key_is(1, KC_J)) {
          tap_code(KC_BSPC); // Sendet garantiert ein echtes Backspace
          if (was_caps_word_on) {
            caps_word_on();
          }
          SEND_STRING(was_caps_word_on ? "Q" : "q");
          key_history[KEY_HISTORY_SIZE - 1] = was_caps_word_on ? LSFT(KC_Q) : KC_Q;
        } else {
          if (was_caps_word_on) {
            tap_code16(LSFT(KC_C));
          } else {
            tap_code(KC_C);
          }
          add_to_history(was_caps_word_on ? LSFT(KC_C) : KC_C);
        }

        return false;
      }
      return false;

    case KC_S:
        if (record->event.pressed) {
            last_was_s_tap = record->tap.count > 0;
            last_was_left_home_thumb_tap = false;
            add_to_history(keycode);
        }
        return true;

    case KC_MINUS:
        if (record->event.pressed) {
            if (last_was_s_tap) {
                SEND_STRING("ch");
            } else {
                tap_code(KC_MINUS);   // deutsches ß
            }

            last_was_s_tap = false;
            last_was_left_home_thumb_tap = false;
        }
        return false;

    case HOME_THUMB_LEFT:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          if (last_was_left_home_thumb_tap) {
            clear_oneshot_mods();
            last_was_left_home_thumb_tap = false;
          } else {
            set_oneshot_mods(MOD_BIT(KC_LSFT));
            last_was_left_home_thumb_tap = true;
          }
        }
      } else {
        if (record->event.pressed) {
          clear_oneshot_mods();
          last_was_left_home_thumb_tap = false;
          layer_on(2);
        } else {
          if (!is_layer_locked(2)) {
            layer_off(2);
          }
        }
      }
      return false;

    case LT(5, KC_SPACE):
      if (last_was_left_home_thumb_tap) {
        last_was_left_home_thumb_tap = false;
        if (record->event.pressed && record->tap.count > 0) {
          clear_oneshot_mods();
          caps_word_on();
          add_to_history(keycode);
          return false;
        }
      }
      return true;

    default:
        if (record->event.pressed) {
            last_was_s_tap = false;
            last_was_left_home_thumb_tap = false;
            add_to_history(keycode);
        }
        return true;
  }

  return true;
}

// Custom QMK here
bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    switch (keycode) {
        case MT(MOD_RGUI, KC_H):
            return false;  // Ignore and handle manually in process_record_user()
    }

    return true;  // Other keys can be repeated.
}

bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
    // Keycodes that continue Caps Word, with shift applied.
    case KC_A ... KC_Z:
    case KC_MINS:
      add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
      return true;

      // Keycodes that continue Caps Word, without shifting.
    case KC_1 ... KC_0:
    case KC_BSPC:
    case KC_DEL:
    case KC_UNDS:
    case KC_QUES:
      return true;

    default:
      return false;  // Deactivate Caps Word.
  }
}
