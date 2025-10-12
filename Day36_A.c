#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int i, j;

    // Read number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]); // formatted for neat spacing
        }
        printf("\n");
    }

    return 0;
}

