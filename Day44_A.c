// Question: Write a C program to count spaces, digits, and special characters in a string

#include <stdio.h>

int main() {
    char ch;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string (press Enter to finish): ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        } else {
            special++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}


