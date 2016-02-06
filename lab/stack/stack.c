#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void printStack (stack s) {
    while (s) {
        printf ("%d ", s->val);
        s = s->next;
    }
    putchar ('\n');
}

int isEmpty (stack s) {
    return s == EMPTY_STACK;
}

int push (stack *s, int i) {
    stack n = malloc (sizeof (**s));
    if (!n) return 1;
    n->val = i;
    n->next = *s;
    *s = n;
    return 0;
}

int pop (stack *s, int *i) {
    stack n;
    if (isEmpty (*s)) return 1;
    *i = (*s)->val;
    n = (*s)->next;
    free (*s);
    *s = n;
    return 0;
}
