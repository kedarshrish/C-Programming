#include<stdio.h>
#include<string.h>


typedef struct student{

    int roll;
    float cgpa;
    char name[100];

} stu;


int main(){

    stu s1;
    s1.roll = 43;
    s1.cgpa = 8.70;
    strcpy(s1.name, "Shrish");

    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);
}