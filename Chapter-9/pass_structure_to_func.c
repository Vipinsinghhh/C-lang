#include<stdio.h>
#include<string.h>

struct student {
    int roll ;
    float cgpa;
    char name [100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1664, 9.2, "vipin"};

    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("student information:\n");
    printf("student name is:%s\n",s1.name);
    printf("student Roll no. is:%d\n",s1.roll);
    printf("student cgpa is:%f\n",s1.cgpa);
}