#include "utils.h"

/* */
int partition (int *A, int left, int right){
	int pivot = A[right];
	int i = left - 1;
	int j;

	for (j = left; j < right; j++){
		if (A[j] <= pivot){
			i++;
			swap(A, i, j);
		}
	}
	swap(A, i+1, right);
	return i+1;
}

/* */
void quick_find (int *A, int left, int right, int k) {
	if (left <= right) {
		int pivot = partition(A, left, right);
		if (pivot == k){
			printf("Item %d encontrado em %d\n", A[pivot],pivot); 
		} else if (pivot > k){
			quick_find(A, left, pivot-1, k);
		} else {
			quick_find(A, pivot+1, right, k);
		}
	}
}

/* */
int main () {
  int n = 8;
  int A[] = {7, 1, 3, 10, 17, 2, 21, 9};
  print (A, n, "Input");
  quick_find (A, 0, n-1, 4);
  print (A, n, "Partial sorted");
  return 0;
}
