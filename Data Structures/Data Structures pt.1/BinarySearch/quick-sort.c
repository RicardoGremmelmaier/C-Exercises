#include "quick-sort.h"

/* */
int partition_string (char **A, int left, int right) {
  char *pivot = A[right];
  int i = left - 1;
  int j;
  for (j = left; j < right; j++) {
    if (strcmp(A[j],pivot) <= 0) {
      i += 1;
      swap_string (A, i, j);
    }
  }
  swap_string (A, i+1, right);
  return i+1;
}

/* */
int partition (int A[], int left, int right) {
  int pivot = A[right];
  int i = left - 1;
  int j;
  for (j = left; j < right; j++) {
    if (A[j] <= pivot) {
      i += 1;
      swap (A, i, j);
    }
  }
  swap (A, i+1, right);
  return i+1;
}

/* */
void quick_sort (int *A, int left, int right) {
  if (left < right) {
    int pivot = partition (A, left, right);
    quick_sort (A, left, pivot-1);
    quick_sort (A, pivot+1, right); 
  }
}

/* */
void quick_sort_string (char **A, int left, int right) {
  if (left < right) {
    int pivot = partition_string (A, left, right);
    quick_sort_string (A, left, pivot-1);
    quick_sort_string (A, pivot+1, right); 
  }
}
