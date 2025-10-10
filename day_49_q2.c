//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Initials: ");
    for (int i = 0; name[i]; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            printf("%c. ", toupper(name[i]));
        }
    }
    printf("\n");
    // Print surname in full
    char *surname = strrchr(name, ' ');
    if (surname != NULL)
    {
        printf("Surname: %s\n", surname + 1);
    }
    return 0;
}