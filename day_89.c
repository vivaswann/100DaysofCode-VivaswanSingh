//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum ExampleEnum {
    FIRST = 1,
    SECOND = 2,
    THIRD = 3
};

int main() {
    printf("FIRST: %d\n", FIRST);
    printf("SECOND: %d\n", SECOND);
    printf("THIRD: %d\n", THIRD);
    return 0;
}