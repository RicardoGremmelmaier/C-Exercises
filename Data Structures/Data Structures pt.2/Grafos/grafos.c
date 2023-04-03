#include <stdio.h>
#include <stdlib.h>

/*Estrutura para um nó em uma lista encadeada: */
typedef struct noA {
   int id;  /*Identificador armazenado no nó. *//*Peso da aresta */
   struct noA *next; /* Próximo nó na lista encadeada. */
} NoA;

/*Estrutura de Grafo com lista de adjacências: */
typedef struct grafoA {
   int E; /* Quantidade de arestas. */
   int V; /* Quantidade de vértices. */
   NoA **Adj; /* Lista de adjacências. */
} GrafoA;

/*Estrutura de Grafo com matriz de adjacências: */
typedef struct grafoM {
   int E; /* Quantidade de arestas. */
   int V; /* Quantidade de vértices. */
   int **Mat; /* Matrix de adjacências. */
} GrafoM;


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


/*Função para criar um grafo com matriz de adjacências.*/
GrafoM* criar_grafo_mat (int tamanho) {
   int v;
   GrafoM *G = (GrafoM *)malloc(sizeof(GrafoM));
   G->E = 0;
   G->V = tamanho;
   G->Mat = (int **)malloc(tamanho * sizeof(int *));
   for (v = 0; v < G->V; v++) {
      G->Mat[v] = (int *)malloc(tamanho * sizeof(int));
   }
   return G;
}


/*Função de criação de nó no final da fila*/
NoA* insert (NoA *A, int elem, int peso) {
   if(A == NULL){
      NoA *node = (NoA *)malloc(sizeof(NoA));
      node->id = elem;
      node->weight = peso;
      node->next = A;
      return node;
   }
   NoA *tmp = A;
   while(tmp->next != NULL)
      tmp = tmp->next;
   
   NoA *node = (NoA *)malloc(sizeof(NoA));
   node->id = elem;
   node->weight = peso;
   node->next = NULL;
   tmp->next = node;
   
   return A;
}


/*Função para preencher um grafo com lista de adjacências não direcionado.*/
void preenche_grafo_adj_nDirecionado (int qntArest, int A[], GrafoA *L){
   int i;
   L->E = qntArest;

   //Se tenho X arestas, tenho 2X ligações e assim percorro ate 2 posições a menos que isso (ultimo par)
   for (i = 0; i < (L->E)*2-1; i+=2){
      L->Adj[A[i]] = insert(L->Adj[A[i]],A[i+1],1);
      L->Adj[A[i+1]] = insert(L->Adj[A[i+1]],A[i],1);
   }
}


/*Função para preencher um grafo com lista de adjacências direcionado.*/
void preenche_grafo_adj_direcionado (int qntArest, int A[], GrafoA *L){
   int i;
   L->E = qntArest;

   //Se tenho X arestas, tenho 2X ligações e assim percorro ate 2 posições a menos que isso (ultimo par)
   for (i = 0; i < (L->E)*2-1; i+=2)
      L->Adj[A[i]] = insert(L->Adj[A[i]],A[i+1],1);
   
}


/*Função para preencher um grafo com lista de adjacências direcionado e com pesos.*/
void preenche_grafo_adj_pesos (int qntArest, int A[], int P[], GrafoA *L){
   int i,j;
   L->E = qntArest;

   //Se tenho X arestas, tenho 2X ligações e assim percorro ate 2 posições a menos que isso (ultimo par)
   for (i = 0,j = 0; i < (L->E)*2-1; i+=2,j++)
      L->Adj[A[i]] = insert(L->Adj[A[i]],A[i+1],P[j]);

}


/*Função que conta quantidade de arestas que incidem num certo vértice no grafo de lista de adjacência.*/
void conta_arestas_incidentes_adj (int vertice, GrafoA *L){
   int i, cont = 0;
   NoA *tmp;
   for(i = 0; i < L->V; i++){
      tmp = L->Adj[i];   
      while (tmp != NULL){
         if (tmp->id == vertice)
	    cont++;
	 tmp = tmp->next;
      }
   }
   printf("Numero de arestas incidentes ao vertice %d: %d.\n", vertice, cont);
}


/*Função que conta quantidade de arestas que saem de um certo vértice no grafo de lista de adjacência*/
void conta_arestas_saem_adj(int vertice, GrafoA *L){
   int i, cont = 0;
   NoA *tmp;
   tmp = L->Adj[vertice];
   
   while (tmp != NULL){
      cont++;
      tmp = tmp->next;
   }
   printf("O numero de arestas que saem do vertice %d: %d.\n", vertice, cont);
}


/*Função que lista os vertices adjacentes de um grafo de lista de adjacência.*/
void conta_adjacentes_adj(int vertice, GrafoA *L){
   NoA *tmp;
   printf("Vertices adjacentes ao vertice %d: ",vertice);
   for (tmp = L->Adj[vertice]; tmp != NULL; tmp = tmp->next)
      printf ("%d ", tmp->id);
   printf(".\n");
}


/*Função para preencher um grafo com matriz de adjacências não direcionada.*/
void preenche_grafo_mat_nDirecionado (int qntArest, int A[], GrafoM *M){
   int i;
   M->E = qntArest;
   
   //Se tenho X arestas, tenho 2X ligações e assim percorro ate 2 posições a menos que isso (ultimo par)
   for (i = 0; i < (M->E)*2-1; i+=2){
      M->Mat[A[i]][A[i+1]] = 1;
      M->Mat[A[i+1]][A[i]] = 1;
   }
   
}


/*Função para preencher um grafo com matriz de adjacências direcionada.*/
void preenche_grafo_mat_direcionado (int qntArest, int A[], GrafoM *M){
   int i;
   M->E = qntArest;

   //Se tenho X arestas, tenho 2X ligações e assim percorro ate 2 posições a menos que isso (ultimo par)
   for (i = 0; i < (M->E)*2-1; i+=2)
      M->Mat[A[i]][A[i+1]] = 1;

}


/*Função para preencher um grafo com matriz de adjacências direcionada e com pesos.*/
void preenche_grafo_mat_pesos (int qntArest, int A[], int P[], GrafoM *M){
   int i,j;
   M->E = qntArest;

   //Se tenho X arestas, tenho 2X ligações e assim percorro ate 2 posições a menos que isso (ultimo par)
   for (i = 0,j = 0; i < (M->E)*2-1; i+=2,j++)
      M->Mat[A[i]][A[i+1]] = P[j];

}


/*Função que conta quantidade de arestas que incidem num certo vértice no grafo de matriz de adjacência.*/
void conta_arestas_incidentes_mat (int vertice, GrafoM *M){
   int i, cont = 0;
   
   for(i = 0; i < M->V; i++){
      if(M->Mat[i][vertice] != 0)
         cont++;
   }
   printf("Numero de arestas incidentes ao vertice %d: %d.\n", vertice, cont);
}


/*Função que conta quantidade de arestas que saem de um certo vértice no grafo de matriz de adjacência*/
void conta_arestas_saem_mat(int vertice, GrafoM *M){
   int i, cont = 0;

   for(i = 0; i < M->V; i++){
      if(M->Mat[vertice][i] != 0)
         cont++;
   }
   printf("O numero de arestas que saem do vertice %d: %d.\n", vertice, cont);
}


/*Função que lista os vertices adjacentes de um grafo de matriz de adjacência.*/
void conta_adjacentes_mat(int vertice, GrafoM *M){
   int i;

   printf("Vertices adjacentes ao vertice %d: ", vertice);

   for(i = 0; i < M->V; i++){
      if(M->Mat[vertice][i] != 0)
         printf("%d ", i);
   }
   printf(".\n");
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


/*Função para destruir um grafo construído com matriz de adjacências.*/
void liberar_grafo_mat (GrafoM *G) {
   int v;
   for (v = 0; v < G->V; v++) {
      if (G->Mat[v] != NULL) {
         free(G->Mat[v]);
      }
   }
   free(G->Mat);
   free(G);
}


/*Função que imprime a matriz de um grafo.*/
void printGrafoMatriz(GrafoM *M){
   int i, j;
   
   printf("Grafo (matriz adjacência):\n   ");
   
   for (i = 0; i < M->V; i++)
      printf("%d ", i);
   printf("\n\n");
   
   for (i = 0; i < M->V; i++){
	printf("%d  ", i);
      for(j = 0;j < M->V; j++){
         printf("%d ", M->Mat[i][j]);
      }
      printf("\n");
   }
}


/*Função que imprime uma lista simplesmente encadeada.*/
void printList(NoA *A){
  NoA *t;
  printf ("-> ");
  for (t = A; t != NULL; t = t->next)
    printf ("%d (w:%d) ", t->id, t->weight);
  printf("\n");
}


/*Função que imprime um lista de adjacência de um grafo.*/
void printGrafoLista(GrafoA *L){
   int i;

   printf("Grafo (lista adjacência):\n\n\n");

   for(i = 0; i < L->V; i++){
      printf("%d ",i);
      printList(L->Adj[i]);
   }
}


/* */
int main () {

   int V = 6; /*Número de vértices lista*/
   
   GrafoA* Ga = criar_grafo_adj (V);
   GrafoM* Gm = criar_grafo_mat (V);

   /*Questão 1: Não direcionado

   int A1[] = {0,1, 0,2, 0,5, 1,2, 1,3, 2,3, 2,4, 3,4, 4,5};
   int A = 9; //Número de arestas lista

   preenche_grafo_adj_nDirecionado (A,A1,Ga);
   printGrafoLista(Ga);
   printf("\n");
   
   preenche_grafo_mat_nDirecionado (A,A1,Gm);
   printGrafoMatriz(Gm);*/

   /*Questão 2: Direcionado

   int A2[] = {0,1, 0,5, 1,2, 1,3, 2,0, 2,4, 3,2, 4,3, 5,4};
   int A = 9; //Número de arestas lista

   preenche_grafo_adj_direcionado (A,A2,Ga);
   printGrafoLista(Ga);
   printf("\n");  

   preenche_grafo_mat_direcionado (A,A2,Gm);
   printGrafoMatriz(Gm);*/

   //Questão 3: Direcionado com pesos e funções auxiliares
   

   int A3[] = {0,1, 0,3, 1,3, 2,0, 2,3, 3,3, 3,4, 4,2, 4,5, 5,0};
   int A = 10;
   int W3[] = {1,5,8,5,4,6,3,7,9,2};

   preenche_grafo_adj_pesos (A,A3,W3,Ga);
   printGrafoLista(Ga);
   printf("\n");
   conta_arestas_incidentes_adj(3,Ga);
   conta_arestas_saem_adj(4,Ga);
   conta_adjacentes_adj(2,Ga);
   printf("\n");

   preenche_grafo_mat_pesos (A,A3,W3,Gm);
   printGrafoMatriz(Gm);
   printf("\n");
   conta_arestas_incidentes_mat(3,Gm);
   conta_arestas_saem_mat(4,Gm);
   conta_adjacentes_mat(2,Gm);


   liberar_grafo_adj (Ga);
   liberar_grafo_mat (Gm);

   return 0;
}
