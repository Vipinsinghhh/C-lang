// print the sum of first n natural number 

#include<stdio.h>

int main (){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int sum =0;
    for(int i=1;i<=n;i++){   //by using for loop
        sum=sum+i;
    }
    printf("sum is %d",sum);

    return 0; 
}

// also print the no. in reverse
#include<stdio.h>

int main (){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int sum =0;
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum is %d",sum);

    return 0; 
}
