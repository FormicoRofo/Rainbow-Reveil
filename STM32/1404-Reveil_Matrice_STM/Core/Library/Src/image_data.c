/*
 * image_data.c
 *
 *  Created on: 30 oct. 2023
 *      Author: alyvasseur
 */

#include "includes.h"

ImageData arecibo = {
    .width = 5,        // Largeur de l'image (en pixels)
    .height = 5,       // Hauteur de l'image (en pixels)
    .data = (uint8_t[]) {
    	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff,
    	0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff, 0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff,
		0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff, 0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff,
		0x24, 0x1c, 0xed, 0xff, 0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff, 0x00, 0x00, 0x00, 0x00, 0x24, 0x1c, 0xed, 0xff,
		0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff, 0x24, 0x1c, 0xed, 0xff,
    }
};


ImageData pacMan0 = {
    .width = 5,        // Largeur de l'image (en pixels)
    .height = 5,       // Hauteur de l'image (en pixels)
    .data = (uint8_t[]) {
    	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff,
    	0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff,
    	0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    }
};

ImageData pacMan1 = {
    .width = 5,        // Largeur de l'image (en pixels)
    .height = 5,       // Hauteur de l'image (en pixels)
    .data = (uint8_t[]) {
    	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff,
    	0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff,
    	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    }
};

ImageData pacMan2 = {
    .width = 5,        // Largeur de l'image (en pixels)
    .height = 5,       // Hauteur de l'image (en pixels)
    .data = (uint8_t[]) {
    	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    }
};

ImageData pacMan3i = {
    .width = 5,        // Largeur de l'image (en pixels)
    .height = 5,       // Hauteur de l'image (en pixels)
    .data = (uint8_t[]) {
    	0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    	  0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0xf2, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    }
};