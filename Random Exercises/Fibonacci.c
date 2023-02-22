#include <stdio.h>

int main() {
  int atual = 1, anterior = 0, N_total, i;
  scanf("%d", &N_total);

  for(i = 0; i < N_total; i++) {
    printf("%d, ", anterior);
    atual += anterior;
    anterior = atual-anterior;
  }
  printf("\n");
  return 0;
}
