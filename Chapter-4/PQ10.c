//Calculate the sum of all numbers between 5 and 50(including 5 & 50)

#include<stdio.h>

int main(){
    int sum=0;
    for(int i=5; i<=50; i++){
        sum =sum+i;
        printf("%d\n",i);
    }
    printf("sum of 5 to 50 no is %d\n",sum);
}