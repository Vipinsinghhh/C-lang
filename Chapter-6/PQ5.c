#include<stdio.h>

void Dowork(int a , int b, int *sum, int *prod, int *avg);

int main (){
    int a;
    int b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("the value of a =%d & b=%d\n",a,b);
    int sum;
    int prod;
    int avg;
    Dowork(a,b,&sum,&prod,&avg);
    printf("sum = %d\n prod = %d\n avg = %d\n",sum , prod, avg);
    

    return 0;
}
void Dowork(int a, int b, int *sum, int *prod, int *avg){
     *sum = a + b;
     *prod = a * b;
     *avg = (a + b)/2;
    
}