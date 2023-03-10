#include<stdio.h>
int main(){
    int i, num, anterior = 0, cont, cont2 = 0, seq;
    printf("Digite uma quantidade de numeros aleatorios\n");
    scanf("%d", &num);

    i = 0;
    cont = 1;
    while(i < num){
      anterior = num;
      scanf("%d", &num);

      if(num > anterior){
        cont += 1;
      }
      else if(num < anterior && cont>=cont2){
        cont2 = cont;
        cont = 0;
      }
    }
    printf("A sequencia eh %d", cont2);
    return 0;
}
