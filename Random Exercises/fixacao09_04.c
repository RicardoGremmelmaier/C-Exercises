#include <stdio.h>

int main(){
    int i, j, n;
    char letra;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        for (j = n, letra = 'A'; j > i; j--, letra++){
        printf ("%c", letra);
        }
        printf ("\n");
    }
    return 0;
}
