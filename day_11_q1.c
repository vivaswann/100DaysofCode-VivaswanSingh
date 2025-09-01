//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main () {
int m;

    printf("Number between 1-12: ");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
       printf("January, 31 days");
        break;

    case 2:
       printf("Feburary, 28/29 days");
        break;
        
    case 3:
       printf("March, 31 days");
        break;  
    
    case 4:
       printf("April, 30 days");
        break;

    case 5:
       printf("May, 31 days");
        break;

    case 6:
       printf("June, 30 days");
        break;

    case 7:
       printf("July, 31 days");
        break;

    case 8:
       printf("August, 30 days");
        break;

    case 9:
       printf("September, 31 days");
        break;

    case 10:
       printf("October, 30 days");
        break;

    case 11:
       printf("November, 31 days");
        break;

    case 12:
       printf("December, 31 days");
        break;
    
    default:
    printf("Follow the instructions");
        break;
    }
}