//write a function to print Hot or cold depends on the temp given by user

#include<stdio.h>

void printtemp();

int main(){
    printtemp();
    return 0;
}
void printtemp(){
    int temp;
    printf("Enter the temp:");
    scanf("%d",&temp);

    if(temp>=100){
        printf("Hot");
    }else{
        printf("Cold");
    }

}