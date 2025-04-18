// standard library function of string for concatinate the 2 string values"

#include<stdio.h>
#include<string.h>

int main(){
    char firstname[]="vipin ";
    char lastname[]="singh";
    strcat(firstname,lastname);
    puts(firstname);
    
    return 0;
}