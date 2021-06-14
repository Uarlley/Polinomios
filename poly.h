#include <stdio.h>
#include <stdlib.h>

typedef struct tnode{
    struct tnode *next;
    int num;
    int coeff;
}node;