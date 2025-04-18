// standard library function of string for copying the value of old string to the new string

#include<stdio.h>
#include<string.h>

int main(){

    char oldstr[]="oldstr";
    char newstr[]="newstr";
    strcpy(newstr,oldstr);
    puts(newstr);

    return 0;
}