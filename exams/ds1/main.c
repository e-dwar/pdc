#include <stdio.h>
#include "bubble.h"
#include "isbn.h"

typedef int (*sortcmp) (const void *, const void *);

static void printArray (int a[], int n) {
  int i;
  printf ("[ ");
  for (i = 0; i < n; i++) {
    printf ("%d ", a[i]);
  }
  printf ("]");
}

int compareInt (int * i, int * j) {
  if (*i > *j) { return 1; }
  if (*i < *j) { return -1; }
  return 0;
}

int main (void) {
  int n = 4;
  int a[] = { 2, 4, 3, 1 };
  int b[] = { 2, 4, 3, 1 };
  printf ("\"0-13-162959-X\": %d\n", isISBNValid ("0-13-162959-X"));
  printf ("\"0-23-162959-X\": %d\n", isISBNValid ("0-23-162959-X"));
  puts ("bubble sort int ");
  printArray (a, n);
  bubbleSortInt (a, n);
  printArray (a, n);
  puts ("\nbubble sort ");
  printArray (b, n);
  bubbleSort (b, n, sizeof (int), (sortcmp) compareInt);
  printArray (b, n);
  return 0;
}