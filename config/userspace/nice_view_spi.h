// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

#pragma once

// clang-format off
#define NICEVIEW_SPI(board, cs_pin)             \
&nice_view_spi {                                \
    cs-gpios = <board cs_pin GPIO_ACTIVE_HIGH>; \
};
// clang-format on
