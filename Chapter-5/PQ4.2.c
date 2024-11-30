#include<stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

int main(){
    float a = 10.0;
    float b = 5.0;
    printf("Area of rectangle is : %f\n",rectanglearea(a,b)); 

    float side = 5;
    printf("Area of square is : %f\n",squarearea(side));

    float rad = 5;
    printf("Area of circle is: %f\n",circlearea(rad));

    return 0;
    
}
float squarearea(float side){
    return side*side;
}
float circlearea(float rad){
    return 3.14*rad*rad;
}
float rectanglearea(float a, float b){
    return a*b;
}