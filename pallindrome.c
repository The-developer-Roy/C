#include<stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remaider;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num!=0)
    {
        remaider = num%10;
        reversedNum = reversedNum * 10 + remaider;
        num /= 10;
    }
    
    if (originalNum == reversedNum)
    {
        printf("%d is a pallindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a pallindrome.\n", originalNum);
    }
    return 0;
}