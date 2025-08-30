//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("First side in cm: ");
    scanf("%f", &side1);

    printf("Second side in cm: ");
    scanf("%f", &side2);

    printf("Third side in cm: ");
    scanf("%f", &side3);

    
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        printf("\nTriangle is valid\n");

    
        if (side1 == side2 && side2 == side3) {
            printf("Triangle is equilateral");
        }
        
        else if ((side1*side1 + side2*side2 == side3*side3) ||(side2*side2 + side3*side3 == side1*side1) || (side3*side3 + side1*side1 == side2*side2)) {
            printf("Triangle is right angled");
        }
        
        else if ((side1 == side2) || (side2 == side3) || (side1 == side3)) {
            printf("Triangle is isosceles");
        }
        
        else {
            printf("Triangle is scalene");
        }
    }
    else {
        printf("\nTriangle is not valid\n");
    }
    return 0;
}