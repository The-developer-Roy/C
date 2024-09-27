#include <stdio.h>

int main() {
    int ascii_value = 0;

    printf("ASCII values and their corresponding characters:\n");

    while (ascii_value <= 255) {
        printf("ASCII value %d = '%c'\n", ascii_value, ascii_value);
        ascii_value++;
    }

    return 0;
}