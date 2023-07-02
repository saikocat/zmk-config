// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

// Bail out early if these values are not set
#ifndef KEYPOS_MORPH
#    error "Missing 'KEYPOS_MORPH' defininition in your keymap!"
#endif

#ifndef COMBO_LAYERS
#    define COMBO_LAYERS _QWERTY _COLEMAK_DH _NAV _NUMPAD
#endif

#include KEYPOS_MORPH
#include "userspace/keymaps.h"
#include "userspace/matrix_transforms.h"
#include "userspace/behaviors.dtsi"
#include "userspace/combos.dtsi"

#if (__has_include("local_combos.dtsi"))
#    include "local_combos.dtsi"
#endif
