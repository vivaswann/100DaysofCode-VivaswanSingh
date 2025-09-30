//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("The diagonal traversal of the matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j <= i && j < c; j++)
        {
            printf("%d ", a[i - j][j]);
        }
        printf("\n");
    }
    for (i = 1; i < c; i++)
    {
        for (j = 0; j < c - i && j < r; j++)
        {
            printf("%d ", a[r - 1 - j][i + j]);
        }
        printf("\n");
    }
    return 0;
}