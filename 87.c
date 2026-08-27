#include<stdio.h>
#include<string.h>


struct students{
  
    int roll;
    char name[100];
    float cgpa;

};


int main(){

struct students s1;
struct students s2;
struct students s3;

s1.roll = 43;
s2.roll = 44;
s3.roll = 45;

s1.cgpa = 8.45;
s2.cgpa = 8.34;
s3.cgpa = 9.20;

strcpy(s1.name,"Shrish");
strcpy(s2.name,"Aniket");
strcpy(s3.name,"Kshitij");



printf("names are %s , %s , %s ",s1.name , s2.name , s3.name);
printf("\n");
printf("roll numbers are %d %d %d", s1.roll , s2.roll , s3.roll);
printf("\n");
printf("cgpa are %f %f %f", s1.cgpa , s2.cgpa , s3.cgpa);



}