#include <stdio.h>
#define N 4550430

int inverte(int num){
  int aux, num_invertido=0, algarismo=0;

  aux=num;
  while(aux){
    algarismo=aux%10;
    num_invertido=num_invertido*10+algarismo;
    aux/=10;
  }
  return num_invertido;
}

int main(void){
    printf("%d", inverte(N));
}
