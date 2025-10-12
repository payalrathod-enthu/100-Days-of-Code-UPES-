// Program to check if a matrix is symmetric

#include <stdio.h>

int main() {
    int A[10][10], transpose[10][10];
    int n, i, j, flag = 1;

    // Read the order of the matrix
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    // Read elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Find transpose of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = A[j][i];
        }
    }

    // Check if original and transpose are equal
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != transpose[i][j]) {
                flag = 0;
                break;
            }
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

    // Print the transpose
    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", transpose[i][j]);
        }
        printf("\n");
    }

    // Display result
    if (flag)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}

