#include <stdio.h>
#define ACERTOU_VENCEDOR 10
#define ACERTOU_PLACAR 5

int main(){
    int placar1, placar2, chute1, chute2, pontos;
    pontos = 0;

    printf("Digite o placar apostado para o time 1: ");
    scanf ("%d", &chute1);
    printf("Digite o placar apostado para o time 2: ");
    scanf ("%d", &chute2);
    printf("Digite o placar final do time 1: ");
    scanf ("%d", &placar1);
    printf("Digite o placar apostado para o time 2: ");
    scanf ("%d", &placar2);

    // Verifica se acertou o chute ou errou
    if (placar1 > placar2){
        if (chute1 > chute2){
            pontos += ACERTOU_VENCEDOR;
        }
    } else if (placar1 < placar2){
        if (chute1 < chute2){
            pontos += ACERTOU_VENCEDOR;
        }
    } else {
        if (chute1 == chute2){
            pontos += ACERTOU_VENCEDOR;
        }
    }
    //Verifica se acertou o placar
    if (placar1 == chute1){
        pontos += ACERTOU_PLACAR;
    }
    if (placar2 == chute2){
        pontos += ACERTOU_PLACAR;
    }
    printf ("Sua pontuacao foi de %d", pontos);
    return 0;
}
