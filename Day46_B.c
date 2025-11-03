// Question: Write a C program to find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; 
    int i = 0;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch == '\n') { 
            break;
        }

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            freq[index]++;

            if (freq[index] == 2) { 
                firstRepeating = ch;
                break; 
            }
        }

        i++;
    }

    if (firstRepeating != '\0') {
        printf("The first repeating lowercase alphabet is '%c'.\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}

