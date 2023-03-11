#include <stdio.h>

int main(){
    int n1;

    scanf ("%d", &n1);
    while (n1 >=10 && n1 <=20) {
        printf ("ECO %d\n", n1);
        scanf ("%d", &n1);
    }
    return 0;
}
