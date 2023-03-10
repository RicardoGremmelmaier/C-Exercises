#include <stdio.h>

int main()
{
    int numero;
    int algarismo;
    int digito;
    int estaPresente = 0;

    printf("Digite um numero inteiro\n");
    scanf("%d" , &numero);

    printf("Digite um algarismo\n");
    scanf("%d" , &digito);

    while(numero > 10 && estaPresente == 0)
    {
        numero = numero/10;
        algarismo = numero%10;

        if(algarismo == digito)
            estaPresente = 1;

    }

    if(estaPresente == 1)
        printf("esta presente");
    else if (estaPresente != 1)
        printf("nao esta presente");

    return 0;
}
