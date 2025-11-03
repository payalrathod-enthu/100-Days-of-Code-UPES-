// Question: Write a C program to count vowels and consonants in a string without using built-in length functions and without using fgets.

#include <stdio.h>

int main() {
    char str[1000];  
    int i = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str); 

    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

