#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);

    int arr1[m];
    int i, j, k;

    for(i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n);
    int arr2[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];

    i = 0;  
    j = 0;  
    k = 0;  

    // Merge like a gentle zipper
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Add leftovers from arr1
    while(i < m) {
        merged[k++] = arr1[i++];
    }

    // Add leftovers from arr2
    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    for(i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
