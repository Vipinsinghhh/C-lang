// write a program to check if a no. is odd or even.

#include<stdio.h>

int main(){
    int x;
    printf("enter the no:");
    scanf("%d ",&x);
    printf("%d\n",x % 2 ==0);
    return 0;
}