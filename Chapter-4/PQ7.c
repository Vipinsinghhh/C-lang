// Print all the odd numbers from 5 to 50

#include<stdio.h>

int main(){
    for(int i=1; i<=50; i++){
        if(i%2==0){
            continue;     // By using continue statement
        }
        printf("%d\n",i);
    }
    return 0;
}
// OR
#include<stdio.h>

int main(){
    for(int i=1; i<=50; i++){
        if(i%2 != 0){
            break;          // By using break statement
        }
        printf("%d\n",i);
    }
    return 0;
}