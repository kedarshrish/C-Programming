#include<stdio.h>
#include<string.h>


void salting();


int main(){

    salting();



}


void salting(){

char str[100];
char str2[] = "123";

printf("enter pasword : ");
scanf("%s", str);

 strcat(str,str2);

 puts(str);





}