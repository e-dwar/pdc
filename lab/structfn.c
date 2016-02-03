#include <stdio.h>
#include <string.h>

int add (int x, int y)
{
    return x + y;
}

struct op 
{
    int (*add) (int x, int y);
};

int
main (int argc, char *argv[])
{
    struct op inst;
    inst.add = add;
    printf("%d + %d = %d\n", 1, 2, inst.add(1, 2));
    return 0;
}
