#include <stdio.h>

int main() {
    char line[256];  // buffer to store each line

    // Open file in read mode
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // fgets keeps the newline
    }

    // Close the file
    fclose(fp);

    return 0;
}
