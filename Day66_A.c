#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    int i, j;

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    int found = 0;

    // Brute force: check all pairs
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("-1 -1");
    }

    return 0;
}
