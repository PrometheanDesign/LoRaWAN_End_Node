/**
  ******************************************************************************
  * @file    stm32wlxx_bsp_radio.h
  * @author  MCD Application Team, Scott Wagner
  * @brief   Header for stm32wlxx radio function prototypes
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2020(-2021) STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32WLXX_BSP_RADIO_H
#define STM32WLXX_BSP_RADIO_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wlxx_hal.h"

#define BSP_ERROR_NONE                         0

typedef enum 
{
  RADIO_SWITCH_OFF    = 0,
  RADIO_SWITCH_RX     = 1,
  RADIO_SWITCH_RFO_LP = 2,
  RADIO_SWITCH_RFO_HP = 3,
}BSP_RADIO_Switch_TypeDef;

#define RADIO_CONF_RFO_LP_HP                     0U
#define RADIO_CONF_RFO_LP                        1U
#define RADIO_CONF_RFO_HP                        2U

#define RADIO_CONF_TCXO_NOT_SUPPORTED            0U
#define RADIO_CONF_TCXO_SUPPORTED                1U

#define RADIO_CONF_DCDC_NOT_SUPPORTED            0U
#define RADIO_CONF_DCDC_SUPPORTED                1U

int32_t BSP_RADIO_Init(void);
int32_t BSP_RADIO_DeInit(void);
int32_t BSP_RADIO_ConfigRFSwitch(BSP_RADIO_Switch_TypeDef Config);
int32_t BSP_RADIO_GetTxConfig(void);
int32_t BSP_RADIO_IsTCXO(void);
int32_t BSP_RADIO_IsDCDC(void);

#ifdef __cplusplus
}
#endif

#endif /* STM32WLXX_BSP_RADIO_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

