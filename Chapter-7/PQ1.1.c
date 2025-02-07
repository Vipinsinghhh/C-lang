#include<stdio.h>

int main(){
    float price[3];

    printf("Enter the price of item1 :");
    scanf("%f",&price[0]);

    printf("Enter the price of item2 :");
    scanf("%f",&price[1]);

    printf("Enter the price of item3 :");
    scanf("%f",&price[2]);

    printf("Total price of item1=%f\n",price[0]+(price[0]*18)/100);
    
    printf("Total price of item2=%f\n",price[1]+(price[1]*18)/100);
    
    printf("Total price of item3=%f\n",price[2]+(price[2]*18)/100);

    return 0;

}