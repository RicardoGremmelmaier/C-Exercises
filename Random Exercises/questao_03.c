#include <stdio.h>

int main () {

int dist;

printf ("digite a distancia do robo para a cesta\n");
scanf ("%d", &dist);

if (dist <= 800 )
    printf ("a cesta valeu 1 ponto");
else if (dist <= 1400)
    printf ("a cesta valeu 2 pontos");
else
    printf ("a cesta valeu 3 pontos");

return 0;
}
