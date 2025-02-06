// for printing adress these format specifiers are used

#include<stdio.h>

int main(){
    int age =22;
    int *ptr = &age;

    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);// for printng the pointers personal adress

    return 0;
}