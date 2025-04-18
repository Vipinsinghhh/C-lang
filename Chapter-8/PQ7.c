// Write a function to count the occuurance of vowels in a string.

#include<stdio.h>
#include<string.h>

void vowel( char str[]);

int main(){
    char str[]="vipin singh";

    vowel(str);

    return 0;
}

void vowel( char str[]){
    int count =0;
    for (int i=0;str[i]!='\0';i++){
        if(str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u'){
            count++;
        }
    }
    printf("%d",count);
}

