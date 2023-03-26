#include "list.h"

/* */
List* insert_back (List *l, int k) {
  if (l == NULL) {
    l = (Node*)malloc(sizeof(Node));
    l->data = k;
    l->next = NULL;
  }
  else {
    l->next = insert_back (l->next, k);
  }
  return l;
}

/* */
List* removek (List *l, int k) {
  if (l != NULL) {
    if (l->data == k) {
      List *n = l;
      l = l->next;
      free(n);
    }
    else {
      l->next = removek (l->next, k);
    }
    return l;
  }
  else {
    return NULL;
  }
}

/* */
void print (List* l) {
  if (l != NULL) {
    printf("%d ", l->data);
    print (l->next);
  }
}



/* */
void destroy (List *l) {
  if (l != NULL) {
    destroy (l->next);
    free (l);
  }
}

