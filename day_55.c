//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
int main ()
{
    int n, i, j, count, maxCount = 0, majorityElement = -1;
    scanf("%d", &n);
    int nums[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            majorityElement = nums[i];
        }
    }
    
    if (maxCount > n / 2) {
        printf("%d\n", majorityElement);
    } else {
        printf("-1\n");
    }
    
    return 0;
}