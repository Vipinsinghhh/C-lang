//write a function to calculate percentage of students from marks in science, maths, sanskrit.
//using first written type of function

#include<stdio.h>

void percentage();

int main(){
    percentage();
    return 0;
}
void percentage(){
    int maths;
    int science;
    int sanskrit;
    printf("enter the marks of student :");
    scanf(" %d %d %d",&maths,&science,&sanskrit);

    int percentage = (maths + science + sanskrit)/3;
    printf("percentage is : %d",percentage);

}