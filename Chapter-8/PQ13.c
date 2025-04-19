#include<stdio.h>
#include<string.h>

void removeblank(char str[]){
    char finalstr[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            finalstr[j++] = str[i];
        }
    }
    finalstr[j]='\0';

    printf("string without blank spaces is:%s",finalstr);
}
int main(){
    char str[100];

    printf("enter a string:");
    fgets(str,100,stdin);
    removeblank(str);

    return 0;
}