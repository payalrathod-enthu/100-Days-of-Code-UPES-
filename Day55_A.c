//Majority Element Program
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int i;   // declared outside

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Boyer-Moore to find candidate
    int candidate = nums[0];
    int count = 1;

    for (i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}

