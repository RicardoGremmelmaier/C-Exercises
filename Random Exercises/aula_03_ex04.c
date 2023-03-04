#include <stdio.h>

int main () {
    int matricula, matLeyla, matRafael;
    matLeyla = 100555;
    matRafael= 200888;

    printf ("Digite a matricula: ");
    scanf ("%d", &matricula);

    if (matricula == matLeyla) {
        printf ("Leyza estah matriculada\n");
    } else if (matricula == matRafael) {
        printf ("Rafael estah matriculado\n");
    } else {
        printf ("Nao foi possivel encontrar sua matricula\n");
    }
    printf ("%d", matricula);
    return 0;
}

