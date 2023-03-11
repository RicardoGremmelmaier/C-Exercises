/*
Desafio 08
Desenvolvido por: Ricardo Marthus Gremmelmaier
*/
#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int* crivoDeEratostenes (int tamanho);

int main(){
    int valorMax, num,
        *crivo;

    /* O usuario define o limite maximo em que deseja buscar
       Esse valor sera o tamanho do vetor - 1, ja que comeca
       do 0 */
    printf ("Deseja verificar ate qual valor maximo? ");
    scanf ("%d", &valorMax);

    crivo = crivoDeEratostenes (valorMax);

    printf ("\n\nPesquisa por primos entre 1 e %d...\n", valorMax);
    printf ("Digite -1 para sair.\n");

    scanf ("%d", &num);

    /* Usuario escolhe os numeros entre o intervalo e a condicional
       verifica se esta zerado (nao primo) ou valor verdadeiro para
       primo */
    while (num != -1){

        if (crivo[num])
            printf ("Eh primo!\n");
        else
            printf ("Nao eh primo\n");

        scanf ("%d", &num);
    }

    /* Libero a memoria alocada do heap apenas aqui, ja que na condicional
       ele apenas verifica as posições, nao cria outros vetores que alocam
       memoria */
    free (crivo);
    return 0;
}

int* crivoDeEratostenes (int tamanho){
    int i, j,
        *crivo;

    /* Pego o tamanho "completo", incluindo o ultimo valor
       Assim, somo 1 ao tamanho total */
    crivo = (int*) malloc (sizeof (int) * (tamanho+1));

    /* Seto 1 e 2 como nao primo e o restante como primo */
    crivo [0] = FALSE;
    crivo [1] = FALSE;

    for (i = 2; i <= tamanho; i++)
        crivo [i] = TRUE;

    /* Agora, analisa cada número a partir de 2. Se o número ainda
       não foi desmarcado, ele é primo e precisa "eliminar"
       todos os seus múltiplos.*/
    for (i = 2; i <= tamanho; i++)
        if (crivo [i])
            for (j = i + i; j <= tamanho; j += i)
                crivo [j] = FALSE;

    return crivo;
}


