#include<stdio.h>

int main(){

char *CanChange = "Hello World";
char CanNotchange[] = "Shrish Kedar ";
puts(CanNotchange);

printf("address of Hello World is %u\n",CanChange);
puts(CanChange);




CanChange = "Hello";


puts(CanChange);




}