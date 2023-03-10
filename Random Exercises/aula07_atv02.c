#include <stdio.h>

int main(){
    int i, anterior, sucessor, qntN, n, crescente, decrescente;
    i = 1;
    crescente = 0;
    decrescente = 0;

    scanf ("%d", &qntN);
    scanf ("%d", &n);

    while (i < qntN) {
        anterior = n;
        scanf ("%d", &n);
        sucessor = n; //Atualiza a faixa de anterior e sucessor

        if (anterior > sucessor){
            decrescente = 1;
        } else if (anterior < sucessor){
            crescente = 1;
        }
        i++;
    }
    if (crescente == 1 && decrescente == 1) {
        printf ("Nao eh nenhum dos dois");
    } else if (crescente == 1 && decrescente == 0) {
        printf ("Eh crescente");
    } else if (crescente == 0 && decrescente == 1) {
        printf ("Eh decrescente");
    }
    return 0;
}
