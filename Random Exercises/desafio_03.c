#include <stdio.h>
#define N 10

int main(){
    int palpites, chute, equivalencia;
    chute = N/2; //Faço um chute no meio para ter uma noção
    palpites = 1; //Adiciono um palpite, por ser o palpite inicial

    printf("O chute eh %d\n", chute);
    printf ("O valor eh menor (1), igual (2) ou maior (3)?\n");
    scanf ("%d", &equivalencia); // A equivalencia vai determinar o loop.

    while (equivalencia != 2){
        if (equivalencia == 1) { // Se for menor, vou dividir o chute na metade e verificar novamente.
            chute /= 2;
            printf ("O chute eh %d\n", chute);
            printf ("O valor eh menor (1), igual (2) ou maior (3)?\n");
            scanf ("%d", &equivalencia);
            palpites++;
        }
        if (equivalencia == 3) { // Se for maior, vou adicionar metade do valor do chute ao valor do chute
            chute = (chute/2 + chute);
            printf ("O chute eh %d\n", chute);
            printf ("O valor eh menor (1), igual (2) ou maior (3)?\n");
            scanf ("%d", &equivalencia);
            palpites ++;
        }
    }
    printf ("O valor escolhido foi %d\n", chute);
    printf ("A quantidade de palpites foi %d", palpites);
    return 0;
}
/*O programa poderia ser mais eficiente, mas não consegui no momento pensar e fazer
Percebi que algumas vezes o programa vai testar valores que ja foram excluidos da possibilidade
Como por exemplo, pensei no valor 6. O teste afirma que o valor é maior que 5, no entanto, ele vai
chutar o valor 3, o que tira um pouco da eficiencia. Outro erro é o de valores impares, como o 9,
esse programa nunca vai alcança-los, criando um loop infinito. Pensei em tentar resolver usando outra variavel
chuteAnterior pra arrumar os calculos de como mudar o chute, mas nao terei tempo*/
