#include "logic-gates.h"

LogicGate signal(int s)
{
    return (LogicGate){.s1 = -1, .s2 = -1, .r = s};
}

LogicGate and (LogicGate s1, LogicGate s2)
{
    int r = s1.r && s2.r;
    printf("%d AND %d = %d\n", s1.r, s2.r, r);
    return (LogicGate){.s1 = s1.r, .s2 = s2.r, .r = r};
}

LogicGate or (LogicGate s1, LogicGate s2)
{
    int r = s1.r || s2.r;
    printf("%d OR %d = %d\n", s1.r, s2.r, r);
    return (LogicGate){.s1 = s1.r, .s2 = s2.r, .r = r};
}

void printSignal(LogicGate s)
{
    printf("r: %d\n", s.r);
}

void logic_gates_example()
{
    LogicGate s1 = signal(1);
    LogicGate s2 = signal(1);
    LogicGate s3 = signal(0);
    LogicGate r = or (s1, and(s2, s3));
}