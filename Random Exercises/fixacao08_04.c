#include <stdio.h>

int main(){
    int cPista, mCorridos, pontoFin;

    printf("Quantos metros Leo vai correr? ");
    scanf ("%d", &mCorridos);
    printf("Qual o comprimento da pista? ");
    scanf ("%d", &cPista);

    if (mCorridos > cPista){
        pontoFin = mCorridos % cPista;
    } else if (mCorridos == cPista){
        pontoFin = 0;
    } else {
        pontoFin = mCorridos;
    }
    printf ("O ponto de termino eh: %d", pontoFin);
    return 0;
}
