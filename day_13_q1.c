//Write a program to implement a basic calculator using switch-case for +, -, *, /, %. (only integers not float)

#include <stdio.h>

int main () {

    int num1, num2, sum, differnce, multi, div, mod;
    char op;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, % ): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
    sum = num1+num2;
       printf("sum= %d", sum);
        break;

        case '-':
    differnce = num1-num2;
       printf("differnce= %d", differnce);
        break;

        case '*':
    multi = num1*num2;
       printf("multi= %d", multi);
        break;

        case '/':
        if (num2==0)
        {
            printf("ERROR");
        }
        
    div = num1/num2;

       printf("div= %d", div);
        break;

        case '%':
    mod = num1%num2;
       printf("mod= %d", mod);
        break;

        default:
        printf("Error");
}
}