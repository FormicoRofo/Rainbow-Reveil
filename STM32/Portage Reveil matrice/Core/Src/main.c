/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "ws2812.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;

TIM_HandleTypeDef htim2;
DMA_HandleTypeDef hdma_tim2_ch1;

UART_HandleTypeDef huart1;
DMA_HandleTypeDef hdma_usart1_tx;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM2_Init(void);
static void MX_USART1_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

uint8_t angle = 0;
static uint8_t Heures_brt = 0;
static uint8_t Heures_U = 4;
static uint8_t Heures_D = 0;
static uint8_t Minutes_brt = 0;
static uint8_t Minutes_U = 7;
static uint8_t Minutes_D = 2;
uint8_t Cli = 0;

uint8_t interrupteur1_OLD = 0;
uint8_t interrupteur2_OLD = 0;
uint8_t interrupteur3_OLD = 0;
uint8_t interrupteur4_OLD = 0;

//static uint8_t Rx_data[19];

uint16_t step = 0;
uint8_t loop = 0;



/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_ADC1_Init();
  MX_TIM2_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

  ws2812_start();
  //HAL_UART_Receive_IT(&huart1, Rx_data, 19);

	uint8_t H =0;
	ImageData* pacManSprite;
	// Déclarez une instance de Canvas
	Canvas myCanvas;
	// Initialisez la structure Canvas
	myCanvas.numCols = NUM_COLS;
	myCanvas.numRows = NUM_ROWS;
	// Allouez de la mémoire pour les pixels
	myCanvas.pixels = malloc(sizeof(Pixel) * NUM_COLS * NUM_ROWS);
	// Utilisez memset pour initialiser le tableau à zéro
	memset(myCanvas.pixels, 0, sizeof(Pixel) * NUM_COLS * NUM_ROWS);

	// Vous pouvez maintenant utiliser myCanvas et les pixels initialisé



  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	
	
//	  HAL_ADC_PollForConversion(&hadc, HAL_MAX_DELAY);
//
//	  ReadADC = HAL_ADC_GetValue(&hadc);



	  for(uint8_t diag=1; diag<=23; diag++){
	  		  colorDiagonal(&myCanvas, HSVtoPixel((H + (diag* 255 / 23))%255 , MAX_LUX), diag);
	  	  }

	  	  drawRectangle(&myCanvas, 19, 5, 1, 1, (Pixel){0,0,0}, (Pixel){0,0,0});

	  	  displayBCD(&myCanvas, 8, 3, H>>4, 4);

	  	switch((loop/2)%98){
	  		  	  case 0 : pacManSprite = &Rick0; break;
	  		  	  case 1 : pacManSprite = &Rick1; break;
	  		  	  case 2 : pacManSprite = &Rick2; break;
	  		  	  case 3 : pacManSprite = &Rick3; break;
	  		  	  case 4 : pacManSprite = &Rick4; break;
	  		  	  case 5 : pacManSprite = &Rick5; break;
	  		  	  case 6 : pacManSprite = &Rick6; break;
	  		  	  case 7 : pacManSprite = &Rick7; break;
	  		  	  case 8 : pacManSprite = &Rick8; break;
	  		  	  case 9 : pacManSprite = &Rick9; break;
	  		  	  case 10 : pacManSprite = &Rick10; break;
	  		  	  case 11 : pacManSprite = &Rick11; break;
	  		  	  case 12 : pacManSprite = &Rick12; break;
	  		  	  case 13 : pacManSprite = &Rick13; break;
	  		  	case 14 : pacManSprite = &Rick14; break;
	  		  	case 15 : pacManSprite = &Rick15; break;
	  		  	case 16 : pacManSprite = &Rick16; break;
	  		  	case 17 : pacManSprite = &Rick17; break;
	  		  	case 18 : pacManSprite = &Rick18; break;
	  		  	case 19 : pacManSprite = &Rick19; break;
	  		  	case 20 : pacManSprite = &Rick20; break;
	  		  	case 21 : pacManSprite = &Rick21; break;
	  		  	case 22 : pacManSprite = &Rick22; break;
	  		  	case 23 : pacManSprite = &Rick23; break;
	  		  	case 24 : pacManSprite = &Rick24; break;
	  		  	case 25 : pacManSprite = &Rick25; break;
	  		  	case 26 : pacManSprite = &Rick26; break;
	  		  	case 27 : pacManSprite = &Rick27; break;
	  		  	case 28 : pacManSprite = &Rick28; break;
	  		  	case 29 : pacManSprite = &Rick29; break;
	  		  	case 30 : pacManSprite = &Rick30; break;
	  		  	case 31 : pacManSprite = &Rick31; break;
	  		  	case 32 : pacManSprite = &Rick32; break;
	  		  	case 33 : pacManSprite = &Rick33; break;
	  		  	case 34 : pacManSprite = &Rick34; break;
	  		  	case 35 : pacManSprite = &Rick35; break;
	  		  	case 36 : pacManSprite = &Rick36; break;
	  		  	case 37 : pacManSprite = &Rick37; break;
	  		  	case 38 : pacManSprite = &Rick38; break;
	  		  	case 39 : pacManSprite = &Rick39; break;
	  		  	case 40 : pacManSprite = &Rick40; break;
	  		  	case 41 : pacManSprite = &Rick41; break;
	  		  	case 42 : pacManSprite = &Rick42; break;
	  		  	case 43 : pacManSprite = &Rick43; break;
	  		  	case 44 : pacManSprite = &Rick44; break;
	  		  	case 45 : pacManSprite = &Rick45; break;
	  		  	case 46 : pacManSprite = &Rick46; break;
	  		  case 47	 : pacManSprite = &Rick47	; break;
	  		  case 48	 : pacManSprite = &Rick48	; break;
	  		  case 49	 : pacManSprite = &Rick49	; break;
	  		  case 50	 : pacManSprite = &Rick50	; break;
	  		  case 51	 : pacManSprite = &Rick51	; break;
	  		  case 52	 : pacManSprite = &Rick52	; break;
	  		  case 53	 : pacManSprite = &Rick53	; break;
	  		  case 54	 : pacManSprite = &Rick54	; break;
	  		  case 55	 : pacManSprite = &Rick55	; break;
	  		  case 56	 : pacManSprite = &Rick56	; break;
	  		  case 57	 : pacManSprite = &Rick57	; break;
	  		  case 58	 : pacManSprite = &Rick58	; break;
	  		  case 59	 : pacManSprite = &Rick59	; break;
	  		  case 60	 : pacManSprite = &Rick60	; break;
	  		  case 61	 : pacManSprite = &Rick61	; break;
	  		  case 62	 : pacManSprite = &Rick62	; break;
	  		  case 63	 : pacManSprite = &Rick63	; break;
	  		  case 64	 : pacManSprite = &Rick64	; break;
	  		  case 65	 : pacManSprite = &Rick65	; break;
	  		  case 66	 : pacManSprite = &Rick66	; break;
	  		  case 67	 : pacManSprite = &Rick67	; break;
	  		  case 68	 : pacManSprite = &Rick68	; break;
	  		  case 69	 : pacManSprite = &Rick69	; break;
	  		  case 70	 : pacManSprite = &Rick70	; break;
	  		  case 71	 : pacManSprite = &Rick71	; break;
	  		  case 72	 : pacManSprite = &Rick72	; break;
	  		  case 73	 : pacManSprite = &Rick73	; break;
	  		  case 74	 : pacManSprite = &Rick74	; break;
	  		  case 75	 : pacManSprite = &Rick75	; break;
	  		  case 76	 : pacManSprite = &Rick76	; break;
	  		  case 77	 : pacManSprite = &Rick77	; break;
	  		  case 78	 : pacManSprite = &Rick78	; break;
	  		  case 79	 : pacManSprite = &Rick79	; break;
	  		  case 80	 : pacManSprite = &Rick80	; break;
	  		  case 81	 : pacManSprite = &Rick81	; break;
	  		  case 82	 : pacManSprite = &Rick82	; break;
	  		  case 83	 : pacManSprite = &Rick83	; break;
	  		  case 84	 : pacManSprite = &Rick84	; break;
	  		  case 85	 : pacManSprite = &Rick85	; break;
	  		  case 86	 : pacManSprite = &Rick86	; break;
	  		  case 87	 : pacManSprite = &Rick87	; break;
	  		  case 88	 : pacManSprite = &Rick88	; break;
	  		  case 89	 : pacManSprite = &Rick89	; break;
	  		  case 90	 : pacManSprite = &Rick90	; break;
	  		  case 91	 : pacManSprite = &Rick91	; break;
	  		  case 92	 : pacManSprite = &Rick92	; break;
	  		  case 93	 : pacManSprite = &Rick93	; break;
	  		  case 94	 : pacManSprite = &Rick94	; break;
	  		  case 95	 : pacManSprite = &Rick95	; break;
	  		  case 96	 : pacManSprite = &Rick96	; break;
	  		  case 97	 : pacManSprite = &Rick97	; break;


	  	  }
	  	  drawImage(pacManSprite, 1, 1, &myCanvas);


	  	  sendCanvas(&myCanvas);

	  	  if (H >= 255){
	  		  H=0;
	  	  }
	  	  else{
	  		  H++;
	  	  }

	  	  if (loop <= 196)	++loop;
	  	  else loop = 0;
  
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Common config
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.ScanConvMode = ADC_SCAN_DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  hadc1.Init.LowPowerAutoWait = DISABLE;
  hadc1.Init.ContinuousConvMode = ENABLE;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.Overrun = ADC_OVR_DATA_PRESERVED;
  hadc1.Init.OversamplingMode = DISABLE;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_12;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_2CYCLES_5;
  sConfig.SingleDiff = ADC_SINGLE_ENDED;
  sConfig.OffsetNumber = ADC_OFFSET_NONE;
  sConfig.Offset = 0;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 0;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 10-1;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */
  HAL_TIM_MspPostInit(&htim2);

}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 250000;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA1_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Channel1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);
  /* DMA1_Channel4_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel4_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel4_IRQn);
  /* DMA1_Channel5_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel5_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel5_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
