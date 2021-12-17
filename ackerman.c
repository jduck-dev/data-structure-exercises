#include "ackerman.h"

void ackerman_example(){
    printf("Ack(4,3) = %d\n", ackerman(4,3));
}

int ackerman(int m, int n)
{
    if (m == 0)
    {
        printf("Ack(%d,%d) = %d + 1\n", m, n, n);
        return n + 1;
    }
    if (m > 0 && n == 0)
    {
        printf("Ack(%d,%d) = Ack(%d-1,1) = Ack(%d,1)\n", m, n, m, m-1);
        return ackerman(m - 1, 1);
    }
    if (m > 0 && n > 0)
    {
        printf("Ack(%d,%d) = Ack(%d-1,Ack(%d,%d-1)) = Ack(%d,Ack(%d,%d))\n", m, n, m, m, n, m-1, m, n-1);
        return ackerman(m - 1, ackerman(m, n-1));
    }
}