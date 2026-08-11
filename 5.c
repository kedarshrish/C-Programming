#include<stdio.h>

int main(){

int Number;
printf("Enter a Number");
scanf("%d",&Number);

if (Number >= 0){

    printf("Number is Positive \n");

    if (Number % 2 == 0){

        printf("Number is even \n ");

    }
    else {

        printf("Number is odd\n");
    }
    }



else {  
  
    printf("Numebr is negative\n");

     if(Number % 2 ==0){

        printf("Number is even\n");
     }

     else {

        printf("Number is odd \n");
     }

   
    
}



}