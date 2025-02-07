//case 2

#include<stdio.h>

int main(){
    float price = 100.00;
    float *ptr =&price;
    printf("Ptr =%u\n",ptr);
    ptr++;
    printf("Ptr =%u\n",ptr);
    ptr--;
    printf("Ptr =%u\n",ptr);
    return 0;
    
}