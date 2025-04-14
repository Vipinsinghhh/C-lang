#include <stdio.h>

int main() {
    char FirstName[] = "VIPIN";
    char LastName[] = "SINGH";

    for (int i = 0; FirstName[i] != '\0'; i++) {
        printf("%c", FirstName[i]);
    }

    printf(" "); // space between first and last name

    for (int i = 0; LastName[i] != '\0'; i++) {
        printf("%c", LastName[i]);
    }

    printf("\n"); // newline for cleaner output

    return 0;
}
