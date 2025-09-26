//Q: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}

