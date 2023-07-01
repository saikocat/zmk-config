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

#include "keypos_42keys_stacked.h"