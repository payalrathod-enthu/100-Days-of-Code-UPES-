
//Q: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char alpha;

    printf("Enter an alphabet: ");
    scanf(" %c", &alpha);  

    if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z')) {
        
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
            alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {
            printf("%c is a Vowel.\n", alpha);
        } else {
            printf("%c is a Consonant.\n", alpha);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}

