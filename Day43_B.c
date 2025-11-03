// Question: Write a C program to check if a string is a palindrome without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);  

    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;  

    i = 0;  
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;  
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

