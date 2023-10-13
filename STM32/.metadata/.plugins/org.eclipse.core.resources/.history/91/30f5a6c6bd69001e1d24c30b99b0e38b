/*
 * canvas.h
 *
 *  Created on: 9 oct. 2023
 *      Author: alyvasseur
 */

#ifndef INC_CANVAS_H_
#define INC_CANVAS_H_

#include "stm32f0xx_hal.h"
#include "defines.h"

// Définition de la structure Pixel
typedef struct {
    uint8_t R;
    uint8_t G;
    uint8_t B;
} Pixel;

// Définition de la structure Canvas
typedef struct {
    int numCols;
    int numRows;
    Pixel* pixels;
} Canvas;

// Prototypes de fonctions
void setCanvasColor(Canvas* canvas, Pixel encre);
void sendCanvas(Canvas* canvas);
Pixel* getPixel(Canvas* canvas, int x, int y);
void colorDiagonal(Canvas* canvas, Pixel encre, uint8_t diagSum);

#endif /* INC_CANVAS_H_ */
