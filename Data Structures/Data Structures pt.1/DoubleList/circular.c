#include "list.h"
#include "list.c"

List* create_circular (List *head) {
    if(head == NULL)
        return head;

    List *t = head;

    while (t->next != NULL)
        t = t->next;

    t->next = head;
    head->prev = t;

    return head;
}

int is_circular (List *l) {
    if (l == NULL)
        return 0;

    List *t = l;
    int count = 0;


    while ((t != NULL) && count <= 1){
        if (t == l)
            count++;

        t = t->next;
    }

    if (count > 1)
        return 1;

    return 0;

}

int main () {
  int i;
  int n = 4;
  List *l = create ();
  List *g = create();
  for (i = n; i >= 0; i--) {
    l = insert_front (l, i);
    g = insert_front (g, 3);
  }
  print (l);
  print (g);
  printf("Is l circular: %d\n", is_circular(l));
  printf("Is g circular: %d\n", is_circular(g));
  l = create_circular(l);
  g = create_circular(g);
  printf("Is l circular: %d\n", is_circular(l));
  printf("Is g circular: %d\n", is_circular(g));
  return 0;
}
