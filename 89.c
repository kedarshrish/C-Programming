#include<stdio.h>

struct student {
 
int roll;
float cgpa;
char name[100];


};


int main(){

    struct student s1 = {43 , 8.60 , "Shrish"};

    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);

    return 0;

}