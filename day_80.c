//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
int main() {
    FILE *file = fopen("students.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1; 
    }

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char name[100];
        int rollNumber;
        float marks;

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name); 

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &rollNumber);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, rollNumber, marks); 
    }

    fclose(file); 

    file = fopen("students.txt", "r"); 
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1; 
    }

    printf("\nStudent Records:\n");
    char name[100];
    int rollNumber;
    float marks;

    while (fscanf(file, "%s %d %f", name, &rollNumber, &marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", name, rollNumber, marks);
    }

    fclose(file); 

    return 0;
}