#include <stdio.h>

int proxFibonacci (int n);

int main(){
  int n;
  printf("numero de sequencia:");
  scanf("%d", &n);
  printf("primeiro termo:%d", proxFibonacci(n));
  return 0;
}


int proxFibonacci (int n){
    int num_atual, num_ant, seq, i, resultado;
    seq = n;
    num_atual = 1;
    num_ant = 0;
    resultado = 0;
    for(i = 0; i < n; i++){
        if( resultado < n){
          resultado = num_ant + num_atual;
          num_ant = num_atual;
          num_atual = resultado;
        }
    }
    return resultado;
}
