#include<stdio.h>

int main(){
    int price[3];

    printf("Enter the price of item1 :");
    scanf("%d",&price[0]);

    printf("Enter the price of item2 :");
    scanf("%d",&price[1]);

    printf("Enter the price of item3 :");
    scanf("%d",&price[2]);

    printf("item1=%d\n item2=%d\n item3=%d\n",price[0]+(price[0]*18)/100,price[1]+(price[1]*18)/100,price[2]+(price[2]*18)/100);

    return 0;

}