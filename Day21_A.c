//Q: Write a program to swap the first and last digit of a number.


#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, power, middlePart, newNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;   
    digits = (int)log10(num); 
    power = (int)pow(10, digits); 

    firstDigit = num / power; 
    middlePart = num % power; 
    middlePart = middlePart / 10; 

    newNum = lastDigit * power + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", newNum);

    return 0;
}

