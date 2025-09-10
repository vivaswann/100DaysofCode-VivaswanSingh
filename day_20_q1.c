//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; // to check if there are any odd digits

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   // get last digit
        if (digit % 2 == 1) {   // check if odd
            product = product * digit;
            hasOdd = 1; // found an odd digit
        }
        num = num / 10; // move to next digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found!\n");

    return 0;
}
