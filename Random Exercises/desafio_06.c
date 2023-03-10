#define WINDOWS // Comente esta linha para usar no Linux/Unix!
#define RAPIDA_TARTARUGA 3
#define ESCORREGAO_TARTARUGA 6
#define LENTA_TARTARUGA 1
#define DORMINDO_LEBRE 0
#define SALTO_GRANDE_LEBRE 9
#define ESCORREGAO_GRANDE_LEBRE 12
#define SALTO_PEQUENO_LEBRE 1
#define ESCORREGAO_PEQUENO_LEBRE 2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef WINDOWS
#include <windows.h>
#endif // WINDOWS

void moveTartaruga(int, int *);
void moveLebre(int, int *);
void imprimePosicoesAtuaisSimples(int, int);
void imprimePosicoesAtuais(int ptrTar, int ptrLeb);

int main()
{
    int tartaruga = 0, lebre = 0;

    srand(time(NULL));

    while(tartaruga < 70 && lebre < 70)
    {
        moveTartaruga (rand()%10+1, &tartaruga);
        moveLebre (rand()%10+1, &lebre);

        /*TODO: depois que você executar o programa, comente a chamada
                para a  funcao imprimePosicoesAtuaisSimples() e
                descomente chamada para a funcao imprimePosicoesAtuais()*/
        //imprimePosicoesAtuaisSimples (tartaruga, lebre);
        imprimePosicoesAtuais (tartaruga, lebre);

        #ifdef WINDOWS
        Sleep (100);
        #else
        sleep (1);
        #endif
    }
    if (tartaruga >= lebre)
        printf ("Tartaruga ganhou!!!\n");
    else
        printf ("Lebre Ganhou!!!\n");

    return 0;
}


void moveTartaruga(int valor_sorteado, int *ptrTar){

/*Verifico em ifs aninhados o valor sorteado
 e adiciono ou subtraio dependendo do resultado*/
/*Caso o valor da pos seja maior que 70,
mudo ela pra 70 e caso de um valor negativo
mudo a pos para 1*/

    if (valor_sorteado <= 5){
        *ptrTar += RAPIDA_TARTARUGA;

    } else if (valor_sorteado <= 7){

        if (*ptrTar - ESCORREGAO_TARTARUGA <= 0)
            *ptrTar = 1;
        else
            *ptrTar -= ESCORREGAO_TARTARUGA;

    } else{
        *ptrTar += LENTA_TARTARUGA;
    }

    if (*ptrTar > 70)
        *ptrTar = 70;
}

void moveLebre(int valor_sorteado, int *ptrLeb){

/*Faco analogamente pra lebre.
Verifico em ifs aninhados o valor sorteado
 e adiciono ou subtraio dependendo do resultado*/
/*Caso o valor da pos seja maior que 70,
mudo ela pra 70 e caso de um valor negativo
mudo a pos para 1*/

   if (valor_sorteado > 2){

        if (valor_sorteado <= 4){
            *ptrLeb += SALTO_GRANDE_LEBRE;

        } else if (valor_sorteado <= 5){

            if (*ptrLeb - ESCORREGAO_GRANDE_LEBRE <= 0)
                *ptrLeb = 1;
            else
                *ptrLeb -= ESCORREGAO_GRANDE_LEBRE;

        } else if (valor_sorteado <= 8){
            *ptrLeb += SALTO_PEQUENO_LEBRE;

        } else {

            if (*ptrLeb - ESCORREGAO_PEQUENO_LEBRE <= 0)
                *ptrLeb = 1;
            else
                *ptrLeb -= ESCORREGAO_PEQUENO_LEBRE;
        }

   } else {
       *ptrLeb += DORMINDO_LEBRE;  //Fiz isso pra "pular a rodada", fiquei confuso caso seria necessario, mas creio que nao
   }

   if (*ptrLeb > 70)
       *ptrLeb = 70;
}

void imprimePosicoesAtuaisSimples(int ptrTar, int ptrLeb)
{
   int i;

   for (i = 1; i < 71; i++)
      if (i == ptrTar && i == ptrLeb)
         printf("AI!!!");
      else if (i == ptrLeb)
         printf("L");
      else if (i == ptrTar)
         printf("T");
      else
         printf(" ");

   printf("\n");
}

void imprimePosicoesAtuais(int ptrTar, int ptrLeb){
    int i;
    #ifdef WINDOWS
    system("cls");
    #else
    system("clear");
    #endif

    printf("\t\t\tPos. Tartaruga: %2d | Pos. Lebre: %2d\n",ptrTar, ptrLeb);
    printf("*******************************************************************************\n");
    //printf("\n      _\n  .-./*)\n_/___\\/\n  U U"); //desenho tartaruga (base)
    //printf("\n    \\\\ \n     \\\\_ \n  .---(')\no( )_-\\_"); //desenho coelho (base)
    for(i=0;i<ptrTar;i++)
        printf(" ");
    printf("      _\n");
    for(i=0;i<ptrTar;i++)
        printf(" ");
    printf("  .-./*)\n");
    for(i=0;i<ptrTar;i++)
        printf(" ");
    printf("_/___\\/\n");
    for(i=0;i<ptrTar;i++)
        printf(" ");
    printf("  U U");
    printf("\n*******************************************************************************\n\n");

    for(i=0;i<ptrLeb;i++)
        printf(" ");
    printf("    \\\\ \n");
    for(i=0;i<ptrLeb;i++)
        printf(" ");
    printf("     \\\\_ \n");
    for(i=0;i<ptrLeb;i++)
        printf(" ");
    printf("  .---(')\n");
    for(i=0;i<ptrLeb;i++)
        printf(" ");
    printf("o( )_-\\_");
    printf("\n*******************************************************************************\n");
}

