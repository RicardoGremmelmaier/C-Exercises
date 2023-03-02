#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CHARMAX 128 //numero max de chars da string
#define N_STRINGS 8

int main(void)
{
  char matriz[N_STRINGS][CHARMAX];
  int i, j;
  for(i=0 ; i <N_STRINGS ; i++)
  {
    fgets(matriz[i], CHARMAX, stdin);
  }

  for (i = N_STRINGS-1; i>=0; i--)
    printf("%s", matriz[i]);

  return 0;
}
