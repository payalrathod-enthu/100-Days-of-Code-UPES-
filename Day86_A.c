#include <stdio.h>

int main() {
    // Enum for menu choices
    enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

    int choice;
    float num1, num2, result;

    // Display menu
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Take two numbers as input
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on choice
    switch(choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
