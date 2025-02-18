#include <stdio.h>

// Function to count the number of digits in a number
int digitcounter(int bin) {
    int i = 0;

    if (bin == 0) {
        return 1; // 0 has one digit
    }

    while (bin != 0) {
        bin /= 10;
        i++;
    }
    return i;
}

// Function to extract digits and store them in an array in reverse order
void extractDigits(int num, int *arr, int size) {
    if (num < 0) {
        num = -num;  // Convert negative number to positive
    }

    for (int i = 0; i < size; i++) {
        arr[i] = num % 10;  // Store the last digit
        num /= 10;          // Remove last digit
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Get the number of digits
    int size = digitcounter(number);
    int digits[size]; // Declare an array with the required size

    // Extract digits in reverse order
    extractDigits(number, digits, size);

    // Print the extracted digits
    printf("Digits in reverse order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}
