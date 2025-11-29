//Next Greater Element (Brute Force, No Stack)
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i, j;   // declared outside loops

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute next greater element for each element
    for (i = 0; i < n; i++) {
        int nextGreater = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print result in comma-separated format
        printf("%d", nextGreater);
        if (i != n - 1) {
            printf(",");  // comma after each except last
        }
    }

    printf("\n");
    return 0;
}

