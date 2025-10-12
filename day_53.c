#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float f_num1, f_num2;
    
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &f_num1, &f_num2);
    
    printf("%d %d\n", num1 + num2, num1 - num2);
    printf("%.1f %.1f\n", f_num1 + f_num2, f_num1 - f_num2);
    
    return 0;
}