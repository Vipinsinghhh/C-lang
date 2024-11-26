// write a program to finf if a character entered by user is upper case or not:

#include<stdio.h>

int main(){
    char ch;
    printf("enter the character");
    scanf("%C",&ch);

    if(ch>='A' && ch<='Z'){
        printf("upper case\n");
    } 
    else if(ch>='a' && ch<='z'){
        printf("lower case\n");
    }
    else{
        printf("Not english latter\n");
    }
    return 0;

}