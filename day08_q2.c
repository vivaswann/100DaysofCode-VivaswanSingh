// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main () {
    int a,b,c;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    printf("Input c: ");
    scanf("%d", &c);


    if (a>b && a>c)
    printf("\na is largest");

    else if (b>c && b>a)
    printf("\nb is largest");

    else if (c>b && c>a)
    printf("\nc is largest");

    return 0;
}