// write a function named slice, which takes a string & returns a sliced string from index n to m.

#include<stdio.h>
#include<string.h>
void slicedstring(char str[] , int n, int m);

int main(){
    char str[]="helloworld";

    slicedstring(str,3,6);
    
    return 0;
}

void slicedstring(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for(int i=n;i<=m;i++){
        newstr[j]= str[i];
        j++;
    }
    newstr[j]='\0';
    puts(newstr);


}
    
