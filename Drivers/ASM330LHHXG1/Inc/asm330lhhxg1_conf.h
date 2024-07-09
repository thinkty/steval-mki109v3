/**
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#ifndef ASM330LHHXG1_CONF_H
#define ASM330LHHXG1_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef MEMS_UCF_SHARED_TYPES
#define MEMS_UCF_SHARED_TYPES

/** Common data block definition **/
typedef struct {
  uint8_t address;
  uint8_t data;
} ucf_line_t;

#endif /* MEMS_UCF_SHARED_TYPES */

/** Configuration array generated from Unico Tool **/
const ucf_line_t asm330lhhxg1_conf[] = {
  {.address = 0x01, .data = 0x00,},
  {.address = 0x02, .data = 0x3F,},
  {.address = 0x07, .data = 0x00,},
  {.address = 0x08, .data = 0x00,},
  {.address = 0x09, .data = 0x00,},
  {.address = 0x0A, .data = 0x00,},
  {.address = 0x0B, .data = 0x00,},
  {.address = 0x0C, .data = 0x00,},
  {.address = 0x0D, .data = 0x00,},
  {.address = 0x0E, .data = 0x00,},
  {.address = 0x10, .data = 0x10,}, /* Accelerometer ODR 12.5Hz, scale +-2g Table 44. */
  {.address = 0x11, .data = 0x10,}, /* Gyroscope ODR 12.5Hz, scale +-250dps Table 47. */
  {.address = 0x12, .data = 0x04,},
  {.address = 0x13, .data = 0x00,},
  {.address = 0x14, .data = 0x00,},
  {.address = 0x15, .data = 0x00,},
  {.address = 0x16, .data = 0x00,},
  {.address = 0x17, .data = 0x00,},
  {.address = 0x18, .data = 0xE2,}, /* Disable I3C */
  {.address = 0x19, .data = 0x00,},
  {.address = 0x56, .data = 0x00,},
  {.address = 0x58, .data = 0x00,},
  {.address = 0x59, .data = 0x00,},
  {.address = 0x5A, .data = 0x00,},
  {.address = 0x5B, .data = 0x00,},
  {.address = 0x5C, .data = 0x00,},
  {.address = 0x5D, .data = 0x00,},
  {.address = 0x5E, .data = 0x00,},
  {.address = 0x5F, .data = 0x00,},
  {.address = 0x62, .data = 0x00,},
  {.address = 0x73, .data = 0x00,},
  {.address = 0x74, .data = 0x00,},
  {.address = 0x75, .data = 0x00,}
};

#ifdef __cplusplus
}
#endif

#endif /* ASM330LHHXG1_CONF_H */

