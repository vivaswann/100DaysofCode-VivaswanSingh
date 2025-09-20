//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, search, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element found at index: %d\n", i);
    } else {
        printf("Element not found\n");
    }

    return 0;
}