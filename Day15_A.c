//Q: Write a program to calculate the factorial of a number.
  // Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}

