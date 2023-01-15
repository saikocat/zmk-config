// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

/*       34 KEY MATRIX / STACKED LAYOUT MAPPING
  ╭────────────────────╮╭─────────────────────╮
  │  0   1   2   3   4 ││ LT4 LT3 LT2 LT1 LT0 │
  │  5   6   7   8   9 ││ LM4 LM3 LM2 LM1 LM0 │
  │ 10  11  12  13  14 ││ LB4 LB3 LB2 LB1 LB0 │
  ╰───────────╮ 15  16 │╰───────────╮ LH1 LH0 │
              ╰────────╯            ╰─────────╯
  ╭────────────────────╮╭─────────────────────╮
  │ 17  18  19  20  21 ││ RT0 RT1 RT2 RT3 RT4 │
  │ 22  23  24  25  26 ││ RM0 RM1 RM2 RM3 RM4 │
  │ 27  28  29  30  31 ││ RB0 RB1 RB2 RB3 RB4 │
  │ 32  33 ╭───────────╯│ RH0 RH1 ╭───────────╯
  ╰────────╯            ╰─────────╯
*/

#pragma once

#define KPM_LT0  4  // left-top row
#define KPM_LT1  3
#define KPM_LT2  2
#define KPM_LT3  1
#define KPM_LT4  0

#define KPM_RT0  17  // right-top row
#define KPM_RT1  18
#define KPM_RT2  19
#define KPM_RT3  20
#define KPM_RT4  21

#define KPM_LM0  9  // left-middle row
#define KPM_LM1  8
#define KPM_LM2  7
#define KPM_LM3  6
#define KPM_LM4  5

#define KPM_RM0 22  // right-middle row
#define KPM_RM1 23
#define KPM_RM2 24
#define KPM_RM3 25
#define KPM_RM4 26

#define KPM_LB0 14  // left-bottom row
#define KPM_LB1 13
#define KPM_LB2 12
#define KPM_LB3 11
#define KPM_LB4 10

#define KPM_RB0 27  // right-bottom row
#define KPM_RB1 28
#define KPM_RB2 29
#define KPM_RB3 30
#define KPM_RB4 31

#define KPM_LH0 16  // left thumb keys
#define KPM_LH1 15

#define KPM_RH0 32  // right thumb keys
#define KPM_RH1 33
