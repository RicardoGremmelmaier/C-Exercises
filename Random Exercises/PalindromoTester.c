#include <stdio.h>

int main() {
  int num, temporario, unidade, reverso = 0;
  scanf("%d", &num);
  temporario = num;

  while(temporario > 0) {
    unidade = temporario%10;
    reverso = (reverso*10) + unidade;
    temporario /= 10;
  }

  if(reverso == num) {
    printf("Eh palindromo");
  } else {
    printf("Nao eh palindromo");
  }
  return 0;
}
