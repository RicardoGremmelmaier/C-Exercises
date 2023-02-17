#include "utils.h"

/* */
int binary_search (int *A, int n, int key, int explore_left) {
	int left = 0, right = n-1, middle = (left+right)/2;

	if (explore_left){
			
		while(left <= right){
				
			if (A[middle] == key){
				if (middle == 0)
					return middle;

				if (A[middle-1] == key)
					right = middle-1;
				
				else 
					return middle;				
				
			} else if (A[middle] > key)
				right = middle-1;

			else 
				left = middle+1;
				
			middle = (left+right)/2;	
		}

		return NOT_FOUND;
	
	} else {
		
		while (left <= right){
			
			if (A[middle] == key){
				if (middle == n-1)
					return middle;
				
				if (A[middle+1] == key)
					left = middle+1;
				
				else
					return middle;
			}
			
			else if (A[middle] > key)
				right = middle-1;
			
			else
				left = middle+1;

			middle = (left+right)/2;
		}
	
		return NOT_FOUND;
	
	}
}

/* */
int find_occurrences (int *A, int n, int target) {
	int left, right;
	left = binary_search(A, n, target, 1);
	right = binary_search(A, n, target, 0);

	if (left == NOT_FOUND || right == NOT_FOUND)
		return NOT_FOUND;
	return (right - left) + 1;
}

/* */
int main () {
  int i, n = 10;
  int targets[] = {0,2,8,5,6,9};
  int A[] = {2,5,5,5,6,6,8,9,9,9};
  print (A, n, "Input");
  for (i = 0; i < 6; i++) {
    int oc = find_occurrences (A, n, targets[i]);
    if (oc != NOT_FOUND)
      printf("Target %d found %d times.\n", targets[i], oc);
    else
      printf("Target %d not found.\n", targets[i]);
  }  
  return 0;
}
