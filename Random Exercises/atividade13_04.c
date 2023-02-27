#include <stdio.h>
#define N 1024
int main()
{

  int i, ter[N],soma=0, qtdeTer, somaTer=0;
  scanf("%d\n", &qtdeTer);

  for(i=0; i<qtdeTer;i++)
  {
    scanf("%d", &ter[i]);
    soma+=ter[i];
  }
  soma/=2;
  somaTer = 0;
  for (i=0;i<qtdeTer && somaTer!=soma;i++)
  {
    somaTer += ter[i];

  }
  printf("\n========\n%d",i);
}
