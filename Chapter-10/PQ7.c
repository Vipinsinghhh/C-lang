#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char string[100];

    fscanf(fptr, "%s", string);

    fclose(fptr);

    fptr = fopen("test.txt","w");

    int count =0;

   for(int i = 0; string[i] != '\0'; i++) {
        char ch = string[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    // Write count of vowels to file
    fprintf(fptr, "%d", count);

    fclose(fptr);
    return 0;
}