#include<stdio.h>

int main()
{
    int num, reversedNum = 0, remaider;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num!=0)
    {
        remaider = num%10;
        reversedNum = reversedNum * 10 + remaider;
        num /= 10;
    }
    printf("%d", reversedNum);
    return 0;
}