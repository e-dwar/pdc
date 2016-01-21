#include <stdio.h>
#include <stdlib.h>
#include "ex2.h"

void permuter (int *x, int *y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void percolation (int *racine, int *fils) {
    int iPere = (fils - racine - 1) / 2;
    if (racine[iPere] < *fils) {
        permuter (fils, racine + iPere);
        percolation (racine, racine + iPere);
    }
}

void tamisage (int *racine, int *stop) {
    int fin = 0, i = 0, j;
    int l = stop - racine;
    int *max = racine;
    while (!fin) {
        j = 2 * i + 1;
        if (j < l && racine[j] > *max) {
            max = racine + j;
        }
        j = 2 * i + 2;
        if (j < l && racine[j] > *max) {
            max = racine + j;
        }
        fin = max == racine + i;
        if (!fin) {
            permuter (max, racine + i);
            i = max - racine;
        }
    }
}

void construireTas (int *racine, int *dernier) {
    int *i = racine + 1;
    while (i != dernier) {
        percolation (racine, i++);
    }
}

void trier (int *racine, int *dernier) {
    int i;
    construireTas (racine, dernier);
    for (i = dernier - racine; i > 0; i--) {
        permuter (racine, racine + i);
        tamisage (racine, racine + i);
    }
}














