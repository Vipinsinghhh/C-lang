#include <stdio.h>

int main() {
    char alphabet = 'A'; // Starting character for the alphabet
    char *ptr = &alphabet; // Pointer to the variable 'alphabet'
    
    // Loop through all letters of the English alphabet
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr); // Dereference the pointer to get the letter
        (*ptr)++; // Move to the next letter
    }

    printf("\n"); // Print a new line at the end
    return 0;
}
