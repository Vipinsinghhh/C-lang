//Ask the user to enter their first name and print it back to them


#include<stdio.h>

int main(){
     
    char FirstNmae[100];

    printf("Enter your first name:");
    scanf("%s",FirstNmae);
    printf("%s",FirstNmae);

    return 0;
}