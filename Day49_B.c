// Question: Write a C program to print the initials of the first name(s) and the surname in full.

#include <stdio.h>

int main() {
    char name[1000];
    int i = 0, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read full name including spaces

    // Find the position of the last space (before surname)
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    // Print initials of first name(s)
    i = 0;
    while (i <= lastSpace) {
        if (name[i] != ' ' && (i == 0 || name[i-1] == ' ')) {
            printf("%c.", name[i]); // Print initial followed by a dot
        }
        i++;
    }

    // Print surname in full
    if (lastSpace != -1) {
        for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}

