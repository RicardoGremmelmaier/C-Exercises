#include <stdio.h>


void segundosParaHMS (int total_segundos, int *h, int *m, int *s){
    *h=total_segundos/3600;
    *m=(total_segundos%3600)/60;
    *s =(total_segundos%3600)%60;
}

int main (){

    int horas, min, seg, totalDeSeg;

    scanf ("%d", &totalDeSeg);

    segundosParaHMS (totalDeSeg, &horas, &min, &seg);
    printf ("%d:%d:%d", horas, min, seg);
}
