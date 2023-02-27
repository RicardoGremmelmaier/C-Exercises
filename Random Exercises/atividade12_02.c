#include<stdio.h>

void removeExtremos (int *n, int *pri, int *ult){

    int tn, pot = 1;
    tn = *n;

    while(tn >= 10){
        tn = tn/10;
        pot *= 10;
    }

    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main (){
  int primeiro, ultimo, invertido, num, eh_palindromo = 1;

  scanf ("%d", &num);
  while(num > 10 && eh_palindromo){

    removeExtremos (&num, &primeiro, &ultimo);

    if (primeiro != ultimo)
      eh_palindromo = 0;
  }

  if(eh_palindromo)
    printf("eh :3");
  else
    printf("nn :'(");

  return 0;
}
