#include <stdio.h>
#define VALOR 1.43


float casasDecimais (float x){
    return x - (int)x;
}

int main(){
    float valor;
    scanf ("%f", &valor);
    printf ("%f", casasDecimais(valor));
    return 0;
}
