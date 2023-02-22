#include <stdio.h>

int main(){
    int i, j, k;

    for (i = 1; i <= 6; i++){
        for (j = 1; j <= 6; j++){
            for (k = 1; k <= 6; k++){
                printf ("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
