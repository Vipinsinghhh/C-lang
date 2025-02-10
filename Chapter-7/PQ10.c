#include <stdio.h>

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int largest = arr[0];

    // Traverse the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest number
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
