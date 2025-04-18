// standard library function of string for comparing  the 2 string values.

#include<string.h>
#include<stdio.h>

int main(){
    char name[]="vipin";
    char mname[]="vipin";

    strcmp(name,mname);

    printf("%d", strcmp(name,mname));

    return 0;
}