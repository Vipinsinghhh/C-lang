#include<Stdio.h>
#include<string.h>

struct student{
    char name[100];
    int Rollno;
    float cgpa;
};

int main(){
    struct student ECE[100];
    strcpy(ECE[0].name,"vipin singh");
    ECE[0].Rollno = 8525;
    ECE[0].cgpa=7.2;

    printf("name = %s\n", ECE[0].name);

    strcpy(ECE[1].name,"vijay singh");
    ECE[1].Rollno = 8555;
    ECE[1].cgpa=7.9;

    printf("Roll no = %d\n", ECE[0].Rollno);

    return 0;

}