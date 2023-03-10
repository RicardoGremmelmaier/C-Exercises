#include <stdio.h>

int main(){
    int quoc, rest, dividendo, divisor;
    quoc = 0;

    scanf("%d", &dividendo);
    scanf ("%d", &divisor);

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quoc++;
    }
    rest = dividendo;
    printf ("Quociente: %d\nResto: %d",quoc, rest);
    return 0;
}
