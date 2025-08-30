//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main(){

int a;
    printf("Input a number between 1-7: ");
    scanf("%d", &a);

    switch (a) {

        case 1:
        printf("%d is Monday", a);
break;
        case 2:
        printf("%d is Tuesday", a);
break;
        case 3:
        printf("%d is Wednesday", a);
break;
        case 4:
        printf("%d is Thursday", a);
break;
        case 5:
        printf("%d is Friday", a);
break;
        case 6:
        printf("%d is Saturday", a);
break;
        case 7:
        printf("%d is Sunday", a);
break;

        default:
        printf("Follow the instructions :)");
}

    return 0;
}
