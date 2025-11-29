#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[1000];

    // Get the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Clear input buffer before taking new line
    getchar();

    // Get text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write text to file
    fprintf(fp, "%s", text);

    printf("Text appended successfully.\n");

    // Close the file
    fclose(fp);

    return 0;
}
