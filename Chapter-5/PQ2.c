#include<stdio.h>

void printnamste(){
    printf("namste\n");
}

void printbonjour(){
    printf("bonjour\n");
}

int main(){
    char ch;
    printf("If you are indian enter i & if you are french enter f:");
    scanf("%c",&ch);

    if(ch == 'i'){
        printnamste();
    }else {
        printbonjour();
    }
}
