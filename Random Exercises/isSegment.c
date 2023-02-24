#include <stdio.h>
#define A 236
#define B 12367
#define ASEGB 1
#define BSEGA 2

int ehSegmento (int a, int b);

int main(){
    int maior, menor, sequencia;

    if (A > B){
        maior = A;
        menor = B;

    } else if (A < B) {
        maior = B;
        menor = A;

    //Caso sejam iguais de inicio, nao verifico nada

    } else {
        printf ("Iguais");
        return 0;
    }

    /*Chamo a funcao dentro do loop ate que o maior
    valor seja menor que o menor valor, ou ate que o
    segmento retorne valor positivo*/

    while (maior >= menor){
        if (ehSegmento(maior, menor)){
            sequencia = 1;
            break;
        }
        sequencia = 0;
        maior /= 10;
    }

    /*Atribuo uma variavel ao valor final da funcao para
    nao repetir o processo da mesma funcao*/


    if (!sequencia){
        printf ("Nao eh segmento");
        return 0;
    }

    if (sequencia && A > B){
        printf ("B eh segmento de A");
        return BSEGA;
    }

    if (sequencia && A < B){
        printf ("A eh segmento de B");
        return ASEGB;
    }
}

int ehSegmento (int a, int b){

    //Uso a flag pra verificar se o segmento encaixa

    int segEncaixou = 0;


    /*Ou o menor valor vira 0, ou os dígitos serao diferentes.
    Caso o menor valor vire 0, o segmento encaixou e todos os
    digitos foram iguais
    Caso o os digitos sejam diferentes, sai do loop e retorna
    falso, dizendo que o segmento nao encaixou*/

    while (b != 0 && a % 10 == b % 10){
        a /= 10;
        b /= 10;
    }

    if (b == 0) {
        segEncaixou = 1;
    }

    return segEncaixou;
}
