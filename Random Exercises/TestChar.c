#include <stdio.h>

int testChar(char carac){
  if(carac>='a' && carac<='z'){
    if (carac == 'a' || carac == 'e'||carac == 'i'||carac == 'o'|| carac=='u')
      return 2;

    else
      return 4;
  }
  else if(carac>='A' && carac<='Z'){
    if (carac=='A'||carac=='E'||carac=='I'||carac=='O'||carac=='U')
      return 1;
    else
      return 3;
  }
  else if(carac>='0' && carac<='9')
    return 5;
  else
    return 0;
}

int main (){
    char caracter;
    scanf ("%c", &caracter);
    printf ("%d", testChar(caracter));
}
