//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Months {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    for (enum Months month = JANUARY; month <= DECEMBER; month++) {
        switch (month) {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("Month %d has 31 days\n", month + 1);
                break;
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("Month %d has 30 days\n", month + 1);
                break;
            case FEBRUARY:
                printf("Month %d has 28 or 29 days\n", month + 1);
                break;
            default:
                printf("Invalid month\n");
        }
    }
    return 0;
}