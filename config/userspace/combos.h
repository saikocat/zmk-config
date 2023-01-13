// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

#pragma once

#if !defined COMBO_TERM
#    define COMBO_TERM 30
#endif

#if !defined COMBO_LAYERS
#    define COMBO_LAYERS 0 1
#endif

// clang-format off
#define COMBO_MACRO_CHOOSER(name, combo_bindings, keypos, combo_layers, combo_timeout, FUNC, ...) FUNC
#define COMBO(...) COMBO_MACRO_CHOOSER(__VA_ARGS__, COMBO_5_ARGS, COMBO_4_ARGS)(__VA_ARGS__)
#define COMBO_4_ARGS(name, combo_bindings, keypos, combo_layers)                \
    COMBO_5_ARGS(name, combo_bindings, keypos, combo_layers, COMBO_TERM)
#define COMBO_5_ARGS(name, combo_bindings, keypos, combo_layers, combo_timeout) \
    combo_##name {                                                              \
        bindings      = <combo_bindings>;                                       \
        key-positions = <keypos>;                                               \
        timeout-ms    = <combo_timeout>;                                        \
        layers        = <combo_layers>;                                         \
    };
// clang-format on
