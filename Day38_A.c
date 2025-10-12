// Program to add two matrices

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Sum[10][10];
    int rows, cols, i, j;

    // Read number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read elements of first matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of second matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add the two matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the result
    printf("\nMatrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of the two matrices (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

