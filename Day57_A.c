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

    // Find previous greater element for each element
    for (i = 0; i < n; i++) {
        int prevGreater = -1;

        // Search to the left
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        printf("%d", prevGreater);

        if (i != n - 1) {
            printf(",");   // comma between outputs
        }
    }

    printf("\n");
    return 0;
}

