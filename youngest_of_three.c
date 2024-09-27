#include <stdio.h>

int main() {
    int ageRam, ageShyam, ageAjay;

    // Input ages of Ram, Shyam, and Ajay
    printf("Enter the age of Ram: ");
    scanf("%d", &ageRam);
    
    printf("Enter the age of Shyam: ");
    scanf("%d", &ageShyam);
    
    printf("Enter the age of Ajay: ");
    scanf("%d", &ageAjay);

    // Determine the youngest
    if (ageRam < ageShyam && ageRam < ageAjay) {
        printf("Ram is the youngest.\n");
    } else if (ageShyam < ageRam && ageShyam < ageAjay) {
        printf("Shyam is the youngest.\n");
    } else if (ageAjay < ageRam && ageAjay < ageShyam) {
        printf("Ajay is the youngest.\n");
    } else {
        printf("Two or more have the same age, which is the youngest.\n");
    }

    return 0;
}
