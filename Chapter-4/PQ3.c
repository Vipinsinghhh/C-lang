// Print the table of a number input by the user

#include<stdio.h>

int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
    return 0;
}

// by using while loop

#include<stdio.h>

int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int i=1;
    while(i<=10){
        printf("%d\n",n*i);
        i++;
    }
    
    return 0;
}