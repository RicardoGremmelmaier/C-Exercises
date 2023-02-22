#include <stdio.h>

int main(){
    int dividiu_todos = 0, i, num, valor;
    valor = 1;

    scanf ("%d", &num);

    while (dividiu_todos < num){
        for (i = 1, dividiu_todos = 0; i <=num; i++){
            if (valor % i != 0){
                break;
            } else {
                dividiu_todos++;
            }
        }
    valor++;
    }
    printf ("%d", valor-1);
    return 0;
}
