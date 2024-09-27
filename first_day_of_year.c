#include <stdio.h>

int findDayOfWeek(int year) {
    int day = 1; // January 1st
    int month = 1; // January
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;

    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    return dayOfWeek;
}

const char* getDayName(int dayOfWeek) {
    switch (dayOfWeek) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid Day";
    }
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    int dayOfWeek = findDayOfWeek(year);
    printf("January 1st of the year %d is a %s.\n", year, getDayName(dayOfWeek));

    return 0;
}