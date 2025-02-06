#include<stdio.h>

void Maxnum(int *a, int *b){
    if((*a) > (*b)){
        printf("naximum no is : %d",*a);
    }else{
        printf("naximum no is : %d",*b);
    }
}
int main(){
    int a;
    int b;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    Maxnum(&a,&b);
    return 0;
}