#include<stdio.h>

struct student{

    int roll;
    float cgpa;
    char name[100];

};

void printinfo(struct student s1);


int main(){

    struct student s1 = {43 , 8.60 , "Shrish"};

    printinfo(s1);



}

void printinfo(struct student s1){

  printf("%d\n", s1.roll);
  printf("%f\n",s1.cgpa);
  printf("%s\n",s1.name);

} 