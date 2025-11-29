#include <stdio.h>

int main() {
    // Enum for user roles
    enum UserRole {ADMIN, USER, GUEST};

    // Array of enum names as strings
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    int i;
    int totalRoles = 3; // total number of enum members

    printf("Enum names and their integer values:\n");
    for (i = 0; i < totalRoles; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
