#include <stdio.h>
#include <math.h>

int main(){
    float n1;
    float raiz;

    printf("Digite o valor desejado a calcular a raiz: ");
    scanf("%f", &n1);
    if ( n1 >= 0) {
        raiz = sqrt(n1);
        printf("A raiz de %.2f eh %.2f", n1, raiz);
    } else {
        printf("Nao existe raiz real");
    }
    return 0;
}
