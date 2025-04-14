// By using function 

#include<stdio.h>

void printstring(char arr[]);

int main(){
     char FirstName[] = "VIPIN";
     char LastName[] = "SINGH";

     printstring(FirstName);
     printstring(LastName);

     return 0;
}

void printstring(char arr[]){
    for( int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}