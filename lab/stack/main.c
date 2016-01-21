#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void test1 (void) {
    stack s = EMPTY_STACK;
    printf ("is empty: %d\n", isEmpty (s));
}

void test2 (void) {
    stack s = EMPTY_STACK;
    push (&s, 1);
    push (&s, 2);
    push (&s, 3);
    printStack (s);
}

void test3 (void) {
    int i;
    stack s = EMPTY_STACK;
    push (&s, 1);
    push (&s, 2);
    push (&s, 3);
    pop (&s, &i);
    printf ("pop = %d\n", i);
    printStack (s);
}

int main (void) {
    test1 ();
    test2 ();
    test3 ();
    return 0;
}
