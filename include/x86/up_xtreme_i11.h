/*
 * Author: Kunyang Fan <kunyang_fan@aaeon.com.tw>
 * Based on work from: Dan O'Donovan <dan@emutex.com>

 * Copyright (c) 2021 AAEON Ltd.
 * Copyright (c) 2019 Emutex Ltd.
 * Copyright (c) 2014 Intel Corporation.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "mraa_internal.h"

// +1 as pins are "1 indexed"
#define MRAA_UPXTREME_I11_PINCOUNT    (80 + 1)

mraa_board_t*
mraa_upxtreme_i11_board();

#ifdef __cplusplus
}
#endif
