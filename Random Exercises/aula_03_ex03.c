#include <stdio.h>

int main (){

    float n1, n2, n3, nRec, media;

    printf ("Digite as 3 notas: ");
    scanf ("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 6) {
        printf ("Parabens, voce esta aprovado e sua media eh %.2f", media);
    } else if (media >= 4) {
        printf ("Em exame. Digite a nota da recuperacao: ");
        scanf ("%f", &nRec);
        if ((media + nRec) / 2 >= 5) {
            printf ("Aprovado, porem estude mais!");
        } else {
            printf ("Reprovado");
        }
    } else {
        printf ("Reprovado");
    }
    return 0;
}
