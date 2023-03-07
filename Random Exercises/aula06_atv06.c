#include <stdio.h>
#define N_TERMOS 10000

int main () {
  float soma1, soma2, valor;
  int i, i2;
  soma1 = 0;
  soma2 = 0;
  i = 3;
  i2= 5;

  for (i= 3; i <= N_TERMOS; i = i + 4) {
    soma2 += 1/(float)(-1*i);
  }
  for (i2 = 5; i2 <= N_TERMOS; i2 = i2  + 4) {
    soma1 += 1/(float)i2;
  }
  valor = (1 + soma2 + soma1)*4;
  printf ("%.2f\n", soma2);
  printf ("%.2f\n", soma1);
  printf ("%f", valor);
  return 0;
}
