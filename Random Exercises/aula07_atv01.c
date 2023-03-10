#include <stdio.h>

int main(){
    int fat, i, num;
    fat = 1;

    scanf ("%d", &num);
    i = num;

    while (i >= 1){
        fat *= i;
        i--;
    }
    printf ("O fatorial de %d eh %d", num, fat);
    return 0;
}
