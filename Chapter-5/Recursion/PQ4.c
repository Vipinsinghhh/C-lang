//write a function to calculate percentage of students from marks in science, maths, sanskrit.
//using third written type of function

#include<stdio.h>

int CalcPercentage(int science, int maths, int sanskrit);

int main(){
    int science=55;
    int maths=50;
    int sanskrit=56;

    printf("percentage is : %d",CalcPercentage(science,maths,sanskrit));

    return 0;
}
int CalcPercentage(int science, int maths, int sanskrit){
    int percentage = (science + maths + sanskrit)/3;
    return percentage;
}