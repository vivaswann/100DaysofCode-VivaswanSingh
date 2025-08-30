//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Quadratic equation example: a(x*x) + bx + c ");
    printf("\nEnter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0) {
        printf("Roots are real and distinct.\n");
    }
    else if(d == 0) {
        printf("Roots are real and equal.\n");
    }
    else {
        printf("Roots are imaginary (complex).\n");
    }

    return 0;
}
