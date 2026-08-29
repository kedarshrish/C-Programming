#include<stdio.h>

int main(){

FILE *fptr;

fptr = fopen("oddnums.txt", "w");

int n;
printf("enter n :");
scanf("%d",&n);

int i;
for(i=1 ; i <=n ; i = i+2){


    fprintf(fptr ,"%d\n",i);

}

fclose(fptr);

}