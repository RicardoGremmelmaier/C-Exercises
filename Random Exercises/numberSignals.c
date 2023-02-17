#include <stdio.h>

int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    if (a>0) {
        if (b > 0 && c > 0) {
            printf ("+++");
        } else if (b > 0 && c < 0) {
            printf ("++-");
        } else if (c > 0) {
            printf ("+-+");
        } else {
            printf ("+--");
        }
    } else {
        printf ("---");
    }
    return 0;
}
