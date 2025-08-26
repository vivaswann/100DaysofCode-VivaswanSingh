//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){

    int integer;
    printf("Input an integer: ");
    scanf("%d", &integer);

    if (integer % 2 == 0)
    printf("Integer is even");
    else 
    printf("Integer is odd");

    return 0;

}