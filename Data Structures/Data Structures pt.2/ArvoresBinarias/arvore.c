#include "arvore.h"


Arvore* cria_arv_vazia (void) {
   return NULL;
}

Arvore* constroi_arv (char c, Arvore *e, Arvore *d) {
   Arvore *no = (Arvore*)malloc(sizeof(Arvore));
   no->info = c;
   no->esq = e;
   no->dir = d;
   return no;
}

int verifica_arv_vazia (Arvore *a) {
   return (a == NULL);
}

void arv_libera (Arvore* a) {
   if (!verifica_arv_vazia(a)) {
      arv_libera (a->esq);
      arv_libera (a->dir);
      free(a);
   }
}

//========= Exercício 2 - pré-ordem ====
void pre_ordem(Arvore* a){
    if (a != NULL){
        printf("%c ",a->info);
        pre_ordem(a->esq);
        pre_ordem(a->dir);
    };
}

//========= Exercício 2 - in-ordem ====
void in_ordem(Arvore* a){
    if (a != NULL){
        in_ordem(a->esq);
        printf("%d ",a->info);
        in_ordem(a->dir);
    };
}

//========= Exercício 2 - pós-ordem ====
void pos_ordem(Arvore* a){
    if (a != NULL){
        pos_ordem(a->esq);
        pos_ordem(a->dir);
        printf("%d ",a->info);
    };
}

//========= Exercício 3 - pertence ====
int pertence_arv (Arvore *a, char c){
    if(!verifica_arv_vazia(a)){
        printf("%c \n",a->info);
        if(a->info == c)
            return 1;
        pertence_arv(a->esq,c);
        pertence_arv(a->dir,c);
        return 0;
        }
    return 0;
}

//========= Exercício 4 - conta nós ====


//========= Exercício 5 - calcula altura ====



//========= Exercício 6 - conta folhas ====



int main (int argc, char *argv[]) {

   Arvore *a = constroi_arv ('a',
       constroi_arv('b',
       cria_arv_vazia(),
       constroi_arv('d', cria_arv_vazia(),cria_arv_vazia())
     ),
     constroi_arv('c',
       constroi_arv('e',cria_arv_vazia(),cria_arv_vazia()),
       constroi_arv('f',cria_arv_vazia(),cria_arv_vazia())
     )
   );	

   pre_ordem(a);
   printf("%d",pertence_arv(a,'b'));
   printf("%d",pertence_arv(a,'j'));

   arv_libera (a);

   return 0;
}
