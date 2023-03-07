#include <stdio.h>
int main(void){
    float nota, media, maior, menor;
    int i = 0;
    maior = 0;
    menor =10;
    media = 0;
    for(i=0; i <=5; i++){
      scanf ("%f", &nota);
      media += nota;
      if (nota > maior) {
        maior = nota;
      }
      if (nota < menor) {
        menor = nota;
      }
    }
    media = (media - maior - menor)/4;
    printf ("O maior eh %.2f\n O menor eh%.2f", maior, menor);
    printf ("A media eh %.2f", media);

}
