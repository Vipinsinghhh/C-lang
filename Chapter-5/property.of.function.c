// A function gets called directly or indirectly from main

#include<stdio.h>

void printnamste(){
    printf("namste\n");
    printf("bomjour\n");
}

void printbonjour(){
    printf("bonjour\n");
}

int main(){
    char ch;
    printf("If you are indian enter i & if you are french enter f:");
    scanf("%c",&ch);

    printnamste();
    return 0;
}
