//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int count) {
    int highest_index = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }
    return students[highest_index];
}