//Remove all vowels from a string.
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
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            // Shift all characters to the left
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--; // Decrease length
            i--;  // Stay at the same position
        }
    }
    printf("String after removing vowels: %s\n", str);
    return 0;
}