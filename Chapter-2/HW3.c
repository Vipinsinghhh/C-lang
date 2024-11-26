// write a program to print the smallest number

#include<stdio.h>

int main(){
    int x;
    int y;
    int z;

    printf("Enter the numbers :");
    scanf("%d %d %d",&x,&y,&z);

    if(x<=y && x<=z){
        printf("smallest number is :%d\n",x);
    }else if("y<=x && y<=z"){
        printf("smallest number is :%d\n",y);
    }else{
        printf("smallest number is :%d\n",z);
    }
    return 0;
}