#include<stdio.h>

int main(){

    float x, y;

    scanf("%f %f", &x, &y);
    printf("A coordenada do ponto eh (%.2f, %.2f) \n", x, y);

    if (x > 0) {
        if (y > 0) {
            printf ("O ponto se encontra no primeiro quadrante Q1");
        } else if (y < 0) {
            printf ("O ponto se encontra no quarto quadrante Q4");
        } else {
            printf ("O ponto se encontra no eixo x e a direita do eixo y");
        }
    } else if (x < 0) {
        if (y > 0) {
            printf ("O ponto se encontra no segundo quadrante Q2");
        } else if (y < 0) {
            printf ("O ponto se encontra o terceiro quadrante Q3");
        } else {
            printf ("O ponto se encontra no eixo x e a esquerda do eixo y");
        }
    } else {
        if (y > 0) {
            printf ("O ponto se encontra no eixo y e acima do eixo x");
        } else if (y < 0) {
            printf ("O ponto se encontra no eixo y e abaixo do eixo x");
        } else {
            printf ("O ponto se encontra na origem");
        }
    }
    return 0;
}
