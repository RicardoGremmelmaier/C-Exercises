#include <stdio.h>

int main () {

    float imposto, rendMen, aliq;

    scanf ("%f", &rendMen);

    if (rendMen <= 1200.25) {
        imposto = 0;

    } else if (rendMen <= 2300.50) {
        aliq = 7.5/100;
        imposto = (rendMen - 1200.25) * aliq;

    } else if (rendMen <= 3500.75) {
        aliq = 15.0/100;
        imposto = (rendMen - 2300.50) * aliq;

    } else if (rendMen <= 4000.0) {
        aliq = 22.5/100;
        imposto = (rendMen - 3500.75) * aliq;

    } else {
        aliq = 27.5/100;
        imposto = (rendMen - 4000.0) * aliq;

    }
    printf ("%.2f", imposto);
    return 0;
}
