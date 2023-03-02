#include <stdio.h>
#include <stdlib.h>
#define N_LINHAS 3
#define N_COLUNAS 4



int main()
{
    int minhocas[N_LINHAS][N_COLUNAS] = {{10, 20, 30, 40},{20, 30, 40, 50},{50, 40, 30, 10}};

    int i, j, soma = 0, maior_soma = 0;

      // Para cada linha...
      for (i = 0; i < N_LINHAS; i++)
      {
          // Soma todas as colunas desta linha.
          soma = 0;
          for (j = 0; j < N_COLUNAS; j++)
            soma += minhocas[i][j];

          if (soma > maior_soma)
              maior_soma = soma;
      }
      for (j = 0; j < N_COLUNAS; j++)
      {
          soma = 0;
          for(i = 0; i < N_LINHAS; i++)
              soma += minhocas[i][j];
          if (soma > maior_soma)
              maior_soma = soma;
      }

    printf("%d", maior_soma);

    return 0;
}
