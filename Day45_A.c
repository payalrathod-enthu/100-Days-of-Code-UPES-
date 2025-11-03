// Question: Write a C program to count the frequency of a given character in a string using fgets.

#include <stdio.h>

int main() {
    char str[1000];
    char target;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter the character to count: ");
    scanf(" %c", &target); 

    while (str[i] != '\0') {
        if (str[i] == '\n') { 
            break;
        }
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d times in the string.\n", target, count);

    return 0;
}

