//program to print the elemets of an array in reverse order.

#include<stdio.h>

void reversenumbers(int arr[], int n);

void reversenumbers(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    reversenumbers(arr,6);
    return 0;
}