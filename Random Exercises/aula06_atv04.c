#include <stdio.h>

int main () {
    int n1, soma, i;
    soma = 0;
    scanf ("%d", &n1);
    for (i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            soma += i;
        }
    }

        if (soma == n1){
            printf ("Eh perfeito");
        } else {
            printf ("Nao eh perfeito");
        }
    return 0;
    printf ("%d", soma);
}
