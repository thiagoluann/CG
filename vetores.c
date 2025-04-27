#include "vetores.h"

Vetor2D vetor2D(float xi, float yi, float xf, float yf){
    Vetor2D v;
    v.x = xf - xi;
    v.y = yf - yi;
    return v;

}


