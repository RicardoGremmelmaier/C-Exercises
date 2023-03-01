#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 100


void stling(char s[], char buffer[], int len);
int ehLetra(char c);

int main() {
  char orig[N+1] = "Carro passou na rua";
  char copy[N+1];
  int i;

  stling(orig, copy, N);

  for(i = 0; copy[i] != orig[N-1]; i++)
    printf("%c", copy[i]);

  printf("\n");
  return 0;
}

void stling(char s[], char buffer[], int len) {
  int b_index = 0, i;

  for(i = 0; i < len; i++) {
    if(s[i] == 'R' && ehLetra(s[i+1])) {  //Se a letra atual for 'R' e a proxima for uma letra
      if(s[i-1] == 'R')
        continue;
      else {
        buffer[b_index] = 'L';  //define a posicao como 'L'
      }
    }

    else if(s[i] == 'r' && ehLetra(s[i+1])) {  //Se a letra atual for 'r' e a proxima for uma letra
      if(s[i-1] == 'r')
        continue;
      else {
        buffer[b_index] = 'l';  //define a posicao como 'l'
      }
    }

    else {
      buffer[b_index] = s[i];
    }

    b_index++;
  }
}

int ehLetra(char c) {
  if((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
    return 1;

  return 0;
}



