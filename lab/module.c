#include <stdio.h>
#include <string.h>
#include "ops.h"

int
main (int argc, char *argv[])
{
    Ops inst = opsMake();
    int z = inst->add(1, 2);
    printf("%d + %d = %d\n", 1, 2, z);
    return 0;
}
