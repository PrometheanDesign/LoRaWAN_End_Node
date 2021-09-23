/**
  ******************************************************************************
  * @file    stm32wlxx_nucleo_radio.h
  * @author  MCD Application Team
  * @brief   Header for stm32wlxx_nucleo_radio.c
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
#ifndef RAK31772_RADIO_H
#define RAK31772_RADIO_H

#ifdef __cplusplus
 extern "C" {
#endif

#define RF_SW_CTRL1_PIN                          GPIO_PIN_8
#define RF_SW_CTRL1_GPIO_PORT                    GPIOB
#define RF_SW_CTRL1_GPIO_CLK_ENABLE()            __HAL_RCC_GPIOB_CLK_ENABLE()
#define RF_SW_RX_GPIO_CLK_DISABLE()              __HAL_RCC_GPIOB_CLK_DISABLE()

#define RF_SW_CTRL2_PIN                          GPIO_PIN_13
#define RF_SW_CTRL2_GPIO_PORT                    GPIOC
#define RF_SW_CTRL2_GPIO_CLK_ENABLE()            __HAL_RCC_GPIOC_CLK_ENABLE()
#define RF_SW_CTRL2_GPIO_CLK_DISABLE()           __HAL_RCC_GPIOC_CLK_DISABLE()

#define RF_TCXO_VCC_PIN                          GPIO_PIN_0
#define RF_TCXO_VCC_GPIO_PORT                    GPIOB
#define RF_TCXO_VCC_CLK_ENABLE()                 __HAL_RCC_GPIOB_CLK_ENABLE()
#define RF_TCXO_VCC_CLK_DISABLE()                __HAL_RCC_GPIOB_CLK_DISABLE()

#include "stm32wlxx_nucleo_radio.h"

#ifdef __cplusplus
}
#endif

#endif /* RAK31772_RADIO_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

