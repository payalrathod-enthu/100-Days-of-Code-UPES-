//Write a program to print the product of even numbers from 1 to n.
   //Example: if n = 6 ? 2 × 4 × 6 = 48

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 
    int hasEven = 0;       

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);

    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("\nProduct of even numbers = %lld\n", product);
    else
        printf("\nNo even numbers in the range 1 to %d.\n", n);

    return 0;
}

