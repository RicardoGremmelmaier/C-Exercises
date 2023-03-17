#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
    int i;
    float* vetor;

    vetor = (float*) malloc (N * sizeof (float));

    for (i = 0; i < N; i++)
        scanf ("%f", &vetor[i]);

    for (i = 0; i < N; i++)
        printf ("%.4f\n", vetor[i]);

    free (vetor);
    return 0;
}
