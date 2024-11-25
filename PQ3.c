#include<stdio.h>

int main(){
    int length, width;
    printf("enter the length");
    scanf("%d",&length);

    printf("enter the width");
    scanf("%d",&width);

    printf("perimeter of rectangle is %d",(length+width)*2);
    return 0;
}