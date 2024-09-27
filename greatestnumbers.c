#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greatest.\n");
    }
    else if (b > a && b > c)
    {
        printf("b is the greatest.\n");
    }
    else if (c > a && c > b)
    {
        printf("c is the greatest.\n");
    }
    else
    {
        printf("Two or more have the same value, which is the greatest.\n");
    }
    return 0;
}