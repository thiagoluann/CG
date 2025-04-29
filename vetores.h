#ifndef VETORES_H
#define VETORES_H

typedef struct {
    float x, y;
} Vetor2D;

typedef struct {
    float x, y, z;
} Vetor3D;

//2D

Vetor2D vetor2D(float xi, float yi, float xf, float yf);

float norma2D(Vetor2D v);

Vetor2D deslocarPonto2D(Vetor2D p, Vetor2D v);

Vetor2D soma2D(Vetor2D a, Vetor2D b);
Vetor2D sub2D(Vetor2D a, Vetor2D b);

Vetor2D escalar2D(Vetor2D v, float c);

Vetor2D normalizar2D(Vetor2D v);

float produtoEscalar2D(Vetor2D a, Vetor2D b);

//3D

Vetor3D vetor3D(float xi, float yi, float zi, float xf, float yf, float zf);

Vetor3D produtoVetorial(Vetor3D a, Vetor3D b);

Vetor3D soma3D(Vetor3D a, Vetor3D b);

Vetor3D deslocarPonto3D(Vetor3D p, Vetor3D v);

Vetor3D sub3D(Vetor3D a, Vetor3D b);

Vetor3D escalar3D(Vetor3D v, float c);

float produtoEscalar3D(Vetor3D a, Vetor3D b);

Vetor3D normalizar3D(Vetor3D v);

float norma3D(Vetor3D v);



#endif


