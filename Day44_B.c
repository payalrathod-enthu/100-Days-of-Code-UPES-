// Question: Write a C program to replace all spaces in a string with hyphens.

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == '\n') { 
            break;
        }
        if (str[i] == ' ') {
            str[i] = '-'; 
        }
        i++;
    }

    printf("Modified string: %s\n", str);

    return 0;
}

