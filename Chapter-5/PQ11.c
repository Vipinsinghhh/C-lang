#include<stdio.h>

void sum();

int main(){
    sum();
    return 0;
}
void sum(){
    int sum = 0;
    for(int i=1; i<=5; i++){
        sum=sum+i;
    }
    printf("sum is %d",sum);
}