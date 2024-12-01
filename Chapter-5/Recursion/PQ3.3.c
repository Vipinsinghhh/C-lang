// write a function to convert celsius to fahrenhiet 
//using first written type of function

#include<stdio.h>

void convertTemp();

int main(){
    convertTemp();
    return 0;
}
void convertTemp(){
    float far;
    float celsius;
    printf("enter the degree :");
    scanf("%f",&celsius);

    far = celsius*(9.0/5.0)+32;
    printf("far is :%f",far);
    
}