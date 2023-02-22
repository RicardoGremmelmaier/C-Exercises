#include <stdio.h>
#define ACESSOS 1000000

int main() {
  int N_dias, valor, somaValores = 0, qntdDias = 0, i;
  scanf("%d", &N_dias);
  for(i = 0; i < N_dias; i++) {
    scanf("%d", &valor);
    somaValores += valor;

    if (somaValores <= ACESSOS) {
      qntdDias++;
    }
  }



  if (somaValores < ACESSOS){
    printf ("Erro -1");
  } else {
    printf ("A quantidade de dias foi de: %d", qntdDias);
  }
  return 0;
}
