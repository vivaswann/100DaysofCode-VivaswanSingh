//Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}