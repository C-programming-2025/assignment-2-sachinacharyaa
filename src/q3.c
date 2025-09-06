#include <stdio.h>

int main()
{
    int p, sach;
    printf("Enter an integer: ");
    scanf("%d", &p);
    if (p < 0)
    {
        sach = -p;
    }
    else
    {
        sach = p;
    }
    printf("Absolute Value: %d\n", sach);
    return 0;
}