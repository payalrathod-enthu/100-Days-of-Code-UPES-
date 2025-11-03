// Question: Write a C program to check if one string is a rotation of another without using built-in functions.

#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int len1 = 0, len2 = 0, i, j, isRotation = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Find lengths of both strings
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Check rotation
    for (i = 0; i < len1; i++) { // Rotate str1
        isRotation = 1;
        for (j = 0; j < len2; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                isRotation = 0;
                break;
            }
        }
        if (isRotation) break; // Found a rotation
    }

    if (isRotation) {
        printf("The second string is a rotation of the first string.\n");
    } else {
        printf("The second string is not a rotation of the first string.\n");
    }

    return 0;
}

