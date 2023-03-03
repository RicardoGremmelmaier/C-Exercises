#include <stdio.h>

typedef struct{
  float menor;
  float maior;
  float meio;
} MaMeMe;

MaMeMe classifica (float n1, float n2, float n3) {
    MaMeMe sequencia;
    if (n1 > n2) {
      if (n2 > n3) {
        sequencia.maior = n1;
        sequencia.meio = n2;
        sequencia.menor = n3;
      }
      else {
        sequencia.maior = n1;
        sequencia.meio = n3;
        sequencia.menor = n2;
      }
    }
    else if (n3 > n2) {
      if (n2 > n1) {
        sequencia.maior = n3;
        sequencia.meio = n2;
        sequencia.menor = n1;
      }
      else {
        sequencia.maior = n3;
        sequencia.meio = n1;
        sequencia.menor = n2;
      }
    }
    else if (n2 > n1) {
      if (n1 > n3) {
        sequencia.maior = n2;
        sequencia.meio = n1;
        sequencia.menor = n3;
      }
      else {
        sequencia.maior = n2;
        sequencia.meio = n3;
        sequencia.menor = n1;
      }
    }
    return sequencia;
}

int main(void) {
  float n1, n2, n3;
  MaMeMe ordem;

  scanf ("%f %f %f", &n1, &n2, &n3);

  ordem = classifica(n1, n2, n3);

  printf ("Maior: %.2f\nMeio: %.2f\nMenor: %.2f", ordem.maior, ordem.meio, ordem.menor);

}
