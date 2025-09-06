#include <stdio.h>

int main()
{
    int p = 2;
    int pran = 0;
    while (p <= 50)
    {
        pran += p;
        p += 2;
    }
    printf("%d\n", pran);
    return 0;
}