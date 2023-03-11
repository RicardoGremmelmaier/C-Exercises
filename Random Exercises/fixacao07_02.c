#include <stdio.h>

int main(){
    float fooAlt, barAlt, fooCresc, barCresc;
    int anos = 1;
    fooAlt = 1.50;
    barAlt = 1.10;
    fooCresc = 0.02 * anos;
    barCresc = 0.03 * anos;

    while ((fooAlt + fooCresc) >= (barAlt + barCresc)){
        fooAlt += fooCresc;
        barAlt += barCresc;
        anos++;
    }
    printf ("A altura de Foolano eh %.2f\nA altura de Barano eh %.2f\n", fooAlt, barAlt);
    printf ("E se passaram %d anos", anos);
}
