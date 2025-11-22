//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k
#include <stdio.h>
int main ()
{
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    int maxSum = 0;
    
    for (i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (j = 0; j < k; j++) {
            currentSum += arr[i + j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("%d\n", maxSum);
    
    return 0;
}