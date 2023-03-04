#include<stdio.h>

int main()
{
    int hor1, hor2, min1, min2, horFin, minFin;
    printf("digite a hora que comecou: ");
    scanf("%d", &hor1);
    printf ("Digite os minutos que começou: ");
    scanf ("%d", &min1);
    printf("digite a hora que terminou: ");
    scanf("%d", &hor2);
    printf ("Digite os minutos que terminou: ");
    scanf ("%d", &min2);
    if (min2 < min1) {
        min2 = min2 + 60;
        minFin = min2 - min1;
        hor2 = hor2 - 1;
        if (hor2 >= hor1) {
            horFin = hor2 - hor1;
        } else {
            hor2 = hor2 + 24;
            horFin = hor2 - hor1;
        }
    } else if (min2 > min1) {
        minFin = min2 - min1;
        if (hor2 < hor1) {
            hor2 = hor2 + 24;
            horFin = hor2 - hor1;
        } else {
            horFin = hor2 - hor1;
        }
    } else {
        minFin = min2 - min1;
        if (hor2 <= hor1) {
            hor2 = hor2 + 24;
            horFin = hor2 - hor1;
        } else {
            horFin = hor2 - hor1;
        }
    }
    printf ("A duracao do jogo eh %d horas ", horFin);
    printf ("e de %d minutos", minFin);
    return 0;
}
