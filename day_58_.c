//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
int main ()
{
    int n, i, j;
    scanf("%d", &n);
    int nums[n];
    int answer[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (i = 0; i < n; i++) {
        answer[i] = 1; 
        for (j = 0; j < n; j++) {
            if (i != j) {
                answer[i] *= nums[j];
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        if (i != 0) {
            printf(","); 
        }
        printf("%d", answer[i]);
    }
    printf("\n");
    
    return 0;
}