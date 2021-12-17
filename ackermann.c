#include "ackermann.h"

void ackermannExample(){
    printf("Ack(4,3) = %d\n", ackermann(4,3));
}

int ackermann(int m, int n)
{
    if (m == 0)
    {
        printf("Ack(%d,%d) = %d + 1 = %d\n", m, n, n, n + 1);
        return n + 1;
    }
    if (m > 0 && n == 0)
    {
        printf("Ack(%d,%d) = Ack(%d-1,1) = Ack(%d,1)\n", m, n, m, m-1);
        return ackermann(m - 1, 1);
    }
    if (m > 0 && n > 0)
    {
        printf("Ack(%d,%d) = Ack(%d-1,Ack(%d,%d-1)) = Ack(%d,Ack(%d,%d))\n", m, n, m, m, n, m-1, m, n-1);
        return ackermann(m - 1, ackermann(m, n-1));
    }
}