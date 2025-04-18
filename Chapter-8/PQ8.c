#include<stdio.h>
#include<string.h>

void check(char str[], char ch);

int main(){
    char str[]="helloworld";

    check(str,'l');

    return 0;
}

void check(char str[], char ch){
    for(int i=0;str[i]!=0;i++){
        if(str[i]==ch){
            printf("yes present");
            return;
        }
    }
    printf("not present");
}