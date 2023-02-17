#include <stdio.h>
#include <stdlib.h>

int** geraTrianguloDePascal (int grau);

void destroiTrianguloDePascal (int** t, int grau);

int main(){
    int **matriz, i, j, tam;

    printf ("Qual o grau? ");
    scanf ("%d", &tam);

    matriz = geraTrianguloDePascal(tam);

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++)
            printf ("%d\t", matriz[i][j]);
        printf("\n");
    }

    destroiTrianguloDePascal(matriz, tam);
    return 0;
}

int** geraTrianguloDePascal (int grau){
    int **pascal, i, j;

    pascal = (int**) malloc (grau * sizeof(int*));

    for (i = 0; i < grau; i++)
            pascal[i] = (int*) malloc (grau * sizeof(int));

    for (i = 0; i < grau; i++)
        pascal[i][0] = 1;

    for (j = 1; j < grau; j++)
        pascal[0][j] = 0;

    for (i = 1; i < grau; i++)
        for (j = 1; j < grau; j++)
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];

    return pascal;
}

void destroiTrianguloDePascal (int** t, int grau){
    int i;

    for(i = 0; i < grau; i++)
        free(t[i]);
    free(t);
}
