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

// Fonction pour dessiner un rectangle
void drawRectangle(Canvas* canvas, int W,int H, int X, int Y, Pixel BorderInk, Pixel FillInk) {
    if (canvas == NULL || H <= 0 || W <= 0 || X < 0 || Y < 0) {
        // Vérifiez les paramètres d'entrée valides
        return;
    }

    int i, j;

    for (i = Y; i < Y + H; i++) {
        for (j = X; j < X + W; j++) {
            if (i == Y || i == Y + H - 1 || j == X || j == X + W - 1) {
                // Dessiner la bordure
                    *getPixel(canvas,j,i) = BorderInk;
            } else {
                // Remplir l'intérieur du rectangle
                if (FillInk.R != 1) {
                	*getPixel(canvas,j,i) = FillInk;
                }
            }
        }
    }
}

// Fonction pour afficher un chiffre en BCD
void displayBCD(Canvas* canvas, int X, int Y, int BCD, int NbDeBitAffiches) {
    if (canvas == NULL || X < 0 || Y < 0 || BCD < 0 || NbDeBitAffiches <= 0) {
        // Vérifiez les paramètres d'entrée valides
        return;
    }

    int j;
    int mask = 1 << (NbDeBitAffiches - 1);  // Masque pour extraire chaque bit

        for (j = X; j < X + NbDeBitAffiches; j++) {
            if (BCD & mask) {
                // Afficher un 1 (blanc)
                Pixel* pixel = getPixel(canvas, j, Y);
                if (pixel != NULL) {
                    pixel->R = MAX_LUX;
                    pixel->G = MAX_LUX;
                    pixel->B = MAX_LUX;
                }
            }
            else{
            	//afficher un 0 (noir)
            	Pixel* pixel = getPixel(canvas, j, Y);
            	if (pixel != NULL) {
            		pixel->R = 0;
                    pixel->G = 0;
                    pixel->B = 0;
            	}
            }
            mask >>= 1;
        }
}

void drawImage(ImageData* imageData, int x, int y, Canvas* canvas) {
    if (imageData == NULL || canvas == NULL) {
        // Gérez les cas d'erreur ou de paramètres non valides, si nécessaire
        return;
    }
/*********  modif EFV pour alpha toujours MAX  ****************/
    for (int imgY = 0; imgY < imageData->height; imgY++) {
        for (int imgX = 0; imgX < imageData->width; imgX++) {
            uint8_t* pixel = &imageData->data[(imgY * imageData->width + imgX) * 3];  // BGR format
/* alpha always max
            // Ignore les pixels totalement transparents (canal alpha à zéro)
            if (pixel[3] == 0x00) {
                continue;
            }
*/
            int canvasX = x + imgX;  // Coordonnée X sur le canevas
            int canvasY = y + (imageData->height - 1) - imgY;  // Coordonnée Y sur le canevas

            // Assurez-vous que les coordonnées se trouvent dans les limites du canevas
            if (canvasX > 0 && canvasX <= canvas->numCols && canvasY > 0 && canvasY <= canvas->numRows) {
                // Obtenez le pixel actuel du canevas en utilisant la fonction getPixel
                Pixel* canvasPixel = getPixel(canvas, canvasX, canvasY);


                // Appliquez la couleur de l'image avec la transparence sur le pixel du canevas
                // Assurez-vous d'ajuster les canaux alpha en conséquence
                canvasPixel->R = pixel[2];
                canvasPixel->G = pixel[1];
                canvasPixel->B = pixel[0];
                // Appliquer le masque pour forcer les valeurs à être paires
                canvasPixel->R &= 0xFE; // Le masque 0xFE force le dernier bit à 0.
                canvasPixel->G &= 0xFE;
                canvasPixel->B &= 0xFE;

            }
        }
    }
}
