#include <stdio.h>

typedef struct{
  float menor;
  float maior;
  float meio;
} MaMeMe;

void troca(float *a, float *b) {
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

void classifica (MaMeMe *valores) {
  if (valores->meio > valores->maior)
    troca (&valores->meio, &valores->maior);

  if (valores->menor > valores->meio){
    troca (&valores->menor, &valores->meio);
    if (valores->meio > valores->maior)
      troca (&valores->meio, &valores->maior);
  }
}

int main(void) {
  MaMeMe ordem;

  scanf ("%f %f %f", &ordem.maior, &ordem.meio, &ordem.menor);

  classifica(&ordem);

  printf ("Maior: %.2f\nMeio: %.2f\nMenor: %.2f", ordem.maior, ordem.meio, ordem.menor);
}
