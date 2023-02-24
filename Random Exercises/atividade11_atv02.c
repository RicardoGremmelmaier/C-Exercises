#include<stdio.h>
#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */

void pontoRolo1();
void pontoRolo2();
void moveAgulha();
void rolaTecido();


int main (){

    int i, j;

    while(1){

        for(i = LARGURA_FAIXA; i >= 0; i--){

          for (j = 0; j<LARGURA_FAIXA; j++){

             if (j < i)
             pontoRolo2();

             else
             pontoRolo1();
          }
        rolaTecido();
        }
    }
}

void pontoRolo1(){
    printf("v");
}

void pontoRolo2(){
    printf("a");
}

void moveAgulha(){
    printf(" ");
}

void rolaTecido(){
    printf("\n");
}
