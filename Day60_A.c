//Maximum in Each Subarray of Size k (Brute Force)
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i, j;  // loop variables declared outside

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("-1\n");   // no valid window
        return 0;
    }

    // For each window starting at i
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Check elements inside the window i to i+k-1
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d", max);
        if (i != n - k) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
