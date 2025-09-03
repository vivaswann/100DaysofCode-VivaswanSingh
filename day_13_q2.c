//Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (i<=0)
    printf("Value should be 1 or greater than 1");
    
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
