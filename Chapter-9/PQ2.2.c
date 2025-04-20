// by using loops

#include <stdio.h>
#include <string.h>

struct student {
    int houseno;
    int block;
    char city[100];
    char state[100]; 
};

void printaddress(struct student add[], int n);

int main() {
    struct student add[5];

    for (int i = 0; i < 5; i++) {
        printf("\nPerson %d's Address:\n", i + 1);

        printf("Enter house number: ");
        scanf("%d", &add[i].houseno);

        printf("Enter block number: ");
        scanf("%d", &add[i].block);

        printf("Enter City: ");
        scanf("%s", add[i].city);

        printf("Enter State: ");
        scanf("%s", add[i].state);
    }

    printaddress(add, 5);

    return 0;
}

void printaddress(struct student add[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nPerson %d's Address:\n", i + 1);
        printf("House No.: %d\n", add[i].houseno);
        printf("Block: %d\n", add[i].block);
        printf("City: %s\n", add[i].city);
        printf("State: %s\n", add[i].state);
    }
}
