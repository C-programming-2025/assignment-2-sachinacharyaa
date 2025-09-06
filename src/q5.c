#include <stdio.h>

int main()
{
    int p, r = 1;
    unsigned long long sach = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &p);

    while (r <= p)
    {
        sach = sach * r;
        r++;
    }

    printf("%llu\n", sach);
    return 0;
}