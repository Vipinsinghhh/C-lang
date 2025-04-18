// if we using array notation at the time of initialization of string we are not able to changne the value of string in the middle of the code


#include<stdio.h>

int main(){

    char channotchange[]="Hello World";
    puts(channotchange);
    //channotchange="hello";    there we are facing error means value of string is not reinitialised

    return 0;
}