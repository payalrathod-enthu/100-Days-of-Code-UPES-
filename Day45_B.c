// Question: Write a C program to toggle the case of each character in a string without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            str[i] = ch - 32; 
        } else if (ch >= 'A' && ch <= 'Z') {
            str[i] = ch + 32; 
        }

        i++;
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}

