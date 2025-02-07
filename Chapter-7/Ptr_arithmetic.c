#include<stdio.h>

int main(){
    int age =22;
    int *ptr =&age;
    printf("Ptr =%u\n",ptr);
    ptr++;
    printf("Ptr =%u\n",ptr);
    ptr--;
    printf("Ptr =%u\n",ptr);
    return 0;
}