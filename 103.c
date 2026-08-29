#include<stdio.h>

int main(){

FILE *fptr;

fptr = fopen("hello.txt","w");

char name[100];
int age;
float cgpa;

printf("enter name ");
scanf("%s",&name);

printf("enter age ");
scanf("%d",&age);

printf("enter cgpa ");
scanf("%f",&cgpa);

fprintf(fptr,"%s\n",name);
fprintf(fptr,"%d\n",age);
fprintf(fptr,"%f\n",cgpa);

fclose(fptr);


    
}