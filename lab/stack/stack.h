
#define EMPTY_STACK NULL
typedef struct stack {
    int val;
    struct stack *next;
} *stack;

void printStack (stack);
int isEmpty (stack);
int push (stack *, int);
int pop (stack *, int *);
