#include <stdio.h>

int main (){
    int n1;
    int abs;

    printf("Digite o valor inteiro: ");
    scanf("%d", &n1);
    abs = n1;
    if (n1 < 0) {
        abs = abs * -1;
    }
    printf ("O valor absoluto de %d eh %d", n1, abs);
    return 0;
}
