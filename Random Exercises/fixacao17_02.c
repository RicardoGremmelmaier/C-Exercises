#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_COL 4
#define N_LIN 3

int main (){
    int matriz[N_LIN][N_COL],
        i, j, lin, col,
        somaLin = 0, somaCol = 0,
        somaTot;

    srand (time(NULL));

    for (i = 0; i < N_LIN; i++)
        for (j = 0; j < N_COL; j++)
            matriz [i][j] = rand() % 21;

    printf ("Matriz A: \n");

    for (i = 0; i < N_LIN; i++){
        for (j = 0; j < N_COL; j++){
            printf ("%d\t", matriz [i][j]);
        }
        printf("\n--------------------------\n");
    }

    printf ("Digite a linha a somar: ");
    scanf ("%d", &lin);
    printf ("Digite a coluna a somar: ");
    scanf ("%d", &col);

    for (j = 0; j < N_COL; j++)
        somaLin += matriz [lin][j];

    for (i = 0; i < N_LIN; i++)
        somaCol += matriz [i][col];

    somaTot = somaLin + somaCol - matriz[lin][col];

    printf ("Linha: %d\nColuna: %d\n", lin, col);
    printf ("Soma Total: %d", somaTot);
}
