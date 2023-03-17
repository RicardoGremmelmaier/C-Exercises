#include <stdio.h>

float media (int n, float *maior, float *menor);

int main (){
    int qntN;
    float min, max, resultado;

    printf ("Digite a quantidade de numeros para ler: ");
    scanf ("%d", &qntN);

    resultado = media (qntN, &max, &min);

    printf ("Media: %.2f\n", resultado);
    printf ("Menor nota: %.2f\n", min);
    printf ("Maior nota: %.2f\n", max);

    return 0;
}

float media (int n, float *maior, float *menor){
    float aux, soma;
    int i;

    printf ("Digite a nota: ");
    scanf ("%f", &aux);
    *maior = aux;
    *menor = aux;
    soma = aux;

    for (i = 1; i < n; i++){
        printf ("Digite a nota: ");
        scanf ("%f", &aux);
        soma += aux;

        if (aux > *maior)
            *maior = aux;

        if (aux < *menor)
            *menor = aux;
    }

    return soma/n;
}
