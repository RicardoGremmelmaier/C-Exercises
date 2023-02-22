#include <stdio.h>
#define FACES_DO_DADO 6

int main(){
    int i, j, k;

    for (i = 1; i <= FACES_DO_DADO; i++){
        for (j = i; j <= FACES_DO_DADO; j++){
            for (k = j; k <= FACES_DO_DADO; k++){
                printf ("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
