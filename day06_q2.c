//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){

    int integer;
    printf("Input an integer: ");
    scanf("%d", &integer);

    if (integer > 0)
    printf("Integer is positive");
    
    else if (integer < 0)
    printf("Integer is negative");

    else if (integer==0)
    printf("Integer is 0");


    return 0;

}