#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6
#define BRANCO 1
#define PRETO 0

int main (void){
    int i, j, soma_branca = 0;
    int tabuleiro [N][N] = {{0,0,1,0,0,0},
                            {1,9,9,9,9,9},
                            {0,9,9,9,9,9},
                            {0,9,9,9,9,9},
                            {1,9,9,9,9,9},
                            {1,9,9,9,9,9}};

    for (i = 1; i < N; i++)
        for (j = 1; j < N; j++)
        {
            soma_branca = tabuleiro[i-1][j] + tabuleiro[i-1][j-1] + tabuleiro[i][j-1];

            if (soma_branca > 1)
              tabuleiro [i][j] = PRETO;
            else
              tabuleiro [i][j] = BRANCO;
        }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", tabuleiro[i][j]);

        printf("\n");
    }
}
