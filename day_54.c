//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
int main ()
{
    int n, i, sum1 = 0, sum2 = 0, pivot = -1;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum1 += i; 
    }
    
    for (i = 1; i <= n; i++) {
        sum2 += i; 
        if (sum2 * 2 - i == sum1) { 
            pivot = i;
            break;
        }
    }
    
    printf("%d\n", pivot);
    return 0;
}