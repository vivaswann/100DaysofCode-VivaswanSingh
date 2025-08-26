#include <stdio.h>

int main() {
    float radius, area, circumference;
    float PI;

    PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.f\n", area);
    printf("Circumference = %.f\n", circumference);

    return 0;
}
