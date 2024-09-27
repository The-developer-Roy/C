#include<stdio.h>

int main()
{
    int a, b, c, average;
    printf("Enter the value of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    average = (a + b +c)/3;
    printf("the average is: %d", average);
    return 0;
}