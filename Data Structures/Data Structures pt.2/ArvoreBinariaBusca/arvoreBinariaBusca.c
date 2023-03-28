#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct arvore {
   int info;
   struct arvore *esq;
   struct arvore *dir;
} Arvore;

Arvore* cria_arv_vazia (void);
void arv_libera (Arvore* a);
Arvore* inserir (Arvore *a, int v);
Arvore* remover (Arvore *a, int v);
int buscar (Arvore *a, int v);
void pre_order (Arvore* a);

Arvore* cria_arvore_vazia (void) {
   return NULL;
}

void arvore_libera (Arvore* a) {
   if (a != NULL) {
      arvore_libera (a->esq);
      arvore_libera (a->dir);
      free(a);
   }
}

//========= Q1 - inserir
Arvore* inserir (Arvore *a, int v) {
   if (a == NULL){
   a = (Arvore*)malloc(sizeof(Arvore));
   a->info = v;
   a->esq = NULL;
   a->dir = NULL;
   return a;
   }
   else 
      if (a->info > v)
	 a->esq = inserir(a->esq, v);
      else if (a->info < v)
         a->dir = inserir(a->dir,v);
   return a;
}

//========= Q1 - remover
Arvore* remover (Arvore *a, int v){
   if (a == NULL)
      return NULL;
   else{ 
      
      if (a->info > v)
         a->esq = remover(a->esq, v);
      else if (a->info < v)
         a->dir = remover(a->dir, v);
      else{
	   
	   if((a->esq == NULL) && (a->dir == NULL)){
	   free(a);
	   a = NULL;
	   }
           else if (a->dir == NULL){
	      Arvore* tmp = a;
	      a = a->esq;
	      free(tmp);
	   }
           else if (a->esq == NULL){
	      Arvore* tmp = a;
	      a = a->dir;
	      free(tmp);
	   }
           else{
	      Arvore* tmp = a->esq;
	      while (tmp->dir != NULL)
	         tmp = tmp->dir;
	      a->info = tmp->info;
	      tmp->info = v;
	      a->esq = remover(a->esq, v);
	      
	   }   
       }
   }
   return a;   
}


//========= Q1 - busca
int buscar (Arvore *a, int v) {
   if (a == NULL)
       return 0;
   else 
       if (a->info > v)
	       return buscar(a->esq, v);
       else if (a->info < v)
	       return buscar(a->dir, v);
       else 
	       return 1;
}

//========= Q2 - min =====

int min (Arvore *a){
   if (a == NULL)
       return -1;	   
   Arvore *tmp = a;
   while (tmp->esq != NULL)
      tmp = tmp->esq;
   return tmp->info;   
}
//========= Q2 - max =====

int max (Arvore *a){
   if (a == NULL)
      return -1;
   Arvore *tmp = a;
   while (tmp->dir != NULL)
      tmp = tmp->dir;
   return tmp->info;
}
//========= Q3 - imprime_decrescente =====

void imprimeDecresc (Arvore *a){
    if (a != NULL){
      imprimeDecresc (a->dir);
      printf("%d ", a->info);
      imprimeDecresc (a->esq);
    }
}

//========= Q4 - maior ramo =====

int maiorRamo (Arvore* a){
   if (a == NULL)
      return 0;
   else{
      if (maiorRamo(a->esq) > maiorRamo(a->dir))
         return a->info + maiorRamo(a->esq);
      return a->info + maiorRamo(a->dir);
   }
}

void pre_order (Arvore* a){
   if (a != NULL){
      printf("%d ", a->info);
      pre_order (a->esq);
      pre_order (a->dir);
   } 
}

int main () {

   int i, rand1;
   float clock1;
   clock1 = clock();

   Arvore *a = cria_arvore_vazia ();

   for (i = 0; i < 100000; i++){
      //rand1 = rand()%100000;
      //a = inserir(a, rand1);
      a = inserir (a, i);
   }

   //printf("O elemento %d esta(1) ou nao esta(0): %d\n", 10, buscar(a, 10));
   //a = remover(a, 10);
   //printf("O elemento %d esta(1) ou nao esta(0): %d\n", 10, buscar(a, 10));

   //printf("O menor valor eh: %d\n",min(a));
   //printf("O maior valor eh: %d\n",max(a));

   //printf("O maior ramo eh: %d\n", maiorRamo(a));

   //printf("Ordem decrescente: \n");
   //imprimeDecresc (a);

   //printf("\n");
   //pre_order (a);
   //printf("\n");


   // ====== Q5 ====
   printf("%d \n", buscar(a, 100000));
   printf ("Clock: %f\n", clock1);
   return 0;
}

