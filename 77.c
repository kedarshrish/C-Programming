#include<stdio.h>
#include<string.h>


int main(){


char str[100];
printf("enter password : ");
scanf("%s",str);

char str2[] = "123";

strcat(str,str2);

printf("password after salting : ");
puts(str);



}