#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float cgpa;
    char course[50];
};

int main() {
    struct Student students[5];
    FILE *fptr = fopen("students.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("Course: ");
        scanf(" %[^\n]", students[i].course);
    }

    // Write header to file
    fprintf(fptr, "%-20s %-5s %-6s %-20s\n", "Name", "Age", "CGPA", "Course");
    fprintf(fptr, "-------------------------------------------------------------\n");

    // Write student data in table format
    for (int i = 0; i < 5; i++) {
        fprintf(fptr, "%-20s %-5d %-6.2f %-20s\n", 
                students[i].name, students[i].age, students[i].cgpa, students[i].course);
    }

    fclose(fptr);
    printf("Student data written to 'students.txt'.\n");

    return 0;
}
