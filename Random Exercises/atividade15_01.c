#include <stdio.h>
#include <stdlib.h>

#define N 100


int main() {

  int pedra[N] = {0}, sapo, i, j, tamanho, posicao, pulo;
  scanf("%d %d", &tamanho, &sapo);

  for(i = 0; i < sapo; i++) {
    scanf("%d %d", &posicao, &pulo);

    for(j = posicao; j < tamanho; j += pulo) {
      pedra[j] = 1;
    }

    for(j = posicao - pulo; j >= 0; j -= pulo) {
        pedra[j] = 1;
    }

  }

  for(i = 0; i < tamanho; i++)
    printf("%d", pedra[i]);

  printf("\n");

  return 0;
}


