#include <stdio.h>

int main(){
    int i, j, n;
    char letra;

    scanf ("%d", &n);

    /*A contadora inicia do 0 e repete n iterações, e a letra é incializada como A + o valor total de N menos 1,
    para cair na letra correta (sem o -1 ele vai um acima, por iniciar no A) diminuindo a letra a cada iteração
    e aumentando a contadora
    */

    for (i = 0, letra = 'A' + (n-1); i < n; i++, letra--){

        //A contadora inicia no valor total a ser mostrado e diminui de 1 em 1, pra formar a piramide

        for (j = n; j > i; j--){
            printf ("%c", letra);
        }
        printf ("\n");
    }
    return 0;
}
