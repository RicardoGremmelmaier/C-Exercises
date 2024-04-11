#include "list.h"
#include "list.c"

/* */
int maiorDeDois (int a, int b){
    return (a > b ? a : b);
}

/* */
int in (List *l, int k) {
    if(l != NULL){
        if (l->data == k)
            return 1;
        else
            return in(l->next, k);
    }

    return 0;

}

/* */
int sum (List *l) {
    if (l==NULL)
        return 0;
    return l->data + sum(l->next);
}

/* */
int position (List *l, int k) {
    int pos = 0;
    if(l != NULL) {

        if(l->data == k)
            return pos;

         else{
            int p = position(l->next, k);
            if (p != -1)
                return p +1;
         }
    }
    return -1;
}

/* */
int size (List *l){
   if (l==NULL)
        return 0;
   return 1 + size(l->next);
}

/* */
int max (List *l){
    if (l->next == NULL)
        return l->data;
    else
        return maiorDeDois(l->data, max(l->next));
}

/* */
List* copy_rec(List* A)
{
	List* B = NULL;
	if (A == NULL)
		return B;
	else
	{
		B = insert_back(B, A->data);
		B->next = copy_rec(A->next);
	}
	return B;
}

/* */
List* intersection_rec(List* A, List* B)
{
    List* intersec = NULL;
    if (A == NULL || B==NULL)
        return NULL;
    else
    {
        if (in(A,B->data))
            intersec = insert_back(intersec, B->data);
        intersection_rec(A, B->next);

    }
    return intersec;
}

/* */
List* insert_sort(List* l, int k)
{
	List* t = (List*)malloc(sizeof(List));
	t->data = k;

	if (l == NULL){
		t->next = NULL;
        return t;
	}

	else
	{
		if (k <= l->data){
			t->next = l;
            return t;
		}
		else
			l->next = insert_sort(l->next,k);
		return l;
    }
}

/* */
int main () {
    List *l = NULL;
    List *t = NULL;
    int k;

    for (k = 5; k <= 9; k++) {
        l = insert_back (l, k);
    }
        l = insert_back (l, 12);




    printf("Lista = ");
    print (l);
    printf("\n");
    printf("Sum = %d\n", sum(l));
    printf("Size = %d\n", size(l));
    printf("Maximo valor: %d\n", max(l));
    printf("Position do maximo = %d\n", position(l, max(l)));

    return 0;
}
