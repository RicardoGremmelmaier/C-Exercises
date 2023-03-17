#include <stdio.h>
#include <stdlib.h>

#define N 4

int ehSimetrica (int matriz [N][N]);

int main (){

    int i, j;
    int matriz [N][N];
    /* Lê */
    for (i = 0; i < N ; i++){
        for (j = 0;
         j < N; j++){
            printf ("Elemento em (%d, %d): ", i, j);
            scanf ("%d", &(matriz [i][j]));
        }
    }

    if (ehSimetrica (matriz))
        printf ("Simetrica!\n");
    else
        printf ("Nao eh simetrica!\n");

    return (0);
}

int ehSimetrica (int matriz [N][N]){
    int i, j;

    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
            if (matriz[i][j] != matriz [j][i])
                return 0;

    return 1;
}
