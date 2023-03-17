#include <stdio.h>

void incDec (int *a, int *b);

int main() {
    int num1, num2;
    num1 = 5;
    num2 = 10;

    incDec (&num1, &num2);

    printf ("Primeiro decrementado: %d\n", num1);
    printf ("Segundo incrementado: %d\n", num2);

    return 0;
}

void incDec (int *a, int *b){
    (*a)--;
    (*b)++;
}
