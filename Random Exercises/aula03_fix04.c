#include <stdio.h>

int main () {
    int anoAt, anoNasc, idade;

    printf ("Digite o ano atual: ");
    scanf ("%d", &anoAt);
    printf ("Digite o ano de nascimento: ");
    scanf ("%d", &anoNasc);
    idade = anoAt - anoNasc;
    if (idade < 16) {
        printf ("Voce nao tem idade para ser eleitor");
    } else if (idade >= 18) {
        if (idade < 65) {
            printf("Eleitor obrigatorio");
        } else {
            printf ("Eleitor facultativo");
        }
    } else {
        printf ("Eleitor facultativo");
    }
    return 0;
}
