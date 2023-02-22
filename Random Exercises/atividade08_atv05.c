#include <stdio.h>
#define MIN_TERMO 0.2

int main() {
  float valorSoma = 0, valorTerm = 1, denom = 1;

  while (valorTerm > MIN_TERMO) {
    printf("%.4f\t\t%.4f\n", valorTerm, valorSoma);
    valorTerm = 1/denom;
    denom++;
    valorSoma += valorTerm;
  }
  return 0;
}
