#include <stdio.h>
#include <stdlib.h>

#define BRANCO 0
#define CINZA -1
#define PRETO 1
#define VERMELHO 1
#define AZUL 0

/*Estrutura para um nó em uma lista encadeada: */
typedef struct noA {
   int id;  /*Identificador armazenado no nó. *//*Peso da aresta */
   struct noA *next; /* Próximo nó na lista encadeada. */
} NoA;

/*Estrutura para um nó em uma lista encadeada: */
typedef struct DFS {
   int cor;  /* Cor do vértice visitado */
   int corBipartido; /*Coloração em relação a seu pai*/
   int dx;  /* Tempo de descobrimento do vértice*/
   int fx;  /* Tempo de finalização do vertice*/
   int pai; /* Pai direto do nó*/
   struct DFS *next; /* Próximo nó na lista encadeada. */
} DFS;

/*Estrutura de Grafo com lista de adjacências: */
typedef struct grafoA {
   int E; /* Quantidade de arestas. */
   int V; /* Quantidade de vértices. */
   NoA **Adj; /* Lista de adjacências. */
} GrafoA;


/*Função para criar um grafo com lista de adjacências.*/
GrafoA* criar_grafo_adj (int tamanho) {
   int v;
   GrafoA *G = (GrafoA *)malloc(sizeof(GrafoA));
   G->E = 0;
   G->V = tamanho;
   G->Adj = (NoA **)malloc(tamanho * sizeof(NoA *));
   for (v = 0; v < G->V; v++) {
      G->Adj[v] = NULL;
   }
   return G;
}



/*Função de criação de nó no final da fila*/
NoA* insert (GrafoA *L, NoA *A, int elem) {
   if(A == NULL){
      NoA *node = (NoA *)malloc(sizeof(NoA));
      node->id = elem;
      node->next = A;
      L->E++;
      return node;
   }
   NoA *tmp = A;
   while(tmp->next != NULL){
      if(tmp->id == elem){
         printf("Elemento ja inserido");
	 return A;
      }
      tmp = tmp->next;
   }

   NoA *node = (NoA *)malloc(sizeof(NoA));
   node->id = elem;
   node->next = NULL;
   tmp->next = node;

   return A;
}

/*Função para adicionar uma aresta a um grafo com lista de adjacências direcionado.*/
void add_aresta_adj (GrafoA *L, int vertice, int aresta){
   L->Adj[vertice] = insert(L, L->Adj[vertice], aresta); 
}

/*Função para destruir um grafo construído com lista de adjacências.*/
void liberar_grafo_adj (GrafoA *G) {
   int v;
   for (v = 0; v < G->V; v++) {
      if (G->Adj[v] != NULL) {
         free(G->Adj[v]);
      }
   }
   free(G->Adj);
   free(G);
}

/*Função que imprime uma lista simplesmente encadeada.*/
void printList(NoA *A){
  NoA *t;
  printf ("-> ");
  for (t = A; t != NULL; t = t->next)
    printf ("%d ", t->id);
  printf("\n");
}


/*Função que imprime um lista de adjacência de um grafo.*/
void printGrafoLista(GrafoA *L){
   int u;

   printf("Grafo (lista adjacência):\n\n\n");

   for(u = 0; u < L->V; u++){
      printf("%d ",u);
      printList(L->Adj[u]);
   }
}

/*Função do DFS Visit*/
void DFS_Visit (GrafoA *G, DFS *V, int u, int *time){
   V[u].cor = CINZA;
   (*time)++;
   V[u].dx = *time;
   
   if (V[u].pai != -1)
      V[u].corBipartido = VERMELHO;

   NoA *tmp;
   for (tmp = G->Adj[u]; tmp != NULL; tmp = tmp->next){
      if (V[tmp->id].cor == BRANCO){
         printf("Aresta arvore: (%d - %d)\n", u, tmp->id);
         V[tmp->id].pai = u;
	 
	 if (V[V[tmp->id].pai].corBipartido == VERMELHO)
		 V[tmp->id].corBipartido == AZUL;
	 else
		 V[tmp->id].corBipartido == VERMELHO;
         
	 DFS_Visit(G, V, tmp->id, time);
      }
      else
         printf("Aresta outra: (%d - %d)\n", u, tmp->id);
   }

   V[u].cor = PRETO;
   V[u].fx = ++(*time);
}

/*Função que printa os filhos diretos*/
void printaFilho(int u, DFS* V, int tamanho){
   int i;
   for (i = 0; i < tamanho; i++){
      if (V[i].pai == u)
         printf("%d ", i);
   }
}

/*Função que realiza a busca em profundidade de um grafo com lista de adjacência*/
void busca_em_profundidade (GrafoA *G){
   DFS *V = (DFS *)malloc(G->V * sizeof(DFS));
   int u;
   for (u = 0; u < G->V; u++){
       V[u].cor = BRANCO;
       V[u].pai = -1;
       V[u].corBipartido = -1;
   }
   int tempo = 0;
   for (u = 0; u < G->V; u++){
      if(V[u].cor == BRANCO){
	 printf("\n");
         DFS_Visit (G, V, u, &tempo);
	 printf("Componente: %d ", u);
      }
   printaFilho(u, V, G->V); 
   }
}

/*Função que verifica se um grafo é bipartido*/
void verificaBipartido (GrafoA *G, DFS *V){
   
}


/* */
int main () {

   int V = 12; /*Número de vértices lista*/

   GrafoA* Ga = criar_grafo_adj (V);
   
   add_aresta_adj(Ga,0,1);
   add_aresta_adj(Ga,0,3);
   add_aresta_adj(Ga,1,2);
   add_aresta_adj(Ga,2,5);
   add_aresta_adj(Ga,4,1);
   add_aresta_adj(Ga,5,4);
   add_aresta_adj(Ga,5,6);
   add_aresta_adj(Ga,6,0);
   add_aresta_adj(Ga,6,3);
   add_aresta_adj(Ga,6,4);
   add_aresta_adj(Ga,7,8);
   add_aresta_adj(Ga,9,10);
   add_aresta_adj(Ga,10,11);
   add_aresta_adj(Ga,11,9);
   printGrafoLista(Ga);
   
   printf("\n");
   
   busca_em_profundidade(Ga);
}
