#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente);

int main()
{
    int bas, exp;
    printf("Exercicio 4\n");
    printf("Digite os numeros\n");
    scanf("%d %d", &bas, &exp);

    printf("Resultado: %d", potencia(bas, exp));

return 0;

}

unsigned long long potencia (unsigned int base, unsigned int expoente)
{
    int i, res;
    res = base;
    for(i = 1; i < expoente; i++)
        res *= base;
    return res;
}
