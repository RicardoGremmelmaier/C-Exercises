#include<stdio.h>

int main()
{
    int n1, n2, n3, maior;
    printf ("Digite os 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = n1;

    if (n1 > n2) {
        if (n1 > n3){
            printf ("O maior valor eh %d", maior);
        } else if(n1 < n3){
            maior = n3;
            printf ("O maior valor eh %d", maior);
        } else {
            ("O maior valor eh %d", maior);
        }
    } else if (n1 < n2){
        maior = n2;
        if (n2 > n3) {
            printf ("O maior valor eh %d", maior);
        } else if (n2 < n3){
            maior = n3;
            printf ("O maior valor eh %d", maior);
        } else {
            printf ("O maior valor eh %d", maior);
        }
    } else {
        if (n1 > n3){
            printf ("O maior valor eh %d", maior);
        } else if (n1 < n3){
            maior = n3;
            printf ("O maior valor eh %d", maior);
        } else {
            printf ("Eles sao iguais e o maior valor eh %d", maior);
        }
    }
    return 0;
}

