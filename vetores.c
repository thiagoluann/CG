#include "vetores.h"
#include <math.h>

Vetor2D vetor2D(float xi, float yi, float xf, float yf){
    Vetor2D v;
    v.x = xf - xi;
    v.y = yf - yi;
    return v;
}

float norma2D(Vetor2D v){
    return sqrt(v.x * v.x + v.y * v.y);
}

Vetor2D deslocarPonto2D(Vetor2D p, Vetor2D v) {
    Vetor2D r = {p.x + v.x, p.y + v.y};
    return r;
}

Vetor2D soma2D(Vetor2D a, Vetor2D b) {
    Vetor2D r = {a.x + b.x, a.y + b.y};
    return r;
}

Vetor2D sub2D(Vetor2D a, Vetor2D b) {
    Vetor2D r = {a.x - b.x, a.y - b.y};
    return r;
}

Vetor2D escalar2D(Vetor2D v, float c) {
    Vetor2D r;
    r.x = v.x * c;
    r.y = v.y * c;
    return r;
}

Vetor2D normalizar2D(Vetor2D v) {
    float n = norma2D(v);
    Vetor2D r = {v.x / n, v.y / n};
    return r;
}

float produtoEscalar2D(Vetor2D a, Vetor2D b) {
    return a.x * b.x + a.y * b.y;
}

Vetor3D produtoVetorial(Vetor3D a, Vetor3D b) {
    Vetor3D r = {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
    return r;
}