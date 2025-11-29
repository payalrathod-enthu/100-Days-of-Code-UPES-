#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if any
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    // Open file in write mode
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write name and age to file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    // Close file
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
