// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDHK
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC


// https://github.com/LilRooks/miryoku_zmk/blob/master/miryoku/custom_config.h
// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp ESC,           &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp LBKT,          &kp COMMA,         &kp DOT,           &kp RBKT,         \
U_NP,              U_NP,              &kp LCTRL,         &kp SPC,           &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,

// Adding layers:
// https://github.com/manna-harbour/miryoku/discussions/85
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Gaming")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10
