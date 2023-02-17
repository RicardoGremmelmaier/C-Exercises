#include "list.h"
#include "list.c"

/* */
List* merge (List *A, List *B){
    List *Anxt = A->next, *Bnxt = B->next, *C = NULL;

    if (A->data <= B->data)
        C = A;
    else
        C = B;


    //Enquanto nao for final da fila dos dois
    while (Anxt != NULL || Bnxt != NULL){

        //Final da fila do A
        if (Anxt == NULL){

            //E o ultimo valor de A eh menor que o de B
            if(A->data <= B->data){
                A->next = B;
            } else{
                if(A->data <= Bnxt->data){
                    A->next = Bnxt;
                    B->next = A;
                } else {
                    //Rodo o bnxt ate achar onde encaixar o A
                    return 0;
                }
            }

            return C;
        }

        //Final da fila do B
        if (Bnxt == NULL){

            //E o ultimo valor de B eh menor que o de A
            if(B->data <= A->data){
                B->next = A;
            } else{

                if(B->data <= Anxt->data){
                    B->next = Anxt;
                    A->next = B;
                } else {
                    //Rodo o bnxt ate achar onde encaixar o B
                    return 0;
                }
            }

            return C;
        }

        //Se a data do A for menor que a data do B
        if (A->data <= B->data){

            //E o proximo do A for maior que o B
            if ((A->next)->data > B->data){
                A->next = B;
                A = Anxt;
                Anxt = Anxt->next;

            } else {
                A = Anxt;
                Anxt = Anxt->next;
            }

        //Se a data do B for menor que a data do A
        } else {

            //E o proximo do B for maior que o A
            if((B->next)->data > A->data){

                B->next = A;
                B = Bnxt;
                Bnxt = Bnxt->next;

            } else {
                B = Bnxt;
                Bnxt = Bnxt->next;
            }
        }
    }

    return C;
}

/* */
int main () {
  int k;
  List *A = NULL, *B = NULL;
  for (k = 10; k >= 0; k -= 2)
    A = insert (A, k);
  for (k = 19; k >= 0; k -= 2)
    B = insert (B, k);
  print (A);
  print (B);
  List *C = merge (A, B);
  print (C);
  destroy (C);
  return 0;
}
