#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int Rollno;
    float cgpa;
};
int main(){
    struct student s1;
    strcpy(s1.name, "vipin singh");
    s1.Rollno = 3214;
    s1.cgpa=7.2;

    printf("Student name:%s\n",s1.name);
    printf("Student Roll number:%d\n",s1.Rollno);
    printf("Student cgpa is:%f\n",s1.cgpa);

    strcpy(s1.name, "shubham singh");
    s1.Rollno = 7412;
    s1.cgpa = 7.3;

    printf("Student name:%s\n",s1.name);
    printf("Student Roll number:%d\n",s1.Rollno);
    printf("Student cgpa is:%f\n",s1.cgpa);

    strcpy(s1.name,"shaswat sharma");
    s1.Rollno=7854;
    s1.cgpa=7.4;

    printf("Student name:%s\n",s1.name);
    printf("Student Roll number:%d\n",s1.Rollno);
    printf("Student cgpa is:%f\n",s1.cgpa);

    return 0;
}