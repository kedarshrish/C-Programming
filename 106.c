#include<stdio.h>
#include<stdlib.h>

int main(){

int *ptr;

ptr = (int*)malloc(5 *sizeof(int));

ptr[0]  = 1;
ptr[1]  = 7;
ptr[2]  = 3;
ptr[3]  = 4;
ptr[4]  = 8;

int i;
for(i = 0 ; i < 5 ; i++){

    printf("%d\n",ptr[i]);

}

}