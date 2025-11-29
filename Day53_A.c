#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivotIndex = i;   // leftmost pivot index
            break;
        }

        leftSum += arr[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}

