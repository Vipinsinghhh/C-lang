//write a program to give grades to a student:

#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);

    if(marks<30&&marks>21){
        printf("C\n");
    }
    else if(marks>=30&&marks<70){
        printf("B\n");
    }
    else if(marks>=70&&marks<90){
        printf("A\n");
    }
    else if(marks>=90&&marks<=100){
        printf("A+\n");
    }
    else if(marks>100){
        printf("please enter the marks under 100\n");
    }
    else{
        printf("FAIL\n");
    }

}