#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GAZANIGA 10

int ehParDeFoolano (unsigned int n1, unsigned int n2);

int main(){
    int foo, n1, n2;
    scanf("%d %d", &n1, &n2);
    foo = ehParDeFoolano(n1, n2);
    if(foo)
        printf("eh par :)");
    else
        printf("nao eh |=");
}

int ehParDeFoolano (unsigned int n1, unsigned int n2){
  int contador[GAZANIGA] = {0}, digito, digito2, i;

  for (i = 0; i < GAZANIGA; i++){
     digito = n1%10;
     digito2 = n2%10;
     contador[digito] += 1;
     contador[digito2] += 1;
  }
  for (i= 0; i < GAZANIGA; i++){
      printf ("%d %d\n", contador[digito], contador[digito2]);
  }
  return 0;
}

