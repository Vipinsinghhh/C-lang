#include <stdio.h>

// Function to find the maximum number using pointers
int findMax(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function using pointers
    int max = findMax(&num1, &num2);

    // Output the result
    printf("The maximum number is: %d\n", max);

    return 0;
}
