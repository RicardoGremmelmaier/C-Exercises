#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_LINHAS 4
#define N_COLUNAS 6

int main (){
    int i, j,
        matriz [N_LINHAS][N_COLUNAS],
        transp [N_COLUNAS][N_LINHAS];

    srand (time(NULL));

    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz [i][j] = 1 + rand() % 20;


    printf ("Matriz A: \n");

    for (i = 0; i < N_LINHAS; i++){
        for (j = 0; j < N_COLUNAS; j++){
            printf ("%d\t", matriz [i][j]);
        }
        printf("\n-------------------------------------------\n");
    }

    for (j = 0; j < N_LINHAS; j++){
        for (i = 0; i < N_COLUNAS; i++){
            transp[i][j]= matriz [j][i];
        }
    }

    printf ("Matriz Transposta: \n");

    for (i = 0; i < N_COLUNAS; i++){
        for (j = 0; j < N_LINHAS; j++){
            printf ("%d\t", transp [i][j]);
        }
        printf("\n--------------------------\n");
    }
}
