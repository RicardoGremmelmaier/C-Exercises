#include <stdio.h>

int main () {
     int n1;

     printf ("Digite o numero: ");
     scanf ("%d", &n1);
     if ((n1 % 2 == 0) && n1 > 10 || (n1 %2 != 0) && n1 < 50) {
        printf ("Sim");
     } else {
        printf ("Nao");
     }
     return 0;
}
