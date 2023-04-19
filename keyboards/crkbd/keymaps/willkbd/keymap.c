#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
        KC_ESC  , KC_Q    , KC_W    , KC_F    , KC_P    , KC_G    ,      KC_J    , KC_L    , KC_U    , KC_Y    , KC_SCLN , KC_BSPC ,
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
        KC_TAB  , KC_A    , KC_R    , KC_S    , KC_T    , KC_D    ,      KC_H    , KC_N    , KC_E    , KC_I    , KC_O    , KC_QUOT ,
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
        KC_RCTL , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,      KC_K    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_ENT  ,
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
                                      KC_LSFT , KC_LCTL , KC_LALT ,      KC_LGUI , KC_SPC  , MO(1)
    //                              |---------|---------|---------|    |---------|---------|---------|
    ),
    [1] = LAYOUT_split_3x6_3(
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
        KC_ESC  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,      KC_NO   , KC_MPRV , KC_VOLD , KC_VOLU , KC_MNXT , KC_BSPC ,
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
        KC_TAB  , KC_GRV  , KC_MINS , KC_EQL  , KC_LBRC , KC_RBRC ,      KC_BSLS , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_NO   ,
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
        KC_RCTL , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,      KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_ENT  ,
    //|---------|---------|---------|---------|---------|---------|    |---------|---------|---------|---------|---------|---------|
                                      KC_LSFT , KC_LCTL , KC_LALT ,      KC_LGUI , KC_SPC  , KC_TRNS
    //                              |---------|---------|---------|    |---------|---------|---------|
    )
};

const key_override_t **key_overrides = (const key_override_t *[]) {
    &ko_make_basic(MOD_MASK_SHIFT, KC_LEFT, KC_HOME),
    &ko_make_basic(MOD_MASK_SHIFT, KC_DOWN, KC_PGDN),
    &ko_make_basic(MOD_MASK_SHIFT, KC_UP, KC_PGUP),
    &ko_make_basic(MOD_MASK_SHIFT, KC_RIGHT, KC_END),
    NULL
};
