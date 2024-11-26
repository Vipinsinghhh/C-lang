//write a program to check if the given number is a natural number

#include<stdio.h>

int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);

    if(number>=1 && number<='∞'){
        printf("natural number\n");
    }
    else{
        printf("not a natural number\n");
    }
    return 0;
}
