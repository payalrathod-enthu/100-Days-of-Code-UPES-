// Question: Write a C program to check if two strings are anagrams of each other without using built-in functions.

#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0, j = 0;
    int isAnagram = 1;

    printf("Enter first string (lowercase letters only, no spaces): ");
    scanf("%s", str1);
    printf("Enter second string (lowercase letters only, no spaces): ");
    scanf("%s", str2);

    // Count frequency of each character in first string
    while (str1[i] != '\0') {
        freq1[str1[i] - 'a']++;
        i++;
    }

    // Count frequency of each character in second string
    while (str2[j] != '\0') {
        freq2[str2[j] - 'a']++;
        j++;
    }

    // Compare the frequencies
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}

