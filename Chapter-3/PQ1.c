//write a program to check if a student passed or failed:-

#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks :");
    scanf("%d",&marks);

    if (marks<=30){
        printf("FAIL\n");
    }
    else if(marks>30&&marks<=100){
        printf("PASS\n");
    }
    else{
        printf("wrong marks");
    }
    return 0;
}

// program in ternary operators condition:-

#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);

    marks<=30?printf("FAIL\n"):printf("PASS\n");

    return 0;
}