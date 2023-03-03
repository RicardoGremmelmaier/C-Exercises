#include <stdio.h>

int main (){
    float preGas, preAlc, kmLGas, kmLAlc, preKmAlc, preKmGas;

    printf ("Digite o valor do litro da gasolina: ");
    scanf ("%f", &preGas);
    printf ("Digite o valor do litro do alcool: ");
    scanf ("%f", &preAlc);
    printf ("Digite a quantidade de km que o carro percorre em gasolina: ");
    scanf ("%f", &kmLGas);
    printf ("Digite a quantidade de km que o carro percorre em alcool: ");
    scanf ("%f", &kmLAlc);

    preKmAlc = preAlc / kmLAlc;
    preKmGas = preGas / kmLGas;

    if (preKmAlc > preKmGas) {
        printf ("O preco do KM de alcool eh %.2f\n", preKmAlc);
        printf ("O preco do km de gasolina eh %.2f\n", preKmGas);
        printf ("Eh mais economico por gasolina\n");

    } else if (preKmAlc < preKmGas){
        printf ("O preco do KM de alcool eh %.2f\n", preKmAlc);
        printf ("O preco do km de gasolina eh %.2f\n", preKmGas);
        printf ("Eh mais economico por alcool\n");

    } else {
        printf ("O preco do KM de alcool eh %.2f\n", preKmAlc);
        printf ("O preco do KM de gasolina eh %.2f\n", preKmGas);
        printf ("Eh a mesma economia\n");
    }
    return 0;
}
