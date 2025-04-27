#include <stdio.h>
#include "vetores.h"

int main(){
    int op;

    do {
        printf("\n===== MENU DE VETORES =====\n");
        printf("1. Vetor entre dois pontos (2D)\n");
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