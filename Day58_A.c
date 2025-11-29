//Product of Array Except Self
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n], i;

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Make left product array
    int left[n], right[n];
    int j;

    left[0] = 1;
    for (i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    // Make right product array
    right[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    // Final answer: product of left * right
    for (i = 0; i < n; i++) {
        answer[i] = left[i] * right[i];
    }

    // Print result
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(" ");
    }

    printf("\n");
    return 0;
}



