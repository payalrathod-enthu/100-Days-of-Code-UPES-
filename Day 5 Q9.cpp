
//Q: Write a program to calculate simple and compound interest 


#include <stdio.h>
#include <math.h>   

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest = principal * (pow((1 + rate / 100), time) - 1);
    
    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f\n", compound_interest);

    return 0;
}

