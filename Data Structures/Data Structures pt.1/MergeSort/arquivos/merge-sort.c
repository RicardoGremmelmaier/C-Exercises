#include "utils.h"

/*Função para intercalar dois subvetores em um conjunto ordenado. 
 *{A} é o vetor de entrada, {l} é a esquerda (de left), 
 {m} é o meio (ou middle), {r} é a direita (de right),
 {O} é o vetor auxilar (de output). */
int merge (int A[], int l, int m, int r, int O[], int rlevel) {
	int i=l, j=m+1, k=l;
	
	while (i<=m && j <=r){
		if (A[i] <= A[j])
			O[k++] = A[i++];
		else 
			O[k++] = A[j++];
	}

	while(j<=r){O[k++] = A[j++];}
	while(i<=m){O[k++] = A[i++];}

	for (i = l; i <= r; i++)
		A[i] = O[i];

	for (i = l; i < rlevel; i++)
		printf("   ");
	printf("Intercala: {");

	for (i = l; i <= r; i++)
		printf("%d ", A[i]);
	printf("}\n");
}

/*Função principal do algoritmo Merge-Sort.*/
void merge_sort (int A[], int l, int r, int O[], int rlevel) {
	int i;
	int m = (l+r)/2;

	for (i = 0; i < rlevel; i++)
		printf("   ");
	printf ("Merge-Sort (%d, %d, %d)\n", l, m, r);
	
	if (l < r){
		merge_sort (A, l, m, O, rlevel+1);
		merge_sort (A, m+1, r, O, rlevel+1);
		merge (A, l, m, r, O, rlevel+1);
	}	
}

/* */
int main (int argc, char *argv[]) {
  clock_t start, end;
  double elapsed_time;
  srand(time(NULL));
  if (argc < 2) {
    printf("run: %s [size]\n", argv[0]);
    exit(1);
  }
  int i;
  int n = atoi(argv[1]);;
  int *A = (int *)malloc(n * sizeof(int));
  int *O = (int *)malloc(n * sizeof(int)); /*array auxiliar*/
  for (i = 0; i < n; i++) {
    A[i] = rand() % (n+1); /*valores aleatórios*/
    //A[i] = i;   /*valores em ordem crescente*/
    //A[i] = n-i; /*valores em ordem descrescente*/
    //A[i] = 0;   /*valores iguais*/
  }
  start = clock();
  print (A, n, "Input");
  merge_sort (A, 0, n-1, O, 0);
  print (A, n, "Sorted");
  end = clock();
  elapsed_time = (end - start)/(double)CLOCKS_PER_SEC;
  printf("Running time: %.2f\n", elapsed_time);
  if (!check(A, n, TRUE)) {
    printf("Error: non-ascending order!\n");
  }
  free (A);
  free (O);
  return 0;
}

