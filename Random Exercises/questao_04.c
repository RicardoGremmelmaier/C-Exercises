#include <stdio.h>

int main ()
{
    int num;

    printf("Digite o valor em reais:\n");
    scanf("%d", &num);

    printf("A quantidade de notas de 100 eh: %d\n", num/100);
    printf("A quantidade de notas de 50 eh: %d\n", num%100/50);
    printf("A quantidade de notas de 20 eh: %d\n", num%100%50/20);
    printf("A quantidade de notas de 10 eh: %d\n", num/100%50%20/10);
    printf("A quantidade de notas de 5 eh: %d\n", num/100%50%20%10/5);
    printf("A quantidade de notas de 2 eh: %d\n", num/100%50%20%10%5/2);
    printf("A quantidade de notas de 1 eh: %d\n", num/100%50%20%10%5%2);

    return 0;
}
