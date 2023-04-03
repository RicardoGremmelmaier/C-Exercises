#include <stdio.h>

int pai (int i) {
   return (i - 1)/2; 
}

void trocar (int V[], int a, int b) {
   int aux = V[a];
   V[a] = V[b];
   V[b] = aux;
}

void imprimir (int V[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", V[i]);
   }
   printf("\n");
}

int left(int i){return i*2+1;}

int right(int i){return i*2+2;}


void max_heapify (int V[], int size, int i) {
   int e = left(i);
   int d = right(i);
   int maior;
   
   //Checando a esquerda
   if (e < size && V[e] > V[i])
	maior = e;
   else
	maior = i;

   //Checando a direita
   if (d < size && V[d] > V[maior])
	maior = d;

   //Checagem de troca
   if (maior != i){
   	trocar(V, i, maior);
	max_heapify(V, size, maior);
   }
	
}

void build_max_heap (int V[], int size) {
   int i; 
   
   //Percorrer o vetor inteiro de baixo pra cima
   for (i = size/2-1; i >= 0; i--)
   	max_heapify(V, size, i);
}

void heap_sort (int V[], int size) {
   build_max_heap(V,size);

   int i;
   for (i = size-1; i > 0; i--){
   	trocar(V, 0, i);
	size = i;
	max_heapify(V, size, 0);
   } 
}

int main () {

   int i;

   int size = 10;

   int V[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
  
   printf("Vetor inicial : ");
   imprimir (V, size);

   heap_sort (V, size);

   printf("Vetor ordenado: ");
   imprimir (V, size);
  
   return 0;
}
