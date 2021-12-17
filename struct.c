#include "struct.h"

void structExample()
{
    struct _genericStruct same1;
    same1.integer = 1;
    same1.real = 2.1;
    same1.character = 'a';

    printGenericStruct(same1);

    GenericStruct same2;
    same2.integer = 1;
    same2.real = 2.1;
    same2.character = 'a';

    printGenericStruct(same2);

    GenericStruct same3 = {.integer = 1, .real = 2.1, .character = 'a'};

    printGenericStruct(same3);
}

void printGenericStruct(GenericStruct genericStruct)
{
    printf("{integer: %d, real: %f, character: %c}\n", genericStruct.integer, genericStruct.real, genericStruct.character);
}