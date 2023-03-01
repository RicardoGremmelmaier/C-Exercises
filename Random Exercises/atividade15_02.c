#include<stdio.h>
#define N 100

int ehLetra(char ch) {
  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    return 1;

  return 0;
}

int contaPalavras (char *v) {
    int total = 0, i=0;
    while(v[i] != '\0') {
      if(ehLetra(v[i]) && !ehLetra(v[i+1]))
        total++;

      i++;
    }
    return total;
}


int main(){
    char string[N] = {"oi, tudo bem??? PQP"};
    printf("%d\n", contaPalavras(string));

    return 0;
}
