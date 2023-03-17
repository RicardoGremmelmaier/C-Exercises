#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_LINHAS 3
#define N_COLUNAS 4
#define BUFLEN 10

int temRepeticao (int matriz [][N_COLUNAS], int nl, int nc);

int main (){

    int i, j;
    int matriz [N_LINHAS][N_COLUNAS];

    srand (time (NULL));

    /* Preenche */
    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz [i][j] = rand () % 100;

    /* Imprime */
    for (i = 0; i < N_LINHAS; i++){
        for (j = 0; j < N_COLUNAS; j++)
            printf ("%d\t", matriz [i][j]);
        printf ("\n");
    }

    /* Testa */
    if (temRepeticao (matriz))
        printf ("Tem elementos repetidos.");
    else
        printf ("Nao tem elementos repetidos.");

    return (0);
}

int temRepeticao (int matriz [][N_COLUNAS]){
    int i_elem, j_elem, i_rep, j_rep;

    /* Para cada elemento da matriz... */
    for (i_elem = 0; i_elem < N_LINHAS; i_elem++){
        for (j_elem = 0; j_elem < N_COLUNAS; j_elem++){
            int elemento = matriz [i_elem][j_elem];

            /* Percorre o resto dessa linha. */
            for (j_rep = j_elem + 1; j_rep < N_COLUNAS; j_rep++)
                if (matriz [i_elem][j_rep] == elemento)
                    return (1);

            /* Percorre o resto da matriz. */
            for (i_rep = i_elem + 1; i_rep < N_LINHAS; i_rep++)
                for (j_rep = 0; j_rep < N_COLUNAS; j_rep++)
                    if (matriz [i_rep][j_rep] == elemento)
                        return (1);
        }
    }

    return (0);
}

