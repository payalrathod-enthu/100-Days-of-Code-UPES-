#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;   // sum from 1 to n
    int pivot = -1;
    int x;

    for (x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - ( (x - 1) * x / 2 );

        if (leftSum == rightSum) {
            pivot = x;
            break;   // at most one pivot
        }
    }

    printf("%d\n", pivot);

    return 0;
}

