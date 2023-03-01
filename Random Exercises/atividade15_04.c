#include<stdio.h>
#define N 12

int tamMaiorSeqNDec (int* val, int n, int* inicio, int* fim) {
  int i, maiorSeq, seqAtual = 1, inicioAtual = 0, fimAtual = 0;

  for(i = 0; i < n-1; i++) {
    if(val[i] <= val[i+1]) {  //Se ta crescendo
      seqAtual++;
      fimAtual++;
    }
    else {
      if(seqAtual > maiorSeq) {
        maiorSeq = seqAtual;
        * inicio = inicioAtual;
        * fim = fimAtual;
      }

      inicioAtual = i+1;
      fimAtual = i+1;
      seqAtual = 1;
    }
  }

  return maiorSeq;
}

int main(){
    int inicSeq, fimSeq, numeros[N] = {1, 5, 6, 4, 9, 13, 13, 13, 55, 54, 40, 28}, maior;

    maior = tamMaiorSeqNDec(numeros, N, &inicSeq, &fimSeq);

    printf("\nmaior sequencia: %d\ninicio:%d\tfim:%d", maior, inicSeq, fimSeq);

    return 0;
}
