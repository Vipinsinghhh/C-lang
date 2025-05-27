//make a program to input student information from a user & enter it to a file

#include<Stdio.h>

int main(){
    FILE *fptr;
    fptr= fopen("student.txt","w");

    char name[100];
    int age;
    float CGPA;

    printf("enter students name:");
    scanf("%s",name);

    printf("enter student age:");
    scanf("%d",&age);

    printf("enter student marks:");
    scanf("%f",&CGPA);

    fprintf(fptr,"Student name = %s\n", name);
    fprintf(fptr,"Student age = %d\n", age);
    fprintf(fptr,"Student CGPA = %f\n", CGPA);

    fclose(fptr);
    return 0;

}