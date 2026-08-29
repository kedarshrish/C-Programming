#include<stdio.h>

int main(){

FILE *fptr;

fptr = fopen("hello.txt", "r");

int a;
fscanf(fptr,"%d",&a);
printf("%d",a);

fscanf(fptr,"%d",&a);
printf("%d",a);

fscanf(fptr,"%d",&a);
printf("%d",a);

fscanf(fptr,"%d",&a);
printf("%d",a);

fscanf(fptr,"%d",&a);
printf("%d",a);

fclose(fptr);


}