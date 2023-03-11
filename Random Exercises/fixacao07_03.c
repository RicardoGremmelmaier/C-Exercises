#include <stdio.h>
#define MIN 5
#define MAX 15

int main(){
    int maior, menor, valor, qntDeVal, erro;
    erro = 1;

    scanf ("%d", &valor);
    menor = valor;
    maior = valor;
    erro = 1;
    qntDeVal = 0;

    while (valor > 0) {
        if (valor >= MIN && valor <= MAX){ //Caso o valor esta na faixa, soma um a quantidade e remove o erro
            qntDeVal++;
            erro = 0;

            if (valor < menor){
                menor = valor;
            }

            if (valor > maior){
                maior = valor;
            }
        }
        scanf ("%d", &valor);
    }
    if (erro == 0){
        printf ("A quantidade de valores na faixa eh %d\n", qntDeVal);
        printf ("O maior valor eh %d\nO menor valor eh %d", maior, menor);
    } else {
        printf ("Erro! Nao foram digitados valores na faixa");
    }
    return 0;
}
