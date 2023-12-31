/*
 * ADC.c
 *
 *  Created on: Nov 1, 2023
 *      Author: alyvasseur
 */


#include "includes.h"

extern ADC_HandleTypeDef hadc;

uint8_t readADC(){

	 HAL_ADC_Start(&hadc);
	 HAL_ADC_PollForConversion(&hadc, 1);
	 return HAL_ADC_GetValue(&hadc);

}

uint8_t flashReadADC(Canvas* canvas){
	setWHOLEcolor( 0, 0, 0);
	HAL_Delay(200);
	uint8_t mesure = readADC();
	sendCanvas(canvas);
	return mesure;
}
