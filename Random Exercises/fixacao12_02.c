#include <stdio.h>

int main (){
    int a, *p;
    a = 10;
    p = &a;

    printf ("Valor da variavel: %d\n", a);
    printf ("Endereco da variavel: %p\n", &a);
    printf ("Endereco apontado pelo ponteiro: %p\n", p);
    printf ("Valor apontado pelo ponteiro: %d\n", *p);
    printf ("Endereco do ponteiro: %p\n", &p);

    return 0;
}
