//Calculate Simple Interest (I can't think how to calculate compound interest)

#include <stdio.h>

int main() {
    float p, r, t, si;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.f\n", si);

    return 0;
}


