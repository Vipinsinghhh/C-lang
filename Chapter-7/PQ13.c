#include<stdio.h>

int main(){
    int arr[5];
    printf("enter the numbers:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    int largest = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The Largest number of the given array is : %d",largest);

    return 0;
}