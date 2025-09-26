/*
Question:
Write a program to find the digit(s) that occur the most times in an integer number.
The program handles 0 and negative inputs, and prints all digits that tie for max frequency.
*/

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int digit, i;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) num = -num;

    // Special case: number 0 has digit '0' once
    if (num == 0) {
        count[0] = 1;
    }

    // Count digits
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find maximum frequency
    int maxFreq = 0;
    for (i = 0; i < 10; i++) {
        if (count[i] > maxFreq)
            maxFreq = count[i];
    }

    // Print result(s)
    printf("Digit(s) with highest frequency (%d time(s)): ", maxFreq);
    int first = 1;
    for (i = 0; i < 10; i++) {
        if (count[i] == maxFreq) {
            if (!first) printf(", ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}

