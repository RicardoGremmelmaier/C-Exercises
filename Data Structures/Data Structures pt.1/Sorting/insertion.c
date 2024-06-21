#include "utils.h"


/* */
void swap (int *A, int i, int j) {
  int t = A[i];
  A[i] = A[j];
  A[j] = t;
}

/* */
void swap_string (char **A, int i, int j) {
  char *t = A[i];
  A[i] = A[j];
  A[j] = t;
}

/* */
void print (int *A, int n, char *message) {
  printf("%s\n", message);
  int i;
  printf("A: {");
  for (i = 0; i < n; i++) {
    if (i == n-1)
      printf("%d", A[i]);
    else    
      printf("%d,", A[i]);
  }
  printf("}\n");
}

/* */
int check (int *A, int n, int ascending) {
  int i;
  for (i = 1; i < n; i++) {
    if (ascending) {
      if (A[i-1] > A[i])
        return FALSE;	      
    }
    else {
      if (A[i-1] < A[i])
        return FALSE;	      
    }    
  }
  return TRUE;  
}

/* */
void insertion_sort (int *A, int n) {
	int i, j, chave;
	for(i = 1; i < n; i++) {
		chave = A[i];
		for(j = i-1; j >= 0; j--) {
			if(chave < A[j]) { 
				A[j+1] = A[j];
			}
			else {
				A[j+1] = chave;
				break;
			}
		}
	}
}

void insertion_sort_recursive (int *A, int n){

    int i, chave;

    if(n <= 1) {return;}
    insertion_sort_recursive(A, n-1); 

    chave = A[n-1]; 
    i = n-2;
    
    while(i >= 0 && A[i] > chave) {
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = chave;
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
  int n = atoi(argv[1]);
  int range = 10; /*intervalo de valores sorteados*/
  int *A = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    A[i] = i; /*valores aleatórios*/
  }  

  start = clock();
  print (A, n, "Input");
  insertion_sort (A, n);
  print (A, n, "Sorted");
  end = clock();
  elapsed_time = (end - start)/(double)CLOCKS_PER_SEC;
  printf("Running time: %.2f\n", elapsed_time);
  if (!check(A, n, TRUE)) {
    printf("Error: non-ascending order!\n");
  }
  free (A);
  return 0;
}

