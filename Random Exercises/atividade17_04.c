#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 2
#define N 3



int main(){

  int i, j, k, soma;
  int matriz_A [M][N], matriz_B[N][M], result[M][M];

  srand (time(NULL));

  for (i = 0; i < M; i++)
      for (j = 0; j < N; j++)
        {
            matriz_A[i][j] = rand()%5 + 1;
            matriz_B[j][i] = rand()%6 + 1;
        }
  printf("Matriz A:\n");
    for (i = 0; i < M; i++){
      for (j = 0; j < N; j++){
        printf("%d\t", matriz_A[i][j]);
      }
      printf("\n");
    }
  printf("\n//====================================================//\n\n");
  printf("Matriz B:\n");
  for (i = 0; i < N; i++){
      for (j = 0; j < M; j++){
        printf("%d\t", matriz_B[i][j]);
      }
      printf ("\n");
  }

  // Para cada posição da saída (MxM)...
  for (k = 0; k < M; k++)
  {
      for (i = 0; i < M; i++)
      {
          // Calcula o somatório de N elementos.
          soma = 0;
          for (j = 0; j < N; j++)
          {
              soma += matriz_A[k][j] * matriz_B[j][i];
          }
          result [k][i] = soma;
      }
  }
    printf("\n//====================================================//\n\n");
    printf("Matriz Resultado:\n");
  for (i = 0; i < M; i++){
      for (j = 0; j < M; j++){
        printf("%d\t", result[i][j]);
      }
      printf ("\n");
  }
}





