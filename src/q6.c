
#include <stdio.h>

int main()
{
    int p;
    printf("Enter a number: ");
    scanf("%d", &p);

    int r = 1;
    do
    {
        printf("%d ", p * r);
        r++;
    } while (r <= 10);
    return 0;
}