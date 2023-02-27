#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GAZANIGA 10

int main(){
    float v[GAZANIGA];
    float media, valor, soma = 0;
    int i, qtd_posit = 0;
    srand (time(0));
    for (i = 0; i < GAZANIGA; i++){
        valor = (rand()/(float)RAND_MAX)*80-40;
        if(valor > 0){
            v[i] = valor;
            qtd_posit ++;
            soma += v[i];
        }
        else
            v[i] = 0;

    }
    media = soma/qtd_posit;
    printf ("%.2f\n", media);

    for(i = 0; i<GAZANIGA; i++){
        if(v[i] > media){
        printf("%.2f eh grandao\n", v[i]);
      }

        else if(v[i] < media && v[i]){
        printf("%.2f eh piqueno\n", v[i]);
      }
    }
    return 0;
}

