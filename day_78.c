//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file = fopen("input.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    int vowelCount = 0;
    int consonantCount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) { 
            char lowerCh = tolower(ch); 
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    fclose(file); 

    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}