#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter first number, a: \n");
    scanf("%d", &a);
    printf("Enter second number, b: \n");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("The first number, a is swapped to: %d\n", a);
    printf("The second number, b is swapped to: %d\n", b);
    return 0;
}