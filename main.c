#include <stdio.h>
#include "vetores.h"

int main() {
    int op;

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Vetores 2D\n");
        printf("2. Vetores 3D\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1: {
                int op2D;
                do {
                    printf("\n--- OPERACOES COM VETORES 2D ---\n");
                    printf("1. Vetor entre dois pontos\n");
                    printf("2. Norma\n");
                    printf("3. Deslocar ponto\n");
                    printf("4. Soma\n");
                    printf("5. Subtracao\n");
                    printf("6. Multiplicacao por escalar\n");
                    printf("7. Normalizar\n");
                    printf("8. Produto escalar\n");
                    printf("0. Voltar\n");
                    printf("Opcao: ");
                    scanf("%d", &op2D);

                    switch (op2D) {
                        case 1: {
                            float xi, yi, xf, yf;
                            printf("\nDigite o ponto inicial (x y): ");
                            scanf("%f %f", &xi, &yi);
                            printf("Digite o ponto final (x y): ");
                            scanf("%f %f", &xf, &yf);
                            Vetor2D v = vetor2D(xi, yi, xf, yf);
                            printf("Vetor resultante: (%.2f, %.2f)\n", v.x, v.y);
                            break;
                        }
                        case 2: {
                            Vetor2D v;
                            printf("\nDigite o vetor (x y): ");
                            scanf("%f %f", &v.x, &v.y);
                            printf("Norma: %.2f\n", norma2D(v));
                            break;
                        }
                        case 3: {
                            Vetor2D p, v;
                            printf("\nDigite o ponto (x y): ");
                            scanf("%f %f", &p.x, &p.y);
                            printf("Digite o vetor (x y): ");
                            scanf("%f %f", &v.x, &v.y);
                            Vetor2D r = deslocarPonto2D(p, v);
                            printf("Novo ponto: (%.2f, %.2f)\n", r.x, r.y);
                            break;
                        }
                        case 4: {
                            Vetor2D a, b;
                            printf("\nDigite o vetor A (x y): ");
                            scanf("%f %f", &a.x, &a.y);
                            printf("Digite o vetor B (x y): ");
                            scanf("%f %f", &b.x, &b.y);
                            Vetor2D r = soma2D(a, b);
                            printf("Soma: (%.2f, %.2f)\n", r.x, r.y);
                            break;
                        }
                        case 5: {
                            Vetor2D a, b;
                            printf("\nDigite o vetor A (x y): ");
                            scanf("%f %f", &a.x, &a.y);
                            printf("Digite o vetor B (x y): ");
                            scanf("%f %f", &b.x, &b.y);
                            Vetor2D r = sub2D(a, b);
                            printf("Subtracao: (%.2f, %.2f)\n", r.x, r.y);
                            break;
                        }
                        case 6: {
                            Vetor2D v;
                            float esc;
                            printf("\nDigite o vetor (x y): ");
                            scanf("%f %f", &v.x, &v.y);
                            printf("Digite o escalar: ");
                            scanf("%f", &esc);
                            Vetor2D r = escalar2D(v, esc);
                            printf("Resultado: (%.2f, %.2f)\n", r.x, r.y);
                            break;
                        }
                        case 7: {
                            Vetor2D v;
                            printf("\nDigite o vetor (x y): ");
                            scanf("%f %f", &v.x, &v.y);
                            Vetor2D r = normalizar2D(v);
                            printf("Vetor normalizado: (%.2f, %.2f)\n", r.x, r.y);
                            break;
                        }
                        case 8: {
                            Vetor2D a, b;
                            printf("\nDigite o vetor A (x y): ");
                            scanf("%f %f", &a.x, &a.y);
                            printf("Digite o vetor B (x y): ");
                            scanf("%f %f", &b.x, &b.y);
                            printf("Produto escalar: %.2f\n", produtoEscalar2D(a, b));
                            break;
                        }
                    }
                } while (op2D != 0);
                break;
            }

            case 2: {
                int op3D;
                do {
                    printf("\n--- OPERACOES COM VETORES 3D ---\n");
                    printf("1. Vetor entre dois pontos\n");
                    printf("2. Soma\n");
                    printf("3. Subtracao\n");
                    printf("4. Deslocar ponto com vetor\n");
                    printf("5. Multiplicacao por escalar\n");
                    printf("6. Produto escalar\n");
                    printf("7. Produto vetorial\n");
                    printf("8. Normalizar\n");
                    printf("9. Norma\n");
                    printf("0. Voltar\n");
                    printf("Opcao: ");
                    scanf("%d", &op3D);

                    switch (op3D) {
                        case 1: {
                            float xi, yi, zi, xf, yf, zf;
                            printf("\nDigite o ponto inicial (x y z): ");
                            scanf("%f %f %f", &xi, &yi, &zi);
                            printf("Digite o ponto final (x y z): ");
                            scanf("%f %f %f", &xf, &yf, &zf);
                            Vetor3D v = vetor3D(xi, yi, zi, xf, yf, zf);
                            printf("Vetor resultante: (%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
                            break;
                        }
                        case 2: {
                            Vetor3D a, b;
                            printf("\nDigite o vetor A (x y z): ");
                            scanf("%f %f %f", &a.x, &a.y, &a.z);
                            printf("Digite o vetor B (x y z): ");
                            scanf("%f %f %f", &b.x, &b.y, &b.z);
                            Vetor3D r = soma3D(a, b);
                            printf("Soma: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                            break;
                        }
                        case 3: {
                            Vetor3D a, b;
                            printf("\nDigite o vetor A (x y z): ");
                            scanf("%f %f %f", &a.x, &a.y, &a.z);
                            printf("Digite o vetor B (x y z): ");
                            scanf("%f %f %f", &b.x, &b.y, &b.z);
                            Vetor3D r = sub3D(a, b);
                            printf("Subtracao: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                            break;
                        }
                        case 4: {
                            Vetor3D p, v;
                            printf("\nDigite o ponto (x y z): ");
                            scanf("%f %f %f", &p.x, &p.y, &p.z);
                            printf("Digite o vetor (x y z): ");
                            scanf("%f %f %f", &v.x, &v.y, &v.z);
                            Vetor3D r = deslocarPonto3D(p, v);
                            printf("Novo ponto: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                            break;
                        }
                        case 5: {
                            Vetor3D v;
                            float esc;
                            printf("\nDigite o vetor (x y z): ");
                            scanf("%f %f %f", &v.x, &v.y, &v.z);
                            printf("Digite o escalar: ");
                            scanf("%f", &esc);
                            Vetor3D r = escalar3D(v, esc);
                            printf("Resultado: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                            break;
                        }
                        case 6: {
                            Vetor3D a, b;
                            printf("\nDigite o vetor A (x y z): ");
                            scanf("%f %f %f", &a.x, &a.y, &a.z);
                            printf("Digite o vetor B (x y z): ");
                            scanf("%f %f %f", &b.x, &b.y, &b.z);
                            float res = produtoEscalar3D(a, b);
                            printf("Produto escalar: %.2f\n", res);
                            break;
                        }
                        case 7: {
                            Vetor3D a, b, r;
                            printf("\nDigite o vetor A (x y z): ");
                            scanf("%f %f %f", &a.x, &a.y, &a.z);
                            printf("Digite o vetor B (x y z): ");
                            scanf("%f %f %f", &b.x, &b.y, &b.z);
                            r = produtoVetorial(a, b);
                            printf("Produto vetorial: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                            break;
                        }
                        case 8: {
                            Vetor3D v;
                            printf("\nDigite o vetor (x y z): ");
                            scanf("%f %f %f", &v.x, &v.y, &v.z);
                            Vetor3D r = normalizar3D(v);
                            printf("Vetor normalizado: (%.2f, %.2f, %.2f)\n", r.x, r.y, r.z);
                            break;
                        }
                        case 9: {
                            Vetor3D v;
                            printf("\nDigite o vetor (x y z): ");
                            scanf("%f %f %f", &v.x, &v.y, &v.z);
                            printf("Norma: %.2f\n", norma3D(v));
                            break;
                        }
                    }
                } while (op3D != 0);
                break;
            }

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    } while (op != 0);

    return 0;
}