/*
 * Author: Kunyang Fan <kunyang_fan@aaeon.com.tw>
 * Based on work from: Dan O'Donovan <dan@emutex.com>
 *                     Nicola Lunghi <nicola.lunghi@emutex.com>
 *
 * Copyright (c) 2021 AAEON Corporation.
 * Copyright (c) 2017 Emutex Ltd.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "mraa_internal.h"

// +1 as pins are "1 indexed"
#define MRAA_UP2_PRO_PINCOUNT    (40 + 1)

mraa_board_t*
mraa_up2_pro_board();

#ifdef __cplusplus
}
#endif
