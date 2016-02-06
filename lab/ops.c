#include <stdlib.h>
#include "ops.h"

Ops
opsMake ()
{
    return initialize(allocate());
}

void
opsClear (Ops inst)
{
    free(inst);
}

static Ops
initialize (Ops inst)
{
    inst->add = add;
    return inst;
}

static Ops
allocate ()
{
    return (Ops)malloc(
        sizeof(*(Ops)NULL)
    );
}

static int
add (int x, int y)
{
    return x + y;
}
