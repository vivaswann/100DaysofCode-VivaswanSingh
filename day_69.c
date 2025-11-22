//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration
#include <stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int seen[n]; 
    for (i = 0; i < n; i++) {
        seen[i] = 0; 
    }
    
    int repeatedElement = -1;
    
    for (i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            repeatedElement = arr[i];
            break;
        } else {
            seen[arr[i]] = 1; 
        }
    }
    
    printf("%d\n", repeatedElement);
    
    return 0;
}