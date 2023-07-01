// Copyright 2023 saikocat (@saikocat)
// SPDX-License-Identifier: MIT

/*       36 KEY MATRIX / STACKED LAYOUT MAPPING
  ╭────────────────────╮  ╭─────────────────────╮
  │  0   1   2   3   4 │  │ LT4 LT3 LT2 LT1 LT0 │
  │  5   6   7   8   9 │  │ LM4 LM3 LM2 LM1 LM0 │
  │ 10  11  12  13  14 │  │ LB4 LB3 LB2 LB1 LB0 │
  ╰───────╮ 15  16  17 │  ╰───────╮ LH2 LH1 LH0 │
          ╰────────────╯          ╰─────────────╯
  ╭────────────────────╮  ╭─────────────────────╮
  │ 18  19  20  21  22 │  │ RT0 RT1 RT2 RT3 RT4 │
  │ 23  24  25  26  27 │  │ RM0 RM1 RM2 RM3 RM4 │
  │ 28  29  30  31  32 │  │ RB0 RB1 RB2 RB3 RB4 │
  │ 33  34  35 ╭───────╯  │ RH0 RH1 RH2 ╭───────╯
  ╰────────────╯          ╰─────────────╯
*/

#pragma once

#include "keypos_36keys_stacked.h"
