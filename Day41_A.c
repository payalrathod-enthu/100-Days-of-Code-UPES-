// Question: Write a C program to count the number of characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000]; 
    int count = 0;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    while (str[count] != '\0') {
        if (str[count] != '\n') { 
            count++;
        } else {
            break;
        }
    }

    printf("The number of characters in the string is: %d\n", count);

    return 0;
}

