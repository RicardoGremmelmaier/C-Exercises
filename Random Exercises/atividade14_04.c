#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50

int ehPalindromo(char s2[], int len);
void pegaVogais(char s[], char output[], int len);

int main() {
  char risada[N], reduzida[N];
  int i;

  fgets(risada, N, stdin);

  pegaVogais(risada, reduzida, N);

  if (ehPalindromo(reduzida , strlen(reduzida)))
    printf ("Eh palindromo\n");
  else
    printf ("Nao eh palindromo\n");

  return 0;
}


int ehPalindromo(char s2[], int len) {
  int i;

  for(i = 0; i < len; i++) {
    if(s2[i] != s2[len- i - 1])
      return 0;
  }
  return 1;
}

void pegaVogais(char s[], char output[], int len){
  int i, indiceOut = 0;
  for(i = 0; i < len; i++) {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      output[indiceOut] = s[i];
      indiceOut++;
    }
  }
}
