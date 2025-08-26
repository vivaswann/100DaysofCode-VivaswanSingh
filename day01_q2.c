// Problem: Input two numbers and display their sum, difference, product, and division.

#include <stdio.h>

int main() 
{
    float firstnumber, secondnumber;

    printf("Enter first number: ");
    scanf("%f", &firstnumber);

    printf("Enter second number: ");
    scanf("%f", &secondnumber);

    printf("Sum = %f\n", firstnumber + secondnumber);
    printf("Difference = %f\n", firstnumber - secondnumber);
    printf("Product = %f\n", firstnumber * secondnumber);

    if (secondnumber != 0) {
        printf("Division = %f\n", firstnumber/secondnumber);
    } else {
        printf("ERROR");
    }

    return 0;
}

