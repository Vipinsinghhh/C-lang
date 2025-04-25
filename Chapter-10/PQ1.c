// check if a file exists before reading from it.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("newtext.txt", "r");
    if(fptr==NULL){
        printf("file doesn't exits\n");
    }else{
        fclose(fptr);
    }
    return 0;
}