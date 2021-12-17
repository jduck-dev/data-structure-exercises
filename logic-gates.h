#ifndef __LOGIC_GATES__H
#define __LOGIC_GATES__H

#include <stdio.h>

typedef struct _logicGate LogicGate;

struct _logicGate {
    int s1;
    int s2;
    int r;
};

void logic_gates_example();
void printSignal(LogicGate);
LogicGate signal(int);
LogicGate and(LogicGate, LogicGate);
LogicGate or(LogicGate, LogicGate);

#endif