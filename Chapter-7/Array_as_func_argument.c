#include<stdio.h>

void printnumbers(int arr[],int n);

void printnumbers(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
    int main(){
        int arr[] = {1,6,12,24,36,100};
        printnumbers(arr,6);
        return 0;
    }
