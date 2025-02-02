#include <stdio.h>

// Function to find the sum of digits of a number
int sum_of_digits(int number) {
    int sum = 0;
    
    // Extract digits and sum them
    while (number != 0) {
        sum = sum + number % 10; // Add the last digit to sum
        number = number / 10;        // Remove the last digit
    }
    
    return sum;
}

int main() {
    int num;
    
    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find the sum of digits and display it
    printf("The sum of digits of %d is %d\n", num, sum_of_digits(num));
    
    return 0;
}
