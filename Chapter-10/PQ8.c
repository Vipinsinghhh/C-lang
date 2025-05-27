#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("studentdata.txt", "w");

    char name[100];
    int age;
    float CGPA;
    char cousre[100];

    printf("Enter student name:");
    scanf("%s",name);

    printf("enter student age:");
    scanf("%d",&age);

    printf("enter student CGPA:");
    scanf("%f",&CGPA);

    printf("enter student cousre:");
    scanf("%s",cousre);

    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", age);
    fprintf(fptr, "%f\n", CGPA);
    fprintf(fptr, "%s\n", cousre);

    fclose(fptr);
    return 0;
}