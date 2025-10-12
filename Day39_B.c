// Program to find the sum of main diagonal elements of a square matrix

#include <stdio.h>

int main() {
    int A[10][10], n, i, j, sum = 0;

    // Read the order of the square matrix
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    // Read elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += A[i][i];
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Display result
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}

