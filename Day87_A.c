#include <stdio.h>

int main() {
    // Enum for user roles
    enum UserRole {ADMIN, USER, GUEST};

    enum UserRole role;

    // Ask user to enter a role value
    printf("Enter role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", (int*)&role); // cast to int* for scanf

    // Display message based on role
    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}
