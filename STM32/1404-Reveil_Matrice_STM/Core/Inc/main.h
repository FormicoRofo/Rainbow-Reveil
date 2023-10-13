/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  * @by				: Alberto Lopes
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "includes.h"
/* USER CODE END Includes */
#include "defines.h"
/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

typedef enum //Création du type de décalage que l'on va appliquer sur la matrice
{
	MinuteUnite,
	MinuteDizaine,
	HeureUnite,
	HeureDizaine
}CharShiftTypeDef;



/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
void HAL_UART_RxCpltCallback (UART_HandleTypeDef * huart);
void HAL_UART_ErrorCallback (UART_HandleTypeDef * huart);

void LEDs_L_C_RGB (uint8_t Ligne, uint8_t Colonne, uint8_t Red, uint8_t Green, uint8_t Blue);

void Clignotement1S (void);

//uint8_t SetBrightness (uint16_t ValLum);

void Chara_0 (CharShiftTypeDef Shift);
void Chara_1 (CharShiftTypeDef Shift);
void Chara_2 (CharShiftTypeDef Shift);
void Chara_3 (CharShiftTypeDef Shift);
void Chara_4 (CharShiftTypeDef Shift);
void Chara_5 (CharShiftTypeDef Shift);
void Chara_6 (CharShiftTypeDef Shift);
void Chara_7 (CharShiftTypeDef Shift);
void Chara_8 (CharShiftTypeDef Shift);
void Chara_9 (CharShiftTypeDef Shift);
/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOF
#define ADC_BRIGHTNESS_Pin GPIO_PIN_7
#define ADC_BRIGHTNESS_GPIO_Port GPIOA
#define SW4_Pin GPIO_PIN_8
#define SW4_GPIO_Port GPIOA
#define SW3_Pin GPIO_PIN_11
#define SW3_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SW1_Pin GPIO_PIN_4
#define SW1_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_5
#define SW2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
