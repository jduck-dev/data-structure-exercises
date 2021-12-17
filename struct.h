#ifndef __STRUCT_H__
#define __STRUCT_H__

#include <stdio.h>

typedef struct _genericStruct GenericStruct;

struct _genericStruct {
    int integer;
    double real;
    char character;
};

void structExample();
void printGenericStruct(GenericStruct);

#endif