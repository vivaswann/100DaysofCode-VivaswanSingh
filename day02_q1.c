#include <stdio.h>

int main() {
    float length, breadth;

    printf("Enter length:");
    scanf("%f", &length);

    printf("Enter breadth:");
    scanf("%f", &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}
