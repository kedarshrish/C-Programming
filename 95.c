#include<stdio.h>

struct complex{

int real;
int ima;


};


int main(){

    struct complex n1 = {4,5};
    struct complex*ptr;
    ptr = &n1;

    printf("%d + %di",ptr->real,ptr->ima);

  

}