#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GAZANIGA 1024

int main(){

    int v[GAZANIGA], i,
        n;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
      scanf ("%d", &v[i]);
    }

    for(i=n-1; i>=0; i--)
      printf("%d\n", v[i]);

    return 0;
}

