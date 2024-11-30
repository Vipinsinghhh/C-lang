#include<stdio.h>

void areaofsquare();
void areaofcircle();
void areaofrectangle();

int main(){
    areaofsquare();
    areaofcircle();
    areaofrectangle();
    return 0;
}

void areaofsquare(){
    int side;
    printf("enter the side of square : ");
    scanf("%d",&side);

    printf("%d\n",side*side);
    
}
void areaofcircle(){
    float radius;
    printf("enter the radius of circle : ");
    scanf("%f",&radius);
    
    printf("%f\n",3.14*radius*radius);
    
}
void areaofrectangle(){
    int length;
    int width;
    printf("enter the length of rectangle : ");
    scanf("%d",&length);
    printf("enter the breadth of rectangle: ");
    scanf("%d",&width);

    printf("%d\n",length*width);

}