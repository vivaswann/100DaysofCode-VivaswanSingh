//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main () {

    char a;

    printf("Input a character: ");
    scanf(" %c", &a);

    if (a >=48 && a<=57)
    printf("Character is a digit");

    else if (a >='A' && a<='Z')
    printf("Character is Uppercase");

    else if (a >=97 && a<=122)
    printf("Character is lowercase");

    else
    printf ("Character is special character");


    return 0;
}