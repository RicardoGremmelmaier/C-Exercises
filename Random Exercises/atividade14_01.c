#include <stdio.h>

#define BUFLEN 80

int acertos (char v[], char v2[], int len);

int main (void) {

  char gabarito[BUFLEN], v[BUFLEN];
  int i, totalAcertos, tamanho;

  scanf ("%d", &tamanho);
  scanf ("%s", &gabarito);

  totalAcertos = acertos(v, gabarito, tamanho);
  printf ("%d", totalAcertos);
  return 0;
}

int acertos (char v[], char v2[], int len ){
  int i, soma = 0;

  scanf("%s", v);

  for(i = 0; i < len; i++) {

    if(v[i] == v2[i])
      soma++;
  }

  return soma;
}

