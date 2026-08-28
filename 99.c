#include<stdio.h>

int main(){

FILE *fptr;

fptr = fopen("hello.txt" , "r");

int a;
fscanf(fptr , "%d" ,&a);
printf("%d\t",a);

fscanf(fptr , "%d" ,&a);
printf("%d\t",a);


fscanf(fptr , "%d" ,&a);
printf("%d\t",a);





fclose(fptr);



}