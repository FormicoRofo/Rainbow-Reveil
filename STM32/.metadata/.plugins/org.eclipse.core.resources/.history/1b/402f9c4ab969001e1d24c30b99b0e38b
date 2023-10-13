#ifndef __ws2812_H__
#define __ws2812_H__

#include "stm32f0xx_hal.h"
#include "defines.h"

//WS2812
#define WS2812_FREQ							(800000) // it is fixed: WS2812 require 800kHz
#define TIMER_CLOCK_FREQ					(8000000) // can be modified - multiples of 0.8MHz are suggested
#define TIMER_PERIOD						(TIMER_CLOCK_FREQ / WS2812_FREQ)
#define LED_NUMBER							(94) //(16) // how many LEDs the MCU should control?
#define LED_DATA_SIZE						(LED_NUMBER * 24)
#define RESET_SLOTS_BEGIN					(200)
#define RESET_SLOTS_END						(200)
#define WS2812_LAST_SLOT					(1)
#define LED_BUFFER_SIZE						(RESET_SLOTS_BEGIN + LED_DATA_SIZE + WS2812_LAST_SLOT + RESET_SLOTS_END)
#define WS2812_0							(TIMER_PERIOD / 3) // WS2812's zero high time is long about one third of the period
#define WS2812_1							(TIMER_PERIOD * 2 / 3) // WS2812's one high time is long about two thirds of the period
#define WS2812_RESET						(0)

void ws2812_start(void);
void ws2812_update(void);
void setLEDcolor(uint32_t LEDnumber, uint8_t RED, uint8_t GREEN, uint8_t BLUE);
void setWHOLEcolor(uint8_t RED, uint8_t GREEN, uint8_t BLUE);
void fillBufferBlack(void);
void fillBufferWhite(void);

#endif /* __ws2812_H__ */
