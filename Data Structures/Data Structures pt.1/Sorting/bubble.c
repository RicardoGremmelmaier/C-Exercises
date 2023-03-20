#include "utils.h"
#include <limits.h>

/* */
void bubble_sort (int *A, int n) {
  int i, j = n, k;
  for(i = n-1; i >= 0; i--) {
	for(k = 0; k < j; k++)
		if(A[k] > A[k+1])
			swap(A, k, k+1);
	j--;
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
  int range = 30; /*intervalo de valores sorteados*/
  int *A = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    A[i] = INT_MAX-i; /*valores aleatórios*/
  }  

  start = clock();
  //print (A, n, "Input");
  bubble_sort (A, n);
  //print (A, n, "Sorted");
  end = clock();
  elapsed_time = (end - start)/(double)CLOCKS_PER_SEC;
  printf("Running time: %.2f\n", elapsed_time);
  if (!check(A, n, TRUE)) {
    printf("Error: non-ascending order!\n");
  }
  free (A);
  return 0;
}

