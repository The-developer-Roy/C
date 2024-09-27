#include <stdio.h>

int main() {
    int year;
    
    // Prompt the user to input a year
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check if the year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            // If year is divisible by 100, it must also be divisible by 400 to be a leap year
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}