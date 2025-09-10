//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int num, digit, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;

        if (digit == 0) {
            result = result + 1 * place;  
        } else if (digit == 1) {
            result = result + 0 * place;  
        } else {
            printf("Invalid input! Only 0 and 1 allowed.\n");
            return 0;
        }

        num = num / 10;   
        place = place * 10; 
    }

    printf("1's Complement = %d\n", result);

    return 0;
}
