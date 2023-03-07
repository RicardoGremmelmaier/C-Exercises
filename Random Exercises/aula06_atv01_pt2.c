#include <stdio.h>

int main(void){
    int i=0;
    int n1;
    int denom = 0;
    float media=0;
    while (i <= 9) {
      scanf("%d", &n1);
      if (n1 < 20){
        media += n1;
        denom ++;
      }
      i++;
    }
    media = (float) media / denom;
    printf ("%.2f", media);
}
