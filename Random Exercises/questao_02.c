#include <stdio.h>

int main()
{
    int dia_nasc, mes_nasc, ano_nasc, dia_a, mes_a, ano_a, idade;

    printf("Digite sua data de nascimento:\n");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);
    printf("Insira a data atual:\n");
    scanf("%d/%d/%d", &dia_a, &mes_a, &ano_a);

    idade =  ano_a - ano_nasc;

    if (mes_nasc > mes_a || (mes_nasc == mes_a && dia_nasc > dia_a))
        idade = idade - 1;

    printf("Sua idade eh: %d", idade);
    return 0;
}
