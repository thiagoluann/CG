#include <stdio.h>
#include "vetores.h"

int main(){
    int op;

    do {
        printf("\n===== MENU DE VETORES =====\n");
        printf("1. Vetor entre dois pontos (2D)\n");
        printf("2. Norma de vetor (2D)\n");
        printf("3. Deslocar ponto com vetor (2D)\n");
        printf("4. Soma de vetores (2D)\n");
        printf("5. Subtracao de vetores (2D)\n");
        printf("6. Multiplicacao por escalar (2D)\n");
        printf("7. Normalizar vetor (2D)\n");
        printf("8. Produto escalar (2D)\n");
        printf("9. Produto vetorial (3D)\n");
        printf("0. Sair\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op){
            case 1: {
                float xi, yi, xf, yf;
                printf("\nDigite o ponto inicial do vetor (x, y) ");
                scanf("%f %f", &xi, &yi);
                printf("Digite o ponto final (x, y): ");
                scanf("%f %f", &xf, &yf);

                Vetor2D v = vetor2D(xi, yi, xf, yf);
                printf("\nVetor resultante: (%.2f, %.2f)\n", v.x, v.y);
                break;
            }

            case 2: {
                Vetor2D v;
                printf("\nDigite o vetor (x y): ");
                scanf("%f %f", &v.x, &v.y);
                printf("\nNorma: %.2f\n", norma2D(v));
                break;
            }

            case 3: {
                Vetor2D p, v;
                printf("\nDigite o ponto (x y): ");
                scanf("%f %f", &p.x, &p.y);
                printf("Digite o vetor (x y): ");
                scanf("%f %f", &v.x, &v.y);
                Vetor2D r = deslocarPonto2D(p, v);
                printf("\nNovo ponto: (%.2f, %.2f)\n", r.x, r.y);
                break;
            }

            case 4: {
                Vetor2D a, b;
                printf("\nDigite o vetor A (x y): ");
                scanf("%f %f", &a.x, &a.y);
                printf("Digite o vetor B (x y): ");
                scanf("%f %f", &b.x, &b.y);
                Vetor2D soma = soma2D(a, b);
                printf("\nSoma: (%.2f, %.2f)\n", soma.x, soma.y);
                break;
            }

            case 5: {
                Vetor2D a, b;
                printf("\nDigite o vetor A (x y): ");
                scanf("%f %f", &a.x, &a.y);
                printf("Digite o vetor B (x y): ");
                scanf("%f %f", &b.x, &b.y);
                Vetor2D sub = sub2D(a, b);
                printf("\nSubtracao: (%.2f, %.2f)\n", sub.x, sub.y);
                break;
            }

            case 6: {
                Vetor2D v;
                float c;
                printf("\nDigite o vetor (x y): ");
                scanf("%f %f", &v.x, &v.y);
                printf("Digite o escalar: ");
                scanf("%f", &c);
                Vetor2D r = escalar2D(v, c);
                printf("\nResultado: (%.2f, %.2f)\n", r.x, r.y);
                break;
            }
            
            case 7: {
                Vetor2D v = {0};
                printf("\nDigite o vetor (x y): ");
                scanf("%f %f", &v.x, &v.y);
                v = normalizar2D(v);
                printf("\nVetor normalizado: (%.2f, %.2f)\n", v.x, v.y);
                break;
            }

            case 8: {
                Vetor2D a, b;
                printf("\nDigite o vetor A (x y): ");
                scanf("%f %f", &a.x, &a.y);
                printf("Digite o vetor B (x y): ");
                scanf("%f %f", &b.x, &b.y);
                printf("\nProduto escalar: %.2f\n", produtoEscalar2D(a, b));
                break;
            }

            case 9: {
                Vetor3D a, b, r;
                printf("\nDigite o vetor A (x y z): ");
                scanf("%f %f %f", &a.x, &a.y, &a.z);
                printf("Digite o vetor B (x y z): ");
                scanf("%f %f %f", &b.x, &b.y, &b.z);
                r = produtoVetorial(a, b);
                printf("\nProduto vetorial: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                break;
            }

            case 0: {
                printf("Encerrando...\n");
                break;
            }
            
            default:{
                printf("Opcao invalida. Tente novamente.\n");
                break;
            }
        }
    } while (op != 0);

    return 0;
}