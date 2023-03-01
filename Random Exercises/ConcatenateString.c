#include<stdlib.h>
#include <stdio.h>
#include <string.h>

char* concatenaStrings (char* s1, char* s2);

int main (){
  char *str1 = "Modus ", *str2 = "Poneis", *strmain;
  strmain = concatenaStrings(str1, str2);
  printf("%s\n", strmain);
  free (strmain);
  return 0;
}

char* concatenaStrings (char* s1, char* s2){
    int tam1 = strlen(s1), tam2 = strlen(s2), i;
    char* stringFinal;

    stringFinal = (char*) malloc (sizeof(char)*(tam1+tam2+1));

    for(i = 0; i < tam1; i++) {
      stringFinal[i] = s1[i];
    }

    for(i = tam1; i < tam1+tam2; i++) {
      stringFinal[i] = s2[i-tam1];
    }
    stringFinal[i] = '\0';

    return stringFinal;
}
