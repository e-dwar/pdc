#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

void printArray (int a[], int n) {
    int i = 0;
    while (i < n) printf ("%d ", a[i++]);
    putchar ('\n');
}

int intcmp (int *x, int *y) {
    if (*x > *y) return 1;
    if (*x < *y) return -1;
    return 0; 
}

void test1 (void) {
    int i;
    int ints[] = { 5, 1, 3, 6, 4, 2 };
    printArray (ints, 6);
    swap (&ints[0], &ints[5], sizeof (i));
    printArray (ints, 6);
}

int main (void) {
    test1 ();
    return 0;
}
