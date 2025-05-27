// write a program to read a string from a file & output to the user
  
  #include<Stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char string[100];

    fscanf(fptr, "%s", string);

    printf("%s", string);

    fclose(fptr);

    return 0;
}