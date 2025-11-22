//Write a program to take a string input. Change it to sentence case.   
#include <stdio.h>
#include <string.h>
int main ()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int n = strlen(str);
    
    if (n > 0 && str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - ('a' - 'A'); 
    }
    
    for (int i = 1; i < n; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); 
        } else if (str[i - 1] != ' ' && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); 
        }
    }
    
    printf("%s", str);
    
    return 0;
}