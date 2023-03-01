#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define BUFLEN 1024

char* empacotaString (char* string){
    char* str;
    int i;

    str = (char*) malloc (sizeof(char)*(strlen(string)+1));

    //tam = strlen(string);
    //for (i=0;i<strlen(string);i++)
    //for (i=0;string[i]!='\0';i++)
    for(i=0; i < strlen(string); i++)
        str[i]= string[i];
    str[i] = '\0';

    return str;
}

int main (){
  char string[BUFLEN]="baiano foi à praia";
  printf("%lu\n", strlen(string));
  string = empacotaString(string);
  printf("%s\n", string);
  printf("%lu\n", strlen(string));

  free (string);
  return 0;
}
