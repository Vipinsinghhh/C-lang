#include<stdio.h>

int main(){
    int arr[10];
    printf("enter the no:");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]==2){
            count++;
        }
    }
    printf("%d\n",count);
    return  0;
}