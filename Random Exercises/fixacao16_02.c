#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_MAX 10


int preparaVetor (int** vetor){
    int i, tamanho;

    printf ("Digite o numero de valores do vetor: ");
    scanf ("%d", &tamanho);

    *vetor = (int*) malloc (sizeof (int) * tamanho);

    for (i = 0; i < tamanho; i++)
        (*vetor) [i] = rand () % (LIM_MAX+1);

    return (tamanho);
}

int main (){

    int i, j, tamanho1, tamanho2;
    int *vetor1, *vetor2, *vetor_mul;
    tamanho1 = preparaVetor (&vetor1);
    tamanho2 = preparaVetor (&vetor2);

    /* S�o tamanho1 * tamanho2 elementos. */
    vetor_mul = (int*) malloc (sizeof (int) * tamanho1 * tamanho2);

    /* Para cada valor no vetor1... */
    for (i = 0; i < tamanho1; i++){

        /* ... e cada valor no vetor2... */
        for (j = 0; j < tamanho2; j++){

            /* A posi��o em vetor_mul � dada pelo n�mero de vezes que j�
            percorremos o vetor2 + a posi��o atual no vetor2. */
            int pos_mul = i*tamanho2 + j;
            /* Calcula e mostra. */
            vetor_mul [pos_mul] = vetor1 [i] * vetor2 [j];
            printf ("%d * %d = %d\n", vetor1[i], vetor2[j], vetor_mul[pos_mul]);
        }
    }
    free (vetor1);
    free (vetor2);
    free (vetor_mul);
    return (0);
}
