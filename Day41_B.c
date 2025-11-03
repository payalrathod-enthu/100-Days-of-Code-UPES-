// Question: Write a C program to print each character of a string on a new line without using built-in length functions and without using fgets.

#include <stdio.h>

int main() {
    char str[1000]; 
    int i = 0;      

    printf("Enter a string (no spaces): ");
    scanf("%s", str); 

    while (str[i] != '\0') {
        printf("%c\n", str[i]); 
        i++;
    }

    return 0;
}


