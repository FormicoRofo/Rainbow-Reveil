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

extern ImageData Rick0;
extern ImageData Rick6;/*
extern ImageData Rick12;
extern ImageData Rick18;
extern ImageData Rick24;
extern ImageData Rick30;
extern ImageData Rick36;
extern ImageData Rick42;*/



#endif /* LIBRARY_INC_IMAGE_DATA_H_ */
