#include<stdio.h>

int main()
{
    int n, i = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        i = 1;
        i++;
    }else{
        while (n != 0)
        {
            n /= 10;
            i++;
        }
    }
    printf("number of digits: %d\n", i);

    return 0;
}