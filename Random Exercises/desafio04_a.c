#include <stdio.h>

int main(){
    int i, j, n;
    char letra;

    scanf ("%d", &n);

    //A contadora i repete n itera��es de forma crescente para formar a piramide

    for (i = 0; i < n; i++){

        /*Enquanto a contadora j faz o processo reverso, vai de n at� i em ordem decrescente, inicializando
        o caracter A, aumentando de 1 em 1 na mesma linha, reiniciando para A a cada nova itera��o
        */

        for (j = n, letra = 'A'; j > i; j--, letra++){
        printf ("%c", letra);
        }
        printf ("\n");
    }
    return 0;
}
