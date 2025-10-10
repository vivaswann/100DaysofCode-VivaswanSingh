//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str);
    // Reverse the entire string
    reverse(str, 0, strlen(str) - 1);
    // Reverse each word in the reversed string
    char *word = strtok(str, " ");
    while (word != NULL)
    {
        reverse(word, 0, strlen(word) - 1);
        word = strtok(NULL, " ");
    }
    printf("Reversed sentence: %s\n", str);
    return 0;
}