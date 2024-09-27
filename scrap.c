#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        i=n%10;
        n/=10;
        printf("%d\n", i);
    }
    return 0;
}