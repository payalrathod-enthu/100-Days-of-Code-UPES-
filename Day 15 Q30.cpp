//Q: Write a program to reverse a given number.
   //Example: Input = 1234 ? Output = 4321

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;             
        reversed = reversed * 10 + remainder; 
        num /= 10;                       
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}

