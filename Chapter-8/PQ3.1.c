//// make a program that inputs users name and print its length using function.

#include<stdio.h>

void printlength(char str[]);

int main(){

    char name[100];

    fgets(name,100,stdin);

    printlength(name);

    return 0;


}

void printlength(char str[]){
    int count =0;

    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count-1);
}