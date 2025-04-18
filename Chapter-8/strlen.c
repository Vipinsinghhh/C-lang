// standard library function of string for counting number of characters of  stored in string excluding '\0'.

#include<stdio.h>
#include<string.h>

int main(){
    char name[]="vipin";
    int length=strlen(name);
    printf("length is:%d",length);
    return 0;
}