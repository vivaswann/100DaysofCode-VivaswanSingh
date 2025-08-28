//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main () {
    char character;

    printf("Input character: ");
    scanf(" %c", &character);

    if ((character== 'a') || (character== 'e') || (character== 'i') || (character== 'o') || (character== 'u') )
    printf ("Given character is a vowel");

    else 
    printf("Given character is a consonant");

    return 0;
}