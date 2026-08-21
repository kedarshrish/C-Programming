#include<stdio.h>

void swapvar(int a , int b );


int main(){
    int a,b;
    swapvar(5,10);

    return 0;

}

void swapvar(int a , int b ){


    int t ;
    t = a ;
    a = b ;
    b = t ;

    printf(" a  = %d & b = %d ", a,b);

}