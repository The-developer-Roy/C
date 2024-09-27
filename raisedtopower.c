#include <stdio.h>

int main()
{
    int base, exponent;
    long long result = 1; // We use long long to handle larger results

    // Input base and exponent from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Initialize the loop counter
    int i = 0;

    // Calculate base^exponent using a while loop
    while (i < exponent)
    {
        result *= base; // result = result * base;
        i++;
    }

    // Output the result
    printf("%d raised to the power of %d is %lld\n", base, exponent, result);

    return 0;
}