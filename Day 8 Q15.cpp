
//Q: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


#include <stdio.h>

int main() {
    char wd;

    printf("Enter a character: ");
    scanf("%c", &wd);

    if (wd >= 'A' && wd <= 'Z') {
        printf("%c is an Uppercase Alphabet.\n", wd);
    } 
    else if (wd >= 'a' && wd <= 'z') {
        printf("%c is a Lowercase Alphabet.\n", wd);
    } 
    else if (wd >= '0' && wd <= '9') {
        printf("%c is a Digit.\n", wd);
    } 
    else {
        printf("%c is a Special Character.\n", wd);
    }

    return 0;
}

