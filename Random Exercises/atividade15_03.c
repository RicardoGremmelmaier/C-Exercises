#include<stdio.h>
#define N 14

int numEstaEm(int num, int *v, int len) {
  int i;
  for(i = 0; i < len; i++) {
    if(num == v[i])
      return 1;
  }

  return 0;
}

int repetidos(int *v, int *copia, int len){
  int i, j = 0;

  for(i = 0; i < len; i++) {
    if (!numEstaEm(v[i], copia, j)) {
      copia[j] = v[i];
      j++;
      //copia[j++] = v[i];
    }
  }

  return j;
}

int main(){
    int entrada[N] = {0,1,2,3,4,3,2,4,5,3,2,6,1,0}, saida[N], i, total;

    total = repetidos(entrada, saida, N);

    for(i = 0; i < total; i++) {
      printf("%d,", saida[i]);
    }

    printf("\n");

    printf("total: %d\n", total);

    return 0;
}
