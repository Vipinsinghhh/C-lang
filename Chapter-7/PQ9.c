#include<stdio.h>

int main(){
    int arr[10];
    printf("enter the no:");
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    scanf("%d",&arr[5]);
    scanf("%d",&arr[6]);
    scanf("%d",&arr[7]);
    scanf("%d",&arr[8]);
    scanf("%d",&arr[9]);
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]==2){
            count++;
        }
    }
    printf("%d\n",count);
    return  0;
}