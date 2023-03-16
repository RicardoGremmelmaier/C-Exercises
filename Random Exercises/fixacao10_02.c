#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4){
    int razao = 0;

    if ((n4 - n3) == (n3 - n2) && (n3 - n2) == (n2 - n1)){
        razao = n4 - n3;
    }
    return razao;
}

int main (){
    int num1, num2, num3, num4, razao;

    scanf ("%d %d %d %d", &num1, &num2, &num3, &num4);
    razao = ehProgressaoAritmetica(num1, num2, num3, num4);

    if (razao){
        printf ("A razao eh de %d", razao);
    } else {
        printf ("Nao eh uma pa");
    }
}
