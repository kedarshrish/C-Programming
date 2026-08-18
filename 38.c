#include<stdio.h>


float ctf(float c );


int main (){

    float c;
    printf("enter c :");
    scanf("%f",&c);

    printf("%f" , ctf(c));

    
}

float ctf(float c ){
    
   float  f ;
   


    f =  c*1.8 + 32;
    return f;
}