//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    // Convert both strings to lowercase
    for (int i = 0; str1[i]; i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; str2[i]; i++)
    {
        str2[i] = tolower(str2[i]);
    }
    // Sort the strings
    char temp;
    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = i + 1; j < strlen(str1); j++)
        {
            if (str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for (int i = 0; i < strlen(str2); i++)
    {
        for (int j = i + 1; j < strlen(str2); j++)
        {
            if (str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    // Check if sorted strings are equal
    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are anagrams of each other.\n");
    }
    else
    {
        printf("The strings are not anagrams of each other.\n");
    }
    return 0;
}