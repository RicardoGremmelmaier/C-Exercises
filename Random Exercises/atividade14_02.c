#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFLEN 1024


void removeElemento (int v[], int tam);

int main(){
    int vet[BUFLEN], i, tam, posic;

    scanf ("%d", &tam);

    for (i = 0; i < tam ;  i++)
        vet[i] = rand();

    scanf ("%d", &posic);

    while (vet && (posic < tam) && (posic >= 0)){
        removeElemento (vet, tam, posic);
        tam --;

        scanf ("%d", &posic);


        for (i = 0; vet[i] != '\0'; i++)
        printf ("%c", vet[i]);
    }

}

void removeElemento (int v[], int tam, int pos){
    int i;

    for(i = pos; i < tam-1; i++) {
      v[i] = v[i+1];
    }
}

