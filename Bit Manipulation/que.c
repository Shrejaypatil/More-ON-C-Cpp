#include <stdio.h>

int main()
{
    int L = 42;

    int m = 1, n=3, o = 5;

    // printf("%d\n",L);

    // L = L | (1<<m);

    // printf("%d\n",L);

    // L = L & ~(1<<n);

    // printf("%d\n",L);

    // L = L ^ (1<<o);

    // printf("%d",L);

    L = (((L | (1<<m))&~(1<<n))^(1<<o));

    printf("%d",L);

    return 0;
}