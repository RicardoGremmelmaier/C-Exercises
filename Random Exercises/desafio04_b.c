#include <stdio.h>

int main(){
    int i, j, n;
    char letra;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){ //

        for (j = n, letra = 'A' + i; j > i; j--, letra++){ //Contadora mostra as letras em ordem alfabetica, reiniciando em A + i
        printf ("%c", letra);
        }

        printf ("\n");
    }
    return 0;
}
