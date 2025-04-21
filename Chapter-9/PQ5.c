#include<stdio.h>
#include<string.h>

typedef struct bankaccount{
    int accountno;
    char name[100];
}acc;

int main(){
     acc acc1;

     printf("enter the bank details of customer 1:\n");
     printf("enter account number:\n");
     scanf("%d",&acc1.accountno);

     printf("enter name:\n");
     scanf("%s",acc1.name);

     acc acc2;

     printf("enter the bank details of customer 2:\n");
     printf("enter account number:\n");
     scanf("%d",&acc2.accountno);

     printf("enter name:\n");
     scanf("%s",acc2.name);

     printf("details of customer 1 is :\n");
     printf("bank account : %d\n",acc1.accountno);
     printf("bank account : %s\n",acc1.name);

     printf("details of customer 2 is :\n");
     printf("bank account : %d\n",acc2.accountno);
     printf("bank account : %s\n",acc2.name);

     return 0;
}