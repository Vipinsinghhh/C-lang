//write a function to reverse an array

#include<stdio.h>

void reverse(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    reverse(arr,6);
    return 0;
}