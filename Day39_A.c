// Program to check if all diagonal elements of a matrix are distinct

#include <stdio.h>

int main() {
    int A[10][10], n, i, j, k, flag = 1;

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

    // Check distinctness of diagonal elements
    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (A[i][i] == A[k][k]) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }

    // Print matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Display result
    if (flag)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}

