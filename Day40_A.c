// Program to perform diagonal traversal of a square matrix

#include <stdio.h>

int main() {
    int A[10][10], n, i, j;

    // Read order of the square matrix
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    // Read elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Perform diagonal traversal
    printf("\nDiagonal traversal of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                printf("%d ", A[i][j]);
        }
    }

    printf("\n");

    return 0;
}

