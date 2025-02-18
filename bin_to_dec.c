#include<stdio.h>
#include<math.h>

int digitcounter(int bin)
{
    int i = 0;

    if (bin == 0)
    {
        i = 1;
        i++;
    }
    else
    {
        while (bin != 0)
        {
            bin /= 10;
            i++;
        }
    }
    return i;
}


int reverseNumber(int num){
    int reversedNum = 0, remaider;
    
    while (num!=0)
    {
        remaider = num%10;
        reversedNum = reversedNum * 10 + remaider;
        num /= 10;
    }
    printf("%d", reversedNum);
    return reversedNum;
}

void extractDigits(int num, int *arr, int size) {
    if (num < 0) {
        num = -num;  // Convert negative number to positive
    }

    for (int i = 0; i < size; i++) {
        arr[i] = num % 10;  // Store the last digit
        num /= 10;          // Remove last digit
    }
}




int main()
{
    int m, bin, sum = 0;

    printf("Enter your binary number: ");
    scanf("%d", &bin);

    m = digitcounter(bin);

    int digits[m];

    extractDigits(bin, digits, m);

    for (int i = 0; i <= m; i++)
    {
        int x = digits[i] * pow(2, i);
        sum = sum + x;
    }

    printf("The decimal equivalent of binary number %d is = %d", bin, sum);

    return 0;
}