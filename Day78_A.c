#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) { // Check if character is a letter
            ch = tolower(ch); // Convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
