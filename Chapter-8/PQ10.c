#include <stdio.h>


int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces

    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase (between 'a' and 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase using ASCII value
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
