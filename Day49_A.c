// Question: Write a C program to print the initials of a name.

#include <stdio.h>

int main() {
    char name[1000];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read full name including spaces

    // Print the first character if it's not a space
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    // Loop through the string to find spaces
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", name[i+1]); // Print the first character after a space
        }
        i++;
    }

    printf("\n");

    return 0;
}

