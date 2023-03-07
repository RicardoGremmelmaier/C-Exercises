#include <stdio.h>
int main(void){
  int num = 0;
  int soma = 0;
  int i;
  for(num = 1000; num < 9999;){
    num++;
    soma = (num%100)+(num-(num%100))/100;
    if (soma * soma == num){
    printf("%d\n", num);
    }
  }
}


