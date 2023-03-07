#include <stdio.h>
#define NUM 1000000

int main () {
  float somatParcial, somatFinal, potencia;
  int i = 1;

  for (i = 1; i <= NUM; i++) {
    if ((i - 1) % 2 == 0) {
        potencia = 1;
    } else {
        potencia = -1;
    }
    somatParcial = potencia/i;
    somatFinal += somatParcial;
  }
  printf ("%.20f", somatFinal);
}

/*for (i = NUM i >= 1; i--) {
    if ((i - 1) % 2 == 0) {
        potencia = 1;
    } else {
        potencia = -1;
    }
    somatParcial = potencia/i;
    somatFinal += somatParcial;
  }
  printf ("%.20f", somatFinal);


  b) Creio que nada.

  c) A variavel tem menos chance de ter overflow e tem mais precisao.
  */

