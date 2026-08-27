#include<stdio.h>

struct student {

int roll;
float cgpa;
char name[100];


};

int main(){

    struct student s1 = {43 , 8.60 , "Shrish"};
    
    struct student *ptr;
    ptr = &s1;
   
    printf("Roll %d\n",s1.roll);
    printf("Roll %d\n", (*ptr).roll);
    
    printf("Roll %d\n", ptr->roll);
    printf("cgpa %f\n",ptr->cgpa);
    printf("name %s\n",ptr->name);



}