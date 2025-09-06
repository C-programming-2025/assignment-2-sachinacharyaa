#include <stdio.h>

int main()
{
    int n, i = 1;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        do
        {
            factorial *= i;
            i++;
        } while (i <= n);
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
