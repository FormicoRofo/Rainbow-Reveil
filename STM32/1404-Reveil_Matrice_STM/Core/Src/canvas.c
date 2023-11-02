/*
 * canvas.c
 *
 *  Created on: 9 oct. 2023
 *      Author: alyvasseur
 */
#include "includes.h"

void setCanvasColor(Canvas* canvas, Pixel encre) {
for (uint16_t i = 0; i < canvas->numCols * canvas->numRows; i++) {
		canvas->pixels[i]=encre;
    }
}



// Fonction pour mettre à jour l'affichage LED
void sendCanvas(Canvas* canvas) {
    // Copiez les pixels du canevas vers l'écran LED
    for (uint16_t i = 0; i < canvas->numCols * canvas->numRows -1; i++) {  // -1 car résolution bug affichage photodiode inexistante
        setLEDcolor(i, canvas -> pixels[i].R, canvas -> pixels[i].G, canvas -> pixels[i].B);
    }
}

Pixel* getPixel(Canvas* canvas, int x, int y) {
    if (x > 0 && x <= canvas->numCols && y > 0 && y <= canvas->numRows) {
        return &canvas->pixels[(x-1)*canvas->numRows+(y-1)];
    } else {
        return NULL; // Coordonnées hors limites
    }
}


void colorDiagonal(Canvas* canvas, Pixel encre, uint8_t diagSum) {


    // Parcourir la diagonale où x + y == diagSum
    for (int x = 0; x <= canvas->numCols; x++) {
        int y = diagSum - x; // Calcul de la coordonnée y correspondante
        if (y >= 0 && y <= canvas->numRows) {
            Pixel* pixel = getPixel(canvas, x, y);
            if (pixel) {
                // Mettre à jour la couleur
                *pixel=encre;
            }
        }
    }
}
//