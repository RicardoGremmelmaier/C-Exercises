#include <stdio.h>

int main(){
    int n, i, j;
    char something;
    printf("Exercicio 5\n");
    printf("digite um caractere\n");
    scanf("%c", &something);
    printf("digite um numero\n");
    scanf("%d", &n);

    for (i = 0; i < (2*n + 1)/2; i++){

        for(j = 0; j < n - i; j++)
            printf(" ");

        for(j = 0; j < 2*i + 1; j++)
            printf("%c", something);

    printf("\n");
}

    for (i = (2*n + 1)/2; i >= 0; i--){

        for(j = 0; j < n - i; j++)
            printf(" ");

        for(j = 0; j < 2*i + 1; j++)
            printf("%c", something);


    printf("\n");
}



return 0;
}
