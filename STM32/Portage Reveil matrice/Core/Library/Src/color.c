/*
 * color.c
 *
 *  Created on: Oct 11, 2023
 *      Author: alyvasseur
 */
#include "includes.h"

Pixel HSVtoPixel(uint8_t h, uint8_t v) {
    Pixel pixel;
    unsigned char region, remainder, p, q, t;

    region = h / 43;
    remainder = (h - (region * 43)) * 6;

    p = (v * (255 - 255)) >> 8;
    q = (v * (255 - ((255 * remainder) >> 8)) >> 8);
    t = (v * (255 - ((255 * (255 - remainder)) >> 8)) >> 8);

    switch (region) {
        case 0:
            pixel.R = v;
            pixel.G = t;
            pixel.B = p;
            break;
        case 1:
            pixel.R = q;
            pixel.G = v;
            pixel.B = p;
            break;
        case 2:
            pixel.R = p;
            pixel.G = v;
            pixel.B = t;
            break;
        case 3:
            pixel.R = p;
            pixel.G = q;
            pixel.B = v;
            break;
        case 4:
            pixel.R = t;
            pixel.G = p;
            pixel.B = v;
            break;
        default:
            pixel.R = v;
            pixel.G = p;
            pixel.B = q;
            break;
    }

    // Appliquer le masque pour forcer les valeurs à être paires
    pixel.R &= 0xFE; // Le masque 0xFE force le dernier bit à 0.
    pixel.G &= 0xFE;
    pixel.B &= 0xFE;

    return pixel;
}
