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

    // For each window
    for (i = 0; i <= n - k; i++) {
        int found = 0;  // flag to track first negative

        // Check elements from i to i+k-1
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("0");
        }

        if (i != n - k) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
