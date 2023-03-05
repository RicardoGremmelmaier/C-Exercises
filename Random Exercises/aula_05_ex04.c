#include <stdio.h>

int main () {
    int n1;

    scanf("%d", &n1);

    if (n1 & 0x1) {
        printf ("Impar.");
    } else {
        printf ("Par.");
    }
    return 0;
}
