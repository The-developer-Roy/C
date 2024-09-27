#include <stdio.h>

int main()
{
    int n, i = 1;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else if (n > 65)
    {
        printf("Factorial result is too large to be accurately calculated with standard data types.\n");
    }

    else
    {
        while (i <= n)
        {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}