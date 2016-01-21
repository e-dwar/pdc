
void bubbleSortInt (
  int * a, int n
);

void bubbleSort (
  void * base, int n, int size, 
  int (* compar) (const void *, const void *)
);