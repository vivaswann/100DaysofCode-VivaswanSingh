//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
int main() {
    FILE *file = fopen("input.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; 
    }

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    char ch;
    int inWord = 0; 

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; 
        } else {
            if (inWord == 0) {
                wordCount++;
                inWord = 1; 
            }
        }
    }

    if (charCount > 0) {
        lineCount++; 
    }

    fclose(file); 

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}