#include <stdio.h>

int main () {
    int y;

    printf("Input Year: ");
    scanf("%d", &y);

    if (((y%4==0) || (y%400==0)) && (y%100!=0))
    printf("Given year is leap year");

    else 
    printf("Given year is not a leap year");

    return 0;
}