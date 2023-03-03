#include <stdio.h>
#include <stdlib.h>

#define LARG 6
#define ALT 6

typedef struct{
    int largura;
    int altura;
    unsigned char** dados;
} GSImage;

GSImage* reduzPelaMetade (GSImage* img);
GSImage* criaGSImage (int largura, int altura);
void destroiGSImage (GSImage* img);
void criaPreencheMedia (int largura, int altura);

int main(){
    criaPreencheMedia(LARG, ALT);
    return 0;
}

void destroiGSImage (GSImage* img){
    int i;

    for (i = 0; i < img->altura; i++)
        free (img->dados [i]);
    free (img->dados);
    free (img);
}

GSImage* criaGSImage (int largura, int altura){
    int i;
    GSImage *img;

    img = (GSImage*) malloc (sizeof(GSImage));

    img->largura = largura;
    img->altura = altura;

    img->dados = (unsigned char **) malloc (sizeof(unsigned char*) * altura);

    for (i = 0; i < altura; i++)
        img->dados[i] = (unsigned char *) malloc (sizeof(unsigned char)* largura);


    return img;
}

GSImage* reduzPelaMetade (GSImage* img){
    GSImage *reduzida;

    if(img->largura & 1 || img->altura & 1)
        return NULL;

    reduzida = criaGSImage((img->largura)/2, (img-> altura)/2);
    int i, j;

    for (i = 0; i < (reduzida->altura); i+=2)
        for (j = 0; j < (img->largura); j+=2)
            reduzida->dados[i/2][j/2] = (img->dados[i][j] + img->dados[i][j+1] + img->dados[i+1][j] + img->dados[i+1][j+1])/4;


    return reduzida;
}

void criaPreencheMedia (int largura, int altura){
    float somatImg = 0, somatRed = 0;
    int i, j;
    GSImage *img, *red;

    img = criaGSImage(LARG, ALT);

    for (i = 0; i < img->altura; i++){
        for (j = 0; j < img->largura; j++){
            img->dados[i][j] = i * j;
            somatImg += i * j;
            printf ("valor[i]: %d valor[j]: %d || ", i, j);
            printf ("valor i * j = %d|| ", i * j);
            printf ("somatorio atual: %f\n", somatImg);
        }
        printf ("\n");
    }

    red = reduzPelaMetade(img);

    for (i = 0; i < red->altura; i++){
        for (j = 0; j < red->largura; j++){
            somatRed += red->dados[i][j];
            printf ("valor[i]: %d valor[j]: %d || ", i, j);
            printf ("valor i * j = %d|| ", i * j);
            printf ("somatorio atual: %f\n", somatRed);
        }
        printf ("\n");
    }
    printf ("Media dos valores dos pixels da imagem: %f\n", somatImg/((img->altura)*(img->largura)));
    printf ("Media dos valores dos pixels da reduzida: %f\n", somatRed/((red->altura)*(red->largura)));

    destroiGSImage (red);
    destroiGSImage (img);
}
