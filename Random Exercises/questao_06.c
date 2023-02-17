#include <stdio.h>

int main () {
    int numIni, numAux, numFin, unid, dezen, cent, soma, unidAux, dezenAux, centAux;

    printf ("Digite o numero da conta corrente: ");
    scanf ("%d", &numIni);

    unid = numIni % 10;
    dezen = numIni % 100 / 10;
    cent = numIni / 100;
    numAux = unid * 100 + dezen * 10 + cent;
    soma = numIni + numAux;

    if (soma >= 1000) {
        soma = soma % 1000;
    }

    unidAux = soma % 10;
    dezenAux = soma % 100 / 10;
    centAux = soma / 100;
    numFin = centAux + dezenAux * 2 + unidAux * 3;

    printf ("O digito verificador da conta %d eh %d", numIni, numFin % 10);

    return 0;
}
