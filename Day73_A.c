#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        }
    }

    // If the file is not empty and doesn't end with newline, count last line
    if (characters > 0 && ch == EOF) {
        fseek(fp, -1, SEEK_END);
        ch = fgetc(fp);
        if (ch != '\n') lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
