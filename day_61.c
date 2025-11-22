//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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
    
    for (i = 0; i <= n - k; i++) {
        int foundNegative = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                foundNegative = 1;
                break;
            }
        }
        if (!foundNegative) {
            printf("0 ");
        }
    }
    
    printf("\n");
    
    return 0;
}