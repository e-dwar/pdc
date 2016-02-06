#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"
#include "ex2.h"

void test1 (void) {
    int x = 1, y = 2;
    permuter (&x, &y);
    printf ("x = %d, y = %d", x, y);
}

void test2 (void) {
    int heap[] = { 8, 5, 7, 3, 1, 2, 6 };
    printHeap (heap, 7, 0);
    putchar ('\n');
}

void test3 (void) {
    int heap[] = { 8, 7, 5, 3, 1, 2, 10 };
    printHeap (heap, 7, 0);
    percolation (heap, heap + 6);
    printHeap (heap, 7, 0);
}

void test4 (void) {
    int heap[] = { 1, 3, 8, 4, 9, 6, 5 };
    printHeap (heap, 7, 0);
    construireTas (heap, heap + 6);
    printHeap (heap, 7, 0);
}

void test5 (void) {
    int heap[] = { 6, 5, 7, 3, 1, 2, 8 };
    printHeap (heap, 7, 0);
    tamisage (heap, heap + 6);
    printHeap (heap, 7, 0);
}

void test6 (void) {
    int heap[] = { 1, 3, 8, 4, 9, 6, 5 };
    printArray (heap, 7);
    trier (heap, heap + 6);
    printArray (heap, 7);
}

int main (void) {
    /*test1 ();*/
    /*test2 ();*/
    /*test3 ();*/
    /*test4 ();*/
    test5 ();
    test6 ();
    return 0;
}
