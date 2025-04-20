// used to create alise or nickname of datatypes.

#include<stdio.h>
#include<string.h>

typedef struct computerenginneringstudent{
    int roll;
    float cgpa;
    char name[100];
}coe;

int main(){
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name,"vipin");

    printf("student name is :%s",s1.name);

    return 0;
}