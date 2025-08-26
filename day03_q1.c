#include <stdio.h>

int main() {
    int temp;
    printf("Enter a temperature in Celsius: ");
    scanf("%d", &temp);
    int faren = (temp * 9/5) + 32;
    printf("Temperature in Farenheit: %d\n", faren);
    return 0;
}