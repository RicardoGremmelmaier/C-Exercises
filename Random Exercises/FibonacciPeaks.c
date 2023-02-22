#include <stdio.h>

int main() {
  int totalNum, num, anterior, anterior_2, i, totalPicos = 1;
  scanf("%d", &totalNum);
  scanf("%d", &num);
  anterior = num;
  scanf("%d", &num);
  anterior_2 = anterior;
  anterior = num;

  for(i = 2; i < totalNum; i++) {
    if(anterior < num && anterior_2 > anterior) {
      totalPicos++;
    }
    anterior_2 = anterior;
    anterior = num;
    scanf("%d", &num);
  }

  if(totalPicos > 1) {
    printf("N\n");
  } else {
    printf("S\n");
  }

  return 0;
}
