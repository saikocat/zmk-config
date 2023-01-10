// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

/*       36 KEY MATRIX / LAYOUT MAPPING
  ╭────────────────────┬────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │
  │ 20  21  22  23  24 │ 25  26  27  28  29 │
  ╰───────╮ 30  31  32 │ 33  34  35 ╭───────╯
          ╰────────────┴────────────╯
 ╭─────────────────────┬─────────────────────╮
 │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
 │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
 │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
 ╰───────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────╯
         ╰─────────────┴─────────────╯
*/

#pragma once

#define KPM_LT0  4  // left-top row
#define KPM_LT1  3
#define KPM_LT2  2
#define KPM_LT3  1
#define KPM_LT4  0

#define KPM_RT0  5  // right-top row
#define KPM_RT1  6
#define KPM_RT2  7
#define KPM_RT3  8
#define KPM_RT4  9

#define KPM_LM0 14  // left-middle row
#define KPM_LM1 13
#define KPM_LM2 12
#define KPM_LM3 11
#define KPM_LM4 10

#define KPM_RM0 15  // right-middle row
#define KPM_RM1 16
#define KPM_RM2 17
#define KPM_RM3 18
#define KPM_RM4 19

#define KPM_LB0 24  // left-bottom row
#define KPM_LB1 23
#define KPM_LB2 22
#define KPM_LB3 21
#define KPM_LB4 20

#define KPM_RB0 25  // right-bottom row
#define KPM_RB1 26
#define KPM_RB2 27
#define KPM_RB3 28
#define KPM_RB4 29

#define KPM_LH0 32  // left thumb keys
#define KPM_LH1 31
#define KPM_LH2 30

#define KPM_RH0 33  // right thumb keys
#define KPM_RH1 34
#define KPM_RH2 35
