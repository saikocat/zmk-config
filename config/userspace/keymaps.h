// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

#pragma once

#define ____ &trans
#define XXXX &none

// clang-format off
#define _QWERTY         0
#define _COLEMAK_DH     1
#define _GAME_OVERWATCH 2
#define _GAME_NUMPAD    3
#define _LOWER          4
#define _RAISE          5
#define _NUMPAD         6
#define _ADJUST         7
#define _SPECIAL        8
#define _NAV            _RAISE

#define DEL_LWR  _LOWER DEL
#define BSPC_NUM _NUMPAD BSPC
#define ENT_ADJ  _ADJUST ENTER
#define TAB_RSE  _RAISE TAB
// clang-format on

// clang-format off
#define KEYMAP_MACRO_CHOOSER(name, layout, sensors, FUNC, ...) FUNC
#define LAYER(...) KEYMAP_MACRO_CHOOSER(__VA_ARGS__, LAYER_3_ARGS, LAYER_2_ARGS)(__VA_ARGS__)
#define LAYER_2_ARGS(name, layout)                      \
    layer_##name {                                      \
        label    = #name;                               \
        bindings = <layout>;                            \
    };
#define LAYER_3_ARGS(name, layout, sensors)             \
    layer_##name {                                      \
        label           = #name;                        \
        bindings        = <layout>;                     \
        sensor-bindings = <sensors>;                    \
    };
// clang-format on
