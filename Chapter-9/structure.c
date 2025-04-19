#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int rollno;
    float CGPA;
};

int main(){
    struct student s1;
    strcpy(s1.name,"vipin singh");
    s1.CGPA=7.12;
    s1.rollno=8321;

    printf("student name:%s\n",s1.name);
    printf("student roll number:%d\n",s1.rollno);
    printf("student CGPA is:%f",s1.CGPA);

    return 0;


}