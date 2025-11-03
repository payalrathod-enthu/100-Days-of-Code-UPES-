// Question: Write a C program to reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Read the full sentence including spaces

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }

        start = i;

        // Find the end of the current word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        end = i - 1;

        // Reverse the current word
        int left = start, right = end;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}

