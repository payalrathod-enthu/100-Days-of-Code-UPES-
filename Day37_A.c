// Program to find the sum of each row of a matrix and store it in an array

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10], rowSum[10];

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

    // Calculate sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for this row
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Display the matrix
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display sum of each row
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

