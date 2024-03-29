#include "list.h"
#include "list.c"


List* merge (List *A, List *B){
  List *C = NULL;
  List *t;

  //Verificando ocorrencia de lista vazia
  if(A == NULL && B != NULL){return B;}
  if(B == NULL && A != NULL){return A;}


  //enquanto uma das duas listas nao forem vazias
  while(A != NULL && B != NULL){
    
    //Verifico qual a maior data
    if(A->data <= B->data){
      //Caso seja a primeira iteracao
      if(C == NULL){
        C = A;
        t = C;
        A = A->next;
      //Caso nao seja a primeira iteracao
      } else{
        t->next = A;
        A = A->next;
        t = t->next;
      }
    }

    else{
      //Primeira iteracao
      if(C == NULL){
        C = B;
        t = C;
        B = B->next;
      //Caso nao seja primeira iteracao
      }else{
        t->next = B;
        B = B->next;
        t = t->next;
      }
    }
  }

  if (A == NULL){t->next = B;} 
  else {t->next = A;}
  

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
