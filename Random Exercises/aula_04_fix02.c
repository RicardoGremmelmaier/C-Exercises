#include <stdio.h>

int main () {
    int anoAt, anoNasc, anoContrib;

    printf ("Digite o ano atual, o ano de nascimento e o ano que começou a contribuir: ");
    scanf ("%d %d %d", &anoAt, &anoNasc, &anoContrib);
    printf ("Sua idade ao final do ano eh %d\n", anoAt - anoNasc);
    printf ("Seu tempo de contribuicao eh %d\n", anoAt - anoContrib);

    if ((anoAt - anoNasc >= 65) || (anoAt - anoContrib >= 30) || (anoAt - anoNasc >= 60) && (anoAt - anoContrib >= 25)){
        printf ("Pode se aposentar");
    } else {
        printf ("Ainda nao pode se aposentar");
    }
    return 0;
}

