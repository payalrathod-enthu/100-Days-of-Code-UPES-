#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (i = 1; i < n; i++) {
        if (currentSum + arr[i] < arr[i]) {
            currentSum = arr[i];      // start new subarray
        } else {
            currentSum = currentSum + arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
