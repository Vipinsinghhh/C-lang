//Find the salted form of password entered by user if the salt is "123" & added at the end. 

#include<stdio.h>
#include<string.h>

void saltedpass(char pass[]);

int main(){
    char password[100];

    scanf("%s",password);

    saltedpass(password);

    return 0;
}

void saltedpass(char pass[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,pass);
    strcat(newpass,salt);

    puts(newpass);

}
