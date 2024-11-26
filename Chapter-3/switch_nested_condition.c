#include <stdio.h>

int main() {
    int number;
    char letter;

    // Prompt the user for input
    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &number);

    // Outer switch for the number
    switch (number) {
        case 1:
            printf("You selected number 1.\n");
            printf("Now, enter a letter (A, B, or C): ");
            scanf(" %c", &letter);  // Notice the space before %c to consume any previous newline

            // Inner switch for the letter
            switch (letter) {
                case 'A':
                    printf("You selected letter A.\n");
                    break;
                case 'B':
                    printf("You selected letter B.\n");
                    break;
                case 'C':
                    printf("You selected letter C.\n");
                    break;
                default:
                    printf("Invalid letter.\n");
            }
            break;

        case 2:
            printf("You selected number 2.\n");
            printf("Now, enter a letter (A, B, or C): ");
            scanf(" %c", &letter);

            // Inner switch for the letter
            switch (letter) {
                case 'A':
                    printf("You selected letter A.\n");
                    break;
                case 'B':
                    printf("You selected letter B.\n");
                    break;
                case 'C':
                    printf("You selected letter C.\n");
                    break;
                default:
                    printf("Invalid letter.\n");
            }
            break;

        case 3:
            printf("You selected number 3.\n");
            printf("Now, enter a letter (A, B, or C): ");
            scanf(" %c", &letter);

            // Inner switch for the letter
            switch (letter) {
                case 'A':
                    printf("You selected letter A.\n");
                    break;
                case 'B':
                    printf("You selected letter B.\n");
                    break;
                case 'C':
                    printf("You selected letter C.\n");
                    break;
                default:
                    printf("Invalid letter.\n");
            }
            break;

        default:
            printf("Invalid number.\n");
    }

    return 0;
}
