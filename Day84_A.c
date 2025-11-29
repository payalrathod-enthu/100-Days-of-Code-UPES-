#include <stdio.h>

int main() {
    // Define enum for status codes
    enum Status {SUCCESS, FAILURE, TIMEOUT};

    enum Status s;

    // Ask user to enter a status value
    printf("Enter status value (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", (int*)&s);  // cast to int* for scanf

    // Print message based on enum value
    switch(s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status value!\n");
    }

    return 0;
}
