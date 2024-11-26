//print 1(true) or 0(false) for following statements:-

// a. If its sunday and its snowing -> True
#include<stdio.h>

int main(){
    int itssunday = 1;
    int itssnowing = 1;
    printf("%d",itssunday && itssnowing);
    return 0;

}

// if its monday or its raining -> True
#include<stdio.h>

int main(){
    int itsmonday = 1;
    int itsraining = 0;
    printf("%d",itsmonday || itsraining);
    return 0;
}

// if a number is greater than 9 and less than 100 -> True
#include<stdio.h>

int main(){
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    printf("%d",x>9 &&  x<100);
    return 0;

}