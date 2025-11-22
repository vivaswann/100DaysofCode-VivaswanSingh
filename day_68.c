//rite a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);
    int arr[n - 1];
    
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    
    for (i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    
    int missingNumber = totalSum - arraySum;
    
    printf("%d\n", missingNumber);
    
    return 0;
}