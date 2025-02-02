#include <stdio.h>
#include <math.h>

void squareroot();

int main() {
    squareroot();
    return 0;
}
void squareroot(){
    int number;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Cannot calculate the square root of a negative number.\n");
    } else {
        result = sqrt(number);

        printf("The square root of %d is %d\n", number, result);
    }
}
