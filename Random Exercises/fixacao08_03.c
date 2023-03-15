#include <stdio.h>

int main(){
    int numTicket, qntParticipantes, i, vencedor;
    i = 1;
    vencedor = 0;

    printf ("Quantos participantes tem na festa? ");
    scanf ("%d", &qntParticipantes);
    printf ("Qual o numero do seu ticket? ");
    scanf ("%d", &numTicket);

    while (i < qntParticipantes){
        if (i == numTicket){
            vencedor = numTicket;
        }
        printf ("Qual o numero do seu ticket? ");
        scanf ("%d", &numTicket);
        i++;
    }
    printf ("O vencedor foi %d", vencedor);
    return 0;
}
