#include <stdio.h>

int main() {
  int N_numeros, valor, anterior, total_consecutivos = 1, max_consecutivos = 0, i;
  scanf("%d", &N_numeros);
  scanf("%d", &valor);
  anterior = valor;
  for(i = 1; i < N_numeros; i++) {
    scanf("%d", &valor);

    if(anterior == valor) {
      total_consecutivos++;
    } else {
      if(total_consecutivos > max_consecutivos) {
        max_consecutivos = total_consecutivos;
      }
      total_consecutivos = 1;
    }

    anterior = valor;
  }

  if(total_consecutivos > max_consecutivos) {
    max_consecutivos = total_consecutivos;
  }

  printf("\nTotal de pontos: %d", max_consecutivos);

  return 0;
}
