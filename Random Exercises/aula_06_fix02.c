#include <stdio.h>

int main () {
    int n1, i;
    i = 1;
    scanf ("%d", &n1);

    while (i <= 10) {
        printf ("%d X %d = %d\n", n1, i, i*n1);
        i++;
    }

    printf ("\n");

    for (i = 10; i >= 1; i--){
        printf ("%d X %d = %d\n", n1, i, i*n1);
    }
    return 0;
}
