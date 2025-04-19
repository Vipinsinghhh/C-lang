#include<stdio.h>
#include<string.h>

void replace(char str[]){
    char finalstr[100];
    int i;
    for( i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            finalstr[i]= str[i]-32;
    }else{
        finalstr[i]=str[i]; 
    }
}
    finalstr[i]='\0';

    printf("replaced string is:%s\n",finalstr);
}

int main(){
    char str[100];

    printf("enter the string:");
    fgets(str,100,stdin);

    replace(str);

    return 0;
}