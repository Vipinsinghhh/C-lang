// will the adress output be same?

// call by value

#include<stdio.h>

void printAddress(int n);

int main(){
    int n=4;
    printf("%p\n",&n);
    printAddress(n);
    return 0;
}
void printAddress(int n){
    printf("%p\n",&n);
}
//call by reference

#include<stdio.h>

void printAddress(int *n);

int main(){
    int n=4;
    printAddress(&n);
    printf("%p\n",&n);
    return 0;
}
void printAddress(int *n){
    printf("%p\n",&n);
}