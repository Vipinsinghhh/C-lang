// Special function for reading and writing a character
// fgetc(fptr)
//fputc('A',fptr)

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","w");

    printf("%c\n",fputc('A',fptr));
    printf("%c\n",fputc('P',fptr));
    printf("%c\n",fputc('P',fptr));
    printf("%c\n",fputc('L',fptr));
    printf("%c\n",fputc('E',fptr));

    fclose(fptr);

    return 0;

}