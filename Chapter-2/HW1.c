// write a program to print the average of 3 numbers:

#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int avg;

    printf("Enter the number:");

    scanf("%d %d %d",&num1,&num2,&num3);

    avg=(num1+num2+num3)/3;

    printf("The average of 3 no. is : %d", avg);

    return 0;
}