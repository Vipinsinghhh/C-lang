#include<stdio.h>

int main(){
    char star = '*';
    char *ptr = &star;
    printf("Ptr =%u\n",ptr);
    ptr++;
    printf("Ptr =%u\n",ptr);
    ptr--;
    printf("Ptr =%u\n",ptr);
    return 0;
}