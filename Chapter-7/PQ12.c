// jab humko empty array ke last me value store krna ho

#include<stdio.h>

int main(){
    int arr[10];

    printf("Enter the element:");      
    scanf("%d",&arr[9]);

    printf("%d\n",arr[9]);

    return 0;
}

// jab humko full array ke last me value store karvana ho
#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  // Create an array with one extra space to accommodate the new element        

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    // Ask for the new element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insert the element at the end of the array
    arr[n] = element;  // Place the element at the end

    // Output the updated array
    printf("The array after inserting the element at the end is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

