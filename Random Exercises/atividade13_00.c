#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
    srand(time(0));

    int i, media, soma = 0, maiores = 0, menores = 0, iguais = 0;
    int v[N];
    for (i = 0; i < N; i++){
        v[i] = (rand() % 61) + 20;
        soma += v[i];
    }

    media = soma/N;
    printf ("%d\n", media);

    for(i = 0; i < N; i++){
      if(v[i] > media){
        maiores++;
        printf("%d eh grandao\n", v[i]);
      }

      else if(v[i] < media){
        menores++;
        printf("%d eh piqueno\n", v[i]);
      }

      else{
        printf("%d ta na media, chapa |=\n", v[i]);
        iguais++;
      }
    }
    printf("%d sao maiores, e %d sao menores\n", maiores, menores);
    printf ("%d eh igual", iguais);
	return 0;
}
