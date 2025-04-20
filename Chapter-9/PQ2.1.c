//%[^\n] this property is used in this code for taking input by user , this helps to take input with spaces

#include <stdio.h>
#include <string.h>

struct student {
    int houseno;
    int block;
    char city[100];
    char state[100]; 
};

void printaddress(struct student add[]);

int main() {
    struct student add[5];
    
    printf("First person's Address:\n");

    printf("Enter house number:\n");
    scanf("%d", &add[0].houseno);

    printf("Enter block number:\n");
    scanf("%d", &add[0].block);

    printf("Enter City:\n");
    scanf(" %[^\n]", add[0].city);      // By using this you can input the value with spaces in a string

    printf("Enter state:\n");
    scanf(" %[^\n]", add[0].state);

    printf("Second person's Address:\n");

    printf("Enter house number:\n");
    scanf("%d", &add[1].houseno);

    printf("Enter block number:\n");
    scanf("%d", &add[1].block);

    printf("Enter City:\n");
    scanf(" %[^\n]", add[1].city);

    printf("Enter state:\n");
    scanf(" %[^\n]", add[1].state);

    printf("Third person's Address:\n");
    
    printf("Enter house number:\n");
    scanf("%d", &add[2].houseno);

    printf("Enter block number:\n");
    scanf("%d", &add[2].block);

    printf("Enter City:\n");
    scanf(" %[^\n]", add[2].city);

    printf("Enter state:\n");
    scanf(" %[^\n]", add[2].state);

    printf("Fourth person's Address:\n");
    
    printf("Enter house number:\n");
    scanf("%d", &add[3].houseno);

    printf("Enter block number:\n");
    scanf("%d", &add[3].block);

    printf("Enter City:\n");
    scanf(" %[^\n]", add[3].city);

    printf("Enter state:\n");
    scanf(" %[^\n]", add[3].state);

    printf("Fifth person's Address:\n");
    
    printf("Enter house number:\n");
    scanf("%d", &add[4].houseno);

    printf("Enter block number:\n");
    scanf("%d", &add[4].block);

    printf("Enter City:\n");
    scanf(" %[^\n]", add[4].city);

    printf("Enter state:\n");
    scanf(" %[^\n]", add[4].state);
    
    printaddress(add);

    return 0;
}

void printaddress(struct student add[]) {

    printf("\nAll person's address is Here:\n");
    
    printf("\nFirst Person's address:\n House No. %d\n Block %d\n City: %s\n State: %s\n",
           add[0].houseno, add[0].block, add[0].city, add[0].state);

    printf("\nSecond Person's address:\n House No. %d\n Block %d\n City: %s\n State: %s\n",
           add[1].houseno, add[1].block, add[1].city, add[1].state);

    printf("\nThird Person's address:\n House No. %d\n Block %d\n City: %s\n State: %s\n",
           add[2].houseno, add[2].block, add[2].city, add[2].state);

    printf("\nFourth Person's address:\n House No. %d\n Block %d\n City: %s\n State: %s\n",
           add[3].houseno, add[3].block, add[3].city, add[3].state);

    printf("\nFifth Person's address:\n House No. %d\n Block %d\n City: %s\n State: %s\n",
           add[4].houseno, add[4].block, add[4].city, add[4].state);
}
