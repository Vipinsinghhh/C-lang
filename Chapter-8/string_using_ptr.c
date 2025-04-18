// if we use pointer in string for storing the value we can able to reinitialise our value in the middle of code 

#include<stdio.h>

int main(){

    char *canchange = "Hello world";
    puts(canchange);
    canchange="Hello";
    puts( canchange);

    return 0;

}


