#include <stdio.h>
#define N 10

int buscaVetor (int* vetor, int n, int procurado);

int main (){
    int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf ("Esta na posicao: %d", buscaVetor(v, 10, 7));

    return 0;
}

int buscaVetor (int* vetor, int n, int procurado){
    int i;

    for (i = 0; i < n; i++){
        if (vetor[i] == procurado)
            return i;
    }
    return -1;
}
