#include<stdio.h>

int main(){
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    age>18?printf("adult\n"):printf("they are not adult\n");

    return 0;
}