
typedef int (*sortcmp) (void *, void *);
void quicksort (void *, int, int, sortcmp);
void partition (void *, int, int, sortcmp, void *);
void swap (void *, void *, int);
