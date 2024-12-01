//write a function to convert celsius to fahrenhiet
//using second written type of functon

#include<stdio.h>

void convertTemp(float celsius);

int main(){
    convertTemp(37);
    return 0;
}
void convertTemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    printf("far is : %f",far);
}