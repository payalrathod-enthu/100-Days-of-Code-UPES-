#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Remove trailing newline if present
    if (str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    // Convert first character to uppercase if it's a letter
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Convert rest of the string to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s\n", str);

    return 0;
}
