/*
 * image_data.h
 *
 *  Created on: 30 oct. 2023
 *      Author: alyvasseur
 */

#ifndef LIBRARY_INC_IMAGE_DATA_H_
#define LIBRARY_INC_IMAGE_DATA_H_

#include "includes.h"

typedef struct {
    uint16_t width;     // Largeur de l'image
    uint16_t height;    // Hauteur de l'image
    uint8_t* data;      // Tableau de données de l'image (RGBA ou autre)
} ImageData;

extern ImageData arecibo;
extern ImageData pacMan0;
extern ImageData pacMan1;
extern ImageData pacMan2;
extern ImageData pacMan3;

#endif /* LIBRARY_INC_IMAGE_DATA_H_ */
