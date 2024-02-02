// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

#pragma once

#include <dt-bindings/zmk/matrix_transform.h>

// clang-format off
#define LAYOUT_TRANSFORM_DATA(columns_cnt, rows_cnt, mapping) \
{                                                             \
    compatible = "zmk,matrix-transform";                      \
    columns = <columns_cnt>;                                  \
    rows = <rows_cnt>;                                        \
    map = <mapping>;                                          \
};

#define LAYOUT_TRANSFORM(                                           \
    layout_ref, keymap_transform_index, columns_cnt, rows_cnt, map) \
layout_ref: keymap_transform_##keymap_transform_index               \
    LAYOUT_TRANSFORM_DATA(columns_cnt, rows_cnt, map)


// | SW01 | SW02 | SW03 | SW04 | SW05 |
// | SW06 | SW07 | SW08 | SW09 | SW10 |
// | SW11 | SW12 | SW13 | SW14 | SW15 |
//               | SW16 | SW17 | SW18 |
// | SW05 | SW04 | SW03 | SW02 | SW01 |
// | SW10 | SW09 | SW08 | SW07 | SW06 |
// | SW15 | SW14 | SW13 | SW12 | SW11 |
// | SW18 | SW17 | SW16 |
#define LAYOUT_3X5_3_STACKED_TRANSFORM_MAP  \
    RC(0,0) RC(0,1) RC(0,2) RC(0,3) RC(0,4) \
    RC(1,0) RC(1,1) RC(1,2) RC(1,3) RC(1,4) \
    RC(2,0) RC(2,1) RC(2,2) RC(2,3) RC(2,4) \
                    RC(3,2) RC(3,3) RC(3,4) \
    RC(0,5) RC(0,6) RC(0,7) RC(0,8) RC(0,9) \
    RC(1,5) RC(1,6) RC(1,7) RC(1,8) RC(1,9) \
    RC(2,5) RC(2,6) RC(2,7) RC(2,8) RC(2,9) \
    RC(3,5) RC(3,6) RC(3,7)

#define LAYOUT_3X5_3_STACKED_TRANSFORM LAYOUT_TRANSFORM_DATA(10, 4, LAYOUT_3X5_3_STACKED_TRANSFORM_MAP)


// | SW01 | SW02 | SW03 | SW04 | SW05 | SW06 |
// | SW07 | SW08 | SW09 | SW10 | SW11 | SW12 |
// | SW13 | SW14 | SW15 | SW16 | SW17 | SW18 |
//                      | SW19 | SW20 | SW21 |
// | SW06 | SW05 | SW04 | SW03 | SW02 | SW01 |
// | SW12 | SW11 | SW10 | SW09 | SW08 | SW07 |
// | SW18 | SW17 | SW16 | SW15 | SW14 | SW13 |
// | SW21 | SW20 | SW19 |
#define LAYOUT_3X6_3_STACKED_TRANSFORM_MAP            \
    RC(0,0) RC(0,1) RC(0,2) RC(0,3) RC(0,4) RC(0,5)   \
    RC(1,0) RC(1,1) RC(1,2) RC(1,3) RC(1,4) RC(1,5)   \
    RC(2,0) RC(2,1) RC(2,2) RC(2,3) RC(2,4) RC(2,5)   \
                            RC(3,3) RC(3,4) RC(3,5)   \
    RC(0,6) RC(0,7) RC(0,8) RC(0,9) RC(0,10) RC(0,11) \
    RC(1,6) RC(1,7) RC(1,8) RC(1,9) RC(1,10) RC(1,11) \
    RC(2,6) RC(2,7) RC(2,8) RC(2,9) RC(2,10) RC(2,11) \
    RC(3,6) RC(3,7) RC(3,8)

#define LAYOUT_3X6_3_STACKED_TRANSFORM LAYOUT_TRANSFORM_DATA(12, 4, LAYOUT_3X6_3_STACKED_TRANSFORM_MAP)


// | SW02 | SW03 | SW04 | SW05 | SW06 |
// | SW08 | SW09 | SW10 | SW11 | SW12 |
// | SW14 | SW15 | SW16 | SW17 | SW18 |
//               | SW19 | SW20 | SW21 |
// | SW06 | SW05 | SW04 | SW03 | SW02 |
// | SW12 | SW11 | SW10 | SW09 | SW08 |
// | SW18 | SW17 | SW16 | SW15 | SW14 |
// | SW21 | SW20 | SW19 |
#define LAYOUT_3X6_3_TO_FIVE_STACKED_TRANSFORM_MAP            \
    RC(0,1) RC(0,2) RC(0,3) RC(0,4) RC(0,5)   \
    RC(1,1) RC(1,2) RC(1,3) RC(1,4) RC(1,5)   \
    RC(2,1) RC(2,2) RC(2,3) RC(2,4) RC(2,5)   \
                    RC(3,3) RC(3,4) RC(3,5)   \
    RC(0,6) RC(0,7) RC(0,8) RC(0,9) RC(0,10)  \
    RC(1,6) RC(1,7) RC(1,8) RC(1,9) RC(1,10)  \
    RC(2,6) RC(2,7) RC(2,8) RC(2,9) RC(2,10)  \
    RC(3,6) RC(3,7)  RC(3,8)

#define LAYOUT_3X6_3_TO_FIVE_STACKED_TRANSFORM LAYOUT_TRANSFORM_DATA(12, 4, LAYOUT_3X6_3_TO_FIVE_STACKED_TRANSFORM_MAP)

// clang-format on
