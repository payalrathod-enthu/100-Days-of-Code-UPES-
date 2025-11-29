#include <stdio.h>

int main() {
    // Enum with explicit and default integer values
    enum Status {
        SUCCESS = 10,
        FAILURE,   // 11
        TIMEOUT = 20,
        UNKNOWN    // 21
    };

    printf("Enum values:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    printf("UNKNOWN = %d\n", UNKNOWN);

    return 0;
}
