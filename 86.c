#include<stdio.h>
#include<string.h>


struct student{

char name[100];
int roll;
float cgpa;

};


int main(){

struct student s1;

strcpy(s1.name,"Shrish");
s1.roll = 43;
s1.cgpa = 8.45;

printf("name %s\n",s1.name);
printf("roll no. %d\n",s1.roll);
printf("cgpa %f\n",s1.cgpa);

}