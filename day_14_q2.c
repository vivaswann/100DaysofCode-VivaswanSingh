//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, product);
    return 0;
}
