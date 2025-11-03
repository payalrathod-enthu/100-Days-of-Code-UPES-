// Question: Write a C program to reverse a string without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000]; 
    char reversed[1000]; 
    int i = 0, j = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str); 

    while (str[i] != '\0') {
        i++;
    }

    j = 0;
    for (int k = i - 1; k >= 0; k--) {
        reversed[j] = str[k];
        j++;
    }
    reversed[j] = '\0';  

    printf("Reversed string: %s\n", reversed);

    return 0;
}

