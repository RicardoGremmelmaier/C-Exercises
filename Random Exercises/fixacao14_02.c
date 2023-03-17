#include <stdio.h>
#include <string.h>

#define N 4096

int ehPalindromo (char* s);

int main (){
    char s [BUFLEN];

    fgets (s, BUFLEN, stdin);
    s [strlen (s)-1] = 0;
    printf ("%d\n", ehPalindromo (s));

    return (0);
}

int ehPalindromo (char* s){
    int i;
    int size = strlen (s);

    for (i = 0; i < size/2; i++)

        if (s [i] != s [size-1-i])
        return (0);

    return (1);
}
