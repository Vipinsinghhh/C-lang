#include <stdio.h>
#include <math.h>

void squareroot();

int main() {
    squareroot();
    return 0;
}
void squareroot(){
    double number;
    double result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Cannot calculate the square root of a negative number.\n");
    } else {
        result = sqrt(number);

        printf("The square root of %lf is %lf\n", number, result);
    }
}
