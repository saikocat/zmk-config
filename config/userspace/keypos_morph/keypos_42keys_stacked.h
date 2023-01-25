// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

/*            42 KEY MATRIX / STACKED LAYOUT MAPPING
   ╭────────────────────────╮  ╭─────────────────────────╮
   │  0   1   2   3   4   5 │  │ LT5 LT4 LT3 LT2 LT1 LT0 │
   │  6   7   8   9  10  11 │  │ LM5 LM4 LM3 LM2 LM1 LM0 │
   │ 12  13  14  15  16  17 │  │ LB5 LB4 LB3 LB2 LB1 LB0 │
   ╰───────────╮ 18  19  20 │  ╰───────────╮ LH2 LH1 LH0 │
               ╰────────────╯              ╰─────────────╯
   ╭────────────────────────╮  ╭─────────────────────────╮
   │ 21  22  23  24  25  26 │  │ RT0 RT1 RT2 RT3 RT4 RT5 │
   │ 27  28  29  30  31  32 │  │ RM0 RM1 RM2 RM3 RM4 RM5 │
   │ 33  34  35  36  37  38 │  │ RB0 RB1 RB2 RB3 RB4 RB5 │
   │ 39  40  41 ╭───────────╯  │ RH0 RH1 RH2 ╭───────────╯
   ╰────────────╯              ╰─────────────╯
*/

#pragma once

#define KPM_LT0  5  // left-top row
#define KPM_LT1  4
#define KPM_LT2  3
#define KPM_LT3  2
#define KPM_LT4  1
#define KPM_LT5  0

#define KPM_RT0 21  // right-top row
#define KPM_RT1 22
#define KPM_RT2 23
#define KPM_RT3 24
#define KPM_RT4 25
#define KPM_RT5 26

#define KPM_LM0 11  // left-middle row
#define KPM_LM1 10
#define KPM_LM2 9
#define KPM_LM3 8
#define KPM_LM4 7
#define KPM_LM5 6

#define KPM_RM0 27  // right-middle row
#define KPM_RM1 28
#define KPM_RM2 29
#define KPM_RM3 30
#define KPM_RM4 31
#define KPM_RM5 32

#define KPM_LB0 17  // left-bottom row
#define KPM_LB1 16
#define KPM_LB2 15
#define KPM_LB3 14
#define KPM_LB4 13
#define KPM_LB5 12

#define KPM_RB0 33  // right-bottom row
#define KPM_RB1 34
#define KPM_RB2 35
#define KPM_RB3 36
#define KPM_RB4 37
#define KPM_RB5 38

#define KPM_LH0 20  // left thumb keys
#define KPM_LH1 19
#define KPM_LH2 18

#define KPM_RH0 39  // right thumb keys
#define KPM_RH1 40
#define KPM_RH2 41
