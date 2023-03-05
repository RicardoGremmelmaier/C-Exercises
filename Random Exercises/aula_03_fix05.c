#include <stdio.h>

int main (){
    int vMax, vMot, multa;

    printf ("Digite a velocidade maxima: ");
    scanf ("%d", &vMax);
    printf ("Digite a velocidade do motorista: ");
    scanf ("%d", &vMot);
    multa = (vMax - vMot) * 50;
    if (vMot > vMax) {
        printf ("O motorista estava acima da velocidade limite\n");
        printf ("O valor da multa eh %d R$", -multa);
    } else {
        printf ("O motorista estava dentro da velocidade limite\n");
        printf ("Nao ha multas pendentes");
    }
    return 0;
}
