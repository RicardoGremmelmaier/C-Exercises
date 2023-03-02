#include <stdio.h>
#include <stdlib.h>

#define MIN 15
#define MAX 18
#define BUFLEN 100

int avaliaDado (int* rolagens, int n) {
  int soma[6] = {0}, i;

  for(i = 0; i < n; i++) {
    soma[rolagens[i]-1]++;
  }

  for(i = 0; i < 6; i++) {
    printf("soma[%d]: %d\n", i, soma[i]);
    if(soma[i] < MIN || soma[i] > MAX)
      return 0;
  }

  return 1;
}

int main(){
  int *valores, tam = BUFLEN, i, res;

  valores = (int*) malloc(sizeof(int)*tam);
  srand(10);

  for(i = 0; i < tam; i++)
    valores[i] = rand()%6 + 1;

  res = avaliaDado(valores, tam);

  if(res)
    printf("vaildo\n");
  else
    printf("nao eh valido\n");

}

int analisa (int*** in, int largura, int altura, int** out){

}
