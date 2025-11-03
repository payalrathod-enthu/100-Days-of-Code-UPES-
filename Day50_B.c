#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    
    printf("Enter a string: ");
    scanf("%s", str);  // reads string without spaces
    
    int len = strlen(str);
    
    printf("All substrings of \"%s\" are:\n", str);
    
    // Generate all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from index i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    return 0;
}

