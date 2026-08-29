#include<stdio.h>

int main(){

FILE *fptr;

fptr = fopen("Newhello.txt", "r");


int a;
int b;
int c;


 fscanf(fptr , "%d" ,&a);
 fscanf(fptr , "%d" ,&b);

c = a + b;



fptr = fopen("Newhello.txt", "w");

fprintf(fptr , "%d" , c);



}