#include <stdio.h>
#include <stdlib.h>

void r_and_update(int* p, int* q)
{
    int temp = 8 * (*p) + 3 * (*q);
    *q = (*p) + 3 * (*q);;
    *p = temp;
}

int main()
{
    int p = 3;
    int q = 1;
    int* pp = &p;
    int* pq = &q;
    printf("p_1 = 3, q_1 = 1\n");
    for (int i = 0; i < 10; i++)
    {
        r_and_update(pp, pq);
        printf("p_%d = %d, q_%d = %d", i, *pp, i, *pq);
    }
    return 0;
}