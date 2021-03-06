#ifndef __LOGIC_GATES__H
#define __LOGIC_GATES__H

#include <stdio.h>

typedef struct _logicGate LogicGate;

struct _logicGate {
    int s1;
    int s2;
    int r;
};

void logicGatesExample();
void printSignal(LogicGate);
LogicGate inputSignal(int);
LogicGate and(LogicGate, LogicGate);
LogicGate or(LogicGate, LogicGate);
LogicGate not(LogicGate);
LogicGate nand(LogicGate, LogicGate);

#endif