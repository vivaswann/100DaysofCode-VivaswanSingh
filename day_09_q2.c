//Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main()
{

    int S1, S2, S3, S4, S5;
    int per = 0, choice;

    printf("Enter marks of S1,S2,S3,S4,S5: ");
    scanf("%d %d %d %d %d", &S1, &S2, &S3, &S4, &S5);

    per = ((S1 + S2 + S3 + S4 + S5) / 5);
    choice = per/10;

    switch (choice)
    {
    case 10:
    printf("Either you're a genius or have no social life");
        break;

    case 9:
        printf("Grade A");
        break;

    case 8:
        printf("Grade B");
        break;

    case 7:
        printf("Grade C");
        break;

    case 6:
        printf("Grade D");
        break;

    case 5:
        printf("Grade F");
        break;    

    default:
    printf("Out of Range");
        break;
    }
}