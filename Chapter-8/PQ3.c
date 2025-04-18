// make a program that inputs users name and print its length using loops

#include<stdio.h>

int main(){

    char name[100];
    fgets(name,100,stdin);

    for(int i=0; name[i]!= '\0';i++ ){
        printf("%c",name[i]);
    }

    int count =0;

    for(int i=0;name[i]!=0;i++){
        count++;
    }

    printf("%d",count-1);

    return 0;
}