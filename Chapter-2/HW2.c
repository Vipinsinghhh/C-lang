// write a program to check if given character is digit or not

#include<stdio.h>
#include<ctype.h>  //for isdigit()function

int main(){
    char ch;

    printf("Enter the character:");
    scanf("%c",&ch);

    if(isdigit(ch)){
        printf("%c is a digit \n",ch);
    }else{
        printf("%c is not a digit \n",ch);
    }
    return 0;
}