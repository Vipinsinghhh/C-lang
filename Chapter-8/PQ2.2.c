// If you want to print a sentence then use fgets and puts function of string

#include<stdio.h>

int main(){
     
    char Fullname[100];

    printf("Enter your full name:");
    fgets (Fullname, 100, stdin);
    puts (Fullname);

    return 0;


}