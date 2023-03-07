#include <stdio.h>

int main(){
    int i=0;
    int n1;
    int denom = 0;
    float media=0;
    for(i=0; i<=9; i++){
      scanf("%d", &n1);
      if(n1 < 20){
        media += n1;
        denom++;
      }
      printf("%.2f\n", media);
    }
    media = (float) media/denom;
    printf ("%.2f", media);

}
