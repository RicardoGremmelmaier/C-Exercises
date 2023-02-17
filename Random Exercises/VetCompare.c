#include <stdio.h>
#include <stdlib.h>

int main(){
    char vetA[11] = "computacao", vetB[11];
    int i;

    scanf("%s", &vetB);

    for (i = 0; i < 10; i++)
        vetB[i] = tolower(vetB[i]);

    printf ("{");
    for (i = 0; i < 10; i++){
        if (vetA[i] == vetB[i]){
            printf ("%d ", i);
        }
    }
    printf ("}");

    return 0;
}
