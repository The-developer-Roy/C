#include<stdio.h>

int main()
{
    int a, b, c, d, e, avg, sum;

    printf("Enter your marks of five subjects one by one\n");
    printf("Enter the marks of first subject: ");
    scanf("%d", &a);
    printf("Enter the marks of 2nd subject: ");
    scanf("%d", &b);
    printf("Enter the marks of 3rd subject: ");
    scanf("%d", &c);
    printf("Enter the marks of 4th subject: ");
    scanf("%d", &d);
    printf("Enter the marks of 5th subject: ");
    scanf("%d", &e);

    sum = a+b+c+d+e;
    avg = sum/2;

    printf("The average of your marks is: %d", avg);
    return 0;
}