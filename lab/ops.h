#ifndef _OPS_H_
#define _OPS_H_

typedef struct {
    int (*add) (int x, int y);
} *Ops;

Ops opsMake ();
void opsClear (Ops);
static int add (int x, int y);
static Ops initialize (Ops inst);
static Ops allocate ();

#endif
