#include <stdio.h>

int main() {
    // Enumeration for months
    enum Months {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    // Array holding days in each month (non-leap year)
    int daysInMonth[] = {
        31, // January
        28, // February
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };

    // Array of month names for printing
    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Months and their number of days:\n");
    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s: %d days\n", monthNames[m], daysInMonth[m]);
    }

    return 0;
}
