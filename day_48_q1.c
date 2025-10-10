//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h> 
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    // Check if lengths are equal
    if (strlen(str1) != strlen(str2))
    {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }
    // Concatenate str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
    {
        printf("The strings are rotations of each other.\n");
    }
    else
    {
        printf("The strings are not rotations of each other.\n");
    }
    return 0;
}