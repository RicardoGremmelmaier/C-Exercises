#include <stdio.h>
#define N 10

int main () {
    int i = 1;

    //Vou fazer crescente para while e decrescente para for

    while (i <= N) {
        printf ("%d ", i);
        i++;
    }

    printf ("\n");

    for (i = N; i >= 1; i--){
        printf ("%d ", i);
    }
    return 0;
}
