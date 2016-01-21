#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

typedef int (*sortcmp) (const void *, const void *);

void printArray (int *a, int n) {
    int i;
    printf ("[ ");
    for (i = 0; i < n; i++) {
        printf ("%d ", a[i]);
    }
    printf ("]");
}

void printHeap (int *h, int n, int i) {
    if (i < n) {
        int depth = (int)floor (log2 (i + 1));
        printf ("%*s%d\n", 2 * depth, "", h[i]);
        printHeap (h, n, 2 * i + 1);
        printHeap (h, n, 2 * i + 2);
    }
}

int compareInt (int * i, int * j) {
    if (*i > *j) return 1;
    if (*i < *j) return -1;
    return 0;
}

double log2 (double d) {
    return log (d) / log (2.);
}
