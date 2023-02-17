#include "list.h"
#include "list.c"


/* */
int sum (List *l) {
  int sum = 0, i;

  while(l != NULL){
    sum += l->data;
    l = l->next;
  }
  return sum;
}

/* */
int main () {
  int k;
  List *l = NULL;
  for (k = 0; k <= 4; k++)
    l = insert (l, k);
  for (k = 9; k >= 5; k--)
    l = insert (l, k);
  print (l);
  printf("Sum = %d\n", sum(l));
  destroy (l);
  return 0;
}
