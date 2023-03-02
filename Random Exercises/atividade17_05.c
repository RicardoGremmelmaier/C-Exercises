#include <stdio.h>
#include <stdlib.h>
#define N 9
#define M 3
#define BUFLEN 10

int ehValido (int matriz[N][N]);
int verificaAlgarismos (int vetor[10]);

int main(){
    int resposta_sudoku [N][N] =
    {{9, 5, 4, 8, 1, 6, 3, 7, 2},
     {7, 8, 6, 2, 5, 3, 1, 4, 9},
     {1, 2, 9, 7, 9, 4, 6, 5, 8},
     {3, 1, 8, 9, 7, 2, 4, 6, 5},
     {2, 7, 9, 4, 6, 5, 8, 1, 3},
     {4, 6, 5, 3, 8, 1, 9, 2, 7},
     {8, 4, 7, 1, 2, 9, 5, 3, 6},
     {5, 3, 2, 6, 4, 8, 7, 9, 1},
     {6, 9, 1, 5, 3, 7, 2, 8, 4}};//6
    int leyza[BUFLEN] = {0},
        i, j, k, l;

    if (!ehValido(resposta_sudoku)){
        printf ("Nao eh valido");
        return 0;
    }

    /* Verificando a quantidade de algarismos na linha*/
    for (i = 0; i < N; i++){
         for (j = 0; j < N ; j++)
            leyza[resposta_sudoku[i][j]]++;

         if (!verificaAlgarismos(leyza)){
            printf ("linha.\nInvalidez na linha");
            return 0;
         }
    }

    /* Verificando a quantidade de algarismos na coluna*/
    for(i = 0; i < N; i++){
      for (j = 0; j < N; j++)
        leyza[resposta_sudoku[j][i]]++;

      if (!verificaAlgarismos(leyza)){
            printf ("coluna.\nInvalidez na coluna");
            return 0;
         }
    }

    /* Verificando cada bloco*/
    for (i = 0, k = 0; i < N; i += 3){
        for (j = 0, l = 0; j < N; j += 3){
            for (k = i; k < i + M; k++){
                for (l = j; l < j + M; l++){
                    leyza[resposta_sudoku[k][l]]++;
                }
            }
            if (!verificaAlgarismos(leyza)){
                printf ("bloco.\nInvalidez no bloco");
                return 0;
            }
        }
    }
    printf ("Parabens, sudoku correto!");
    return 0;
}

int ehValido (int matriz[N][N]){
    int i, j;

    /* Verifica se nao tem valor invalido (menor que
       1 ou maior que 9*/
    for(i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (matriz [i][j] < 1 || matriz [i][j] > 9){
                printf ("%d na posicao linha: %d e coluna: %d ", matriz[i][j], i+1, j+1);
                return 0;
            }
        }
    }
    return 1;
}

int verificaAlgarismos (int vetor[10]){
    int i;

    for (i = 1; i < 10; i++){
        if (vetor[i] != 1){
            if (i == 0){
                printf ("Faltou um algarismo na(o) ");
            }
            printf ("Algarismos repetidos na(o) ");
            return 0;
        }
        vetor[i] = 0;
    }
    return 1;
}

