#include<stdio.h>

int main(){
    int marks[3];
    printf("Enter the phy marks:");
    scanf("%d",&marks[0]);

    printf("Enter the chem marks:");
    scanf("%d",&marks[1]);

    printf("Enter the math marks:");
    scanf("%d",&marks[2]);

    printf("phy=%d\n chem=%d\n math=%d\n",marks[0],marks[1],marks[2]);

    return 0;
}