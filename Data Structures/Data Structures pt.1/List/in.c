#include "list.h"
#include "list.c"

/* */
int in (List *l, int k) {
  int in = 0;

  while (in == 0 && l != NULL){
    if (l->data == k)
        in = 1;
    l = l->next;
  }
  return in;
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
  printf("(1) = verdadeiro, (0) = falso\n");
  printf("Pertence %d = (%d)\n", 9, in(l, 9));
  printf("Pertence %d = (%d)\n", -1, in(l, -1));
  destroy (l);
  return 0;
}
