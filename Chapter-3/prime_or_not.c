#include<Stdio.h>

int main(){
    int n;
    int count =0;

    printf("enter the number:");
    scanf("%d",&n);

    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count > 0){
        printf("not a prime number");
    }else{
        printf("prime");
    }
    return 0;
}