#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int pai (int i) {
   return (i - 1)/2;
}

int esquerda (int i) {
   return (i * 2) + 1;
}

int direita (int i) {
   return (i * 2) + 2;
}

void trocar (int *V, int a, int b) {
   int aux = V[a];
   V[a] = V[b];
   V[b] = aux;
}

void imprimir (int *V, int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", V[i]);
   }
   printf("\n");
}

int left(int i){return i*2+1;}

int right(int i){return i*2+2;}

void min_heapify (int *V, int size, int i) {
 
   int e = left(i);
   int d = right(i);
   int menor;

   //Checando a esquerda
   if (e < size && V[e] < V[i])
        menor = e;
   else
        menor = i;

   //Checando a direita
   if (d < size && V[d] < V[menor])
        menor = d;

   //Checagem de troca
   if (menor != i){
        trocar(V, i, menor);
        min_heapify(V, size, menor);
   }
}

void build_min_heap (int *V, int size) {
    int i;

   //Percorrer o vetor inteiro de baixo pra cima
   for (i = size/2-1; i >= 0; i--)
        min_heapify(V, size, i);
}

int heap_extract_min (int *V, int *size) {
   if ((*size) < 1){
      printf("Heap underflow");
      return -1;
   }
   int min = V[0];
   
   trocar(V,0,(*size)-1);
   *size = (*size)-1;
   min_heapify(V,*size,0);
   
   return min;
}

void heap_decrease_key (int *V, int i, int chave, int size) {
      if(chave > V[i]){
      printf("Chave tem que ser menor do que o valor inserido");
      return;
   }
   V[i] = chave;
   while(i > 0 && V[pai(i)] > V[i]){
   	trocar(V,pai(i),i);
	i = pai(i);
   }
}

void min_heap_insert (int *V, int chave, int *size) {
   (*size)++;
   V[(*size)-1] = INT_MAX;
   heap_decrease_key(V,(*size)-1,chave,(*size));
}

int main () {

   int size = 10;

   int v[10] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

   
   imprimir (v, size);

   build_min_heap (v, size);
   
   imprimir (v, size);
   
   heap_extract_min (v, &size);
   
   imprimir (v, size);
   
   //Modificando a última chave {16} para o valor {1}!
   heap_decrease_key (v, size-1, 1, size);
   
   imprimir (v, size);
   
   //Inserindo uma nova chave com valor {0}!
   min_heap_insert (v, 0, &size);
   
   imprimir (v, size);
   
   
   return 0;
}
