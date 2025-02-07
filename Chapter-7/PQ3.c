//program to print all the letters in english alphabet using a pointer

#include<stdio.h>

int main(){
    char arr[26]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    char *ptr=&arr[0];

    for(int i=0;i<26;i++){
        printf("%c",arr[i]);
    }
    return 0;
}