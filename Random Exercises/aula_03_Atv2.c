#include<stdio.h>

int main()
{
    int num, centena, dezena, unidade;
    scanf("%d", &num);
    centena = num  / 100;
    dezena = num % 100 / 10;
    unidade = num % 100 % 10;
    if(unidade == 0){
        if (dezena == 0) {
            printf ("%d", centena);
        } else {
            printf ("%d%d", dezena, centena);
        }
    } else {
        printf ("%d%d%d", unidade, dezena, centena);
    }
    return 0;
}

