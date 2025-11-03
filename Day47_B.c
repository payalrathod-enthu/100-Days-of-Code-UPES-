// Question: Write a C program to find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000];
    int i = 0, len = 0, maxLen = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            len++;
        } else {
           
            if (len > maxLen) {
                maxLen = len;
                start = i - len;
                end = i - 1;
            }
            len = 0;
        }
        i++;
    }

    if (len > maxLen) {
        maxLen = len;
        start = i - len;
        end = i - 1;
    }

    for (i = start; i <= end; i++) {
        longest[i - start] = str[i];
    }
    longest[end - start + 1] = '\0'; 

    printf("The longest word is: %s\n", longest);

    return 0;
}

