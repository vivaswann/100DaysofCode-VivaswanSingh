//Find and display the sum of the first n natural numbers (using formula)

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2; 

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
