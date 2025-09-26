/*
Q: Write a program to print the sum of the first n odd numbers.
   Example: n=5 ? 1 + 3 + 5 + 7 + 9 = 25
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers are: ", n);

    for(i = 1; i <= 2*n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

