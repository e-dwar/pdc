#include "bubble.h"

void bubbleSortInt (
  int * a, int n
) {
  int i, j, tmp;
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (a[j] > a[j + 1]) {
        tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
}

void bubbleSort (
  void * base, int n, int size, 
  int (* compar) (const void *, const void *)
) {
  char tmp;
  char * p = base;
  int i, j, k;
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (compar (p + j * size, p + (j + 1) * size) == 1) {
        k = 0;
        while (k < size) {
          tmp = *(p + k + j * size);
          *(p + k + j * size) = *(p + k + (j + 1) * size);
          *(p + k + (j + 1) * size) = tmp;
          k++;
        }
      }
    }
  }
}
