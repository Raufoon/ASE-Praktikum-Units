/*
    7SPC5 RLA - Copyright (C) 2017 STMicroelectronics

    Licensed under the Apache License, Version 2.0 (the "License").
    You may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    serial_lld_cfg.h
 * @brief   SERIAL Driver configuration macros and structures.
 *
 * @addtogroup SERIAL
 * @{
 */

#ifndef _SERIAL_LLD_CFG_H_
#define _SERIAL_LLD_CFG_H_

#include "spc5_lld.h"
#include "serial_lld.h"

#if (LLD_USE_SERIAL == TRUE) || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

/* List of the SerialConfig structures defined in serial_lld_cfg.c.*/

#ifdef __cplusplus
extern "C" {
#endif
  /* List of the callback functions referenced from the SerialConfig
     structures in serial_lld_cfg.c.*/
#ifdef __cplusplus
}
#endif

#endif /* LLD_USE_SERIAL */

#endif /* _SERIAL_LLD_CFG_H_ */

/** @} */
