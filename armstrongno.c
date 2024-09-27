/*

    Formula for armstrong numbers:
    x1^n + x2^n + x3^n + ........ + xn^n = original number

*/

#include <stdio.h>

int main()
{
    int num, temp, arm = 0, x, result, n = 0;

    // Input the number
    printf("Enter any number: ");
    scanf("%d", &num);

    // Make a copy of the original number
    temp = num;

    // Count the number of digits (n)
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }

    // Reset temp to the original number
    temp = num;

    // Calculate Armstrong number
    while (temp != 0)
    {
        // Extract the digits
        x = temp % 10; // Get the last digit
        temp /= 10;    // Remove the last digit

        // Reset result and calculate x^n
        result = 1;
        for (int i = 0; i < n; i++)
        {
            result *= x;
        }

        // Add the nth power of the digit to arm
        arm += result;
    }

    // Check if the number is an Armstrong number
    if (num == arm)
    {
        printf("Armstrong number!!!!");
    }
    else
    {
        printf("Not an Armstrong number");
    }

    return 0;
}
