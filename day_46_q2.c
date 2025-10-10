//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            for (int j = i + 1; j < len; j++)
            {
                if (str[j] == ch)
                {
                    printf("First repeating lowercase alphabet: %c\n", ch);
                    return 0;
                }
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}