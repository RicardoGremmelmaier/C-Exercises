#include <stdio.h>

int main () {
    int i, n1, aux;
    i = 0;

    scanf ("%d", &n1);
    n1++;
    aux = n1;

    while (i <=9) {
        printf ("%d ", n1);
        n1++;
        i++;
    }
    printf ("\n");
    for (i = 0; i<= 9; i++, aux++) {
        printf ("%d ", aux);
    }
    return 0;
}
