//write a function to convert celsius to fahrenhiet
//using third written type of functon

#include<stdio.h>

float convertTemp(float celsius);

int main(){
    convertTemp(37);
    return 0;
}
float convertTemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    printf("far : %f",far);
    return far;
}
