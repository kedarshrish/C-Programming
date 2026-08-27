#include<stdio.h>
#include<string.h>


struct student{

    char name[100];
    int roll;
    float cgpa;

};


int main(){

    struct student ECE[100];

    ECE[0].roll = 43;
    ECE[0].cgpa = 8.50;
    strcpy( ECE[0].name,"Shrish");

    ECE[1].roll = 44;

    printf("%s\n",ECE[0].name);
      printf("%d\n",ECE[0].roll);
        printf("%f\n",ECE[0].cgpa);

printf("%d\n",ECE[1].roll);


}