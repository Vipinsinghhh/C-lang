#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    printf("%f\n",pow(n,2));  //%f used beacause pow doubles the value in double datatype

    return 0;
}