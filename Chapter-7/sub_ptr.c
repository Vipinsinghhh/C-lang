//we can subtract one pointer from another

#include<stdio.h>

int main(){
    int age1 =55;
    int age2 =15;
    int *ptr1 =&age1;
    printf("Ptr =%d\n",*ptr1);
    int *ptr2 =&age2;
    printf("Ptr =%d\n",*ptr2);

    int subtract = (*ptr1)-(*ptr2);
    printf("Ptr =%d\n",subtract);
   
    return 0;
}