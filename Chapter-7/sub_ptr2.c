//we can subtract one pointer from another

#include<stdio.h>

int main(){
    int age1 =55;
    int age2 =15;
    int *ptr1 =&age1;
    printf("Ptr =%u\n",ptr1);
    int *ptr2 =&age2;
    printf("Ptr =%u\n",ptr2);

    printf("subtraction =%d\n",ptr1-ptr2);
   
    return 0;
}