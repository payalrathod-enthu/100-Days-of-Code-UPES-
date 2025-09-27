/*
Question:
Write a program to rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k (number of positions to rotate): ");
    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    // Store last k elements in temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the array to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy back the rotated elements
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

