#include<stdio.h>
#define N 5
int main()
{
    int num = 5, i, eh_primo = 0, div = 0, qtd_atual  = 2, soma=5;
    while(qtd_atual<N)
    {
        for(i=3; i<num; i+=2)
        {
            if (num%i == 0)
                div += 1;
        }
        if(!div)
        {
            soma+=num;
            qtd_atual++;
        }
        div = 0;
        num+=2;
    }
    printf("%d", soma);
    return 0;
}
