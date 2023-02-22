#include <stdio.h>

int main() {
  int num, anterior, qntdElementos = 0, flag_1 = 0;
  scanf("%d", &num);

  while(!flag_1) {
    printf("%d, ", num);

    if(num == 1) {
      flag_1 = 1;
    }

    if(num & 1) {  //Se for impar
      num = 3*num + 1;
    } else { //Se for par
      num = num/2;
    }

    qntdElementos++;
  }

  printf ("\n\n\tA quantidade de elementos eh: %d\n", qntdElementos);
  return 0;
}
