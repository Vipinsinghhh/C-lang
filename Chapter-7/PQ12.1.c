#include<stdio.h>

int main(){
    int n;
    printf("enter the quantity of an array :");
    scanf("%d",&n);

    int arr[n+1];

    printf("enter the elements of an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int NewElement;

    printf("enter the new element you want to store in last of an array :");
    scanf("%d",&NewElement);

    arr[n] =NewElement;

    printf("after inserting new element in an array the array is this:");
    for(int i = 0; i<n+1; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    return 0;
}