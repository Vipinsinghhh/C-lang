// changes to paramters in function dont change the values in calling function

#include<stdio.h>

void calculateprice(float value);

int main(){
    float value =100.0;
    calculateprice(value);
    printf("value is : %f\n",value);
    return 0;
}
void calculateprice(float value){
    value = value+(0.18*value);
    printf("final price is : %f\n",value);
}