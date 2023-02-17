#include <stdio.h>
#include <stdlib.h>

#define N 5


int ehSimetrica (char matriz [N][N]);

int main(){
    char matriz[N][N] = {{'S', 'A', 'T', 'O', 'R'},
                         {'A', 'R', 'E', 'P', 'O'},
                         {'T', 'E', 'N', 'E', 'T'},
                         {'O', 'P', 'E', 'R', 'A'},
                         {'R', 'O', 'T', 'A', 'S'}};

    if (ehSimetrica(matriz))
        printf ("Escravo liberto!");
    else
        printf ("Escravo escravizado");
}

int ehSimetrica (char matriz [N][N]){
    int i, j;

    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
            if (matriz[i][j] != matriz [j][i])
                return 0;

    for (i = 0, j = N; i < j; i++, j--)
        if (matriz [i][i] != matriz [j][j])
            return 0;

    return 1;
}
