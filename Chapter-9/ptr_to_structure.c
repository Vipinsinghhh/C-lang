#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char nmae[100];

};

int main(){
    struct student s1 ={1664, 9.2, "vipin"};
    struct student *ptr = &s1;

    printf("student name is : %s",(*ptr).nmae);

    return 0;
}