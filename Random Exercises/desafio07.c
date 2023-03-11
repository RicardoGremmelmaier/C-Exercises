/*
Ricardo Marthus Gremmelmaier
*/

#define N 11
#define POS_PRIM_DIG 9
#define POS_SEG_DIG 10

int ehValido(int vetor[], int tam);

int main(){

    int cpf[N] = {1,2,2,0,0,5,3,8,9,9,5};

    /* Se retornar 1, o CPF eh valido*/
    if(ehValido(cpf, N))
        printf("Eh valido");
    else
        printf("Nah eh valido");

    return 0;
}

int ehValido(int vetor[], int tam){
    int i, somat1 = 0, somat2 = 0;
    int digito1, digito2;

    /* Verificacao do 1° Digito verificador
    Faco a somatoria e depois comparo o valor
    do calculo com o valor do digito na pos. */

    for (i = 0; i < POS_PRIM_DIG; i++){
        somat1 += (i + 1) * vetor[i];
    }

    digito1 = ((somat1 % 11) % 10);

    if (digito1 != vetor [POS_PRIM_DIG])
        return 0;

    /* Verificacao do 2° Digito verificador.
    Faco analogamente a primeira, mas respeitando
    a ordem de somatoria que inicia no segundo valor
    de i e nao no primeiro */

    for (i = 1; i < POS_SEG_DIG; i++){
        somat2 += i * vetor[i];
    }

    digito2 = ((somat2 % 11) % 10);

    if (digito2 != vetor [POS_SEG_DIG])
        return 0;

    return 1;
}
