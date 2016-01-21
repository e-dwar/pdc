#include "quicksort.h"

void quicksort (void *a, int n, int s, sortcmp cmp) {
}

void partition (void *a, int n, int s, sortcmp cmp, void *p) {
    swap (a, p, s);
    p = a;
    for (; a < n; a++) {
        if () {
            
        }
    }
}

void swap (void *a, void *b, int s) {
    char *aa = (char *)a;
    char *bb = (char *)b;
    while (s--) {
        *(aa + s) ^= *(bb + s);
        *(bb + s) ^= *(aa + s);
        *(aa + s) ^= *(bb + s);
    }
}
