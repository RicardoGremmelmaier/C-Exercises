#include "utils.h"

/* */
int missing_number (int *A, int n) {

	int left = 0, right = n-1, middle = (left+right)/2;

	if (A[left] != left)
		return left;

	if (A[right] == right)
		return right+1;
	
	while (left <= right){
		
		if (A[middle] == middle)
			left = middle +1;

		if ((A[middle] != middle) && (A[middle-1] == middle-1))
			return middle;
		
		middle = (left+right)/2;
	}		

	return NOT_FOUND;
} 

/* */
int main () {
  int i;
  //int n = 4;
  //int A[] = {0,1,2,3};
  //int n = 4;
  //int A[] = {4,5,10,11};
  int n = 7;
  int A[] = {0,1,2,6,9,11,15};
  //int n = 8;
  //int A[] = {1,2,3,4,6,9,11,15};
  //int n = 7;
  //int A[] = {0,1,2,3,4,5,6};
  //int n = 8;
  //int A[] = {0,1,2,3,4,5,6,7,10};
  print (A, n, "Input");
  printf("Missing number: %d\n", missing_number (A, n));
  return 0;
}
