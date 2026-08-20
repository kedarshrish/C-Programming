#include<stdio.h>

void  hotcold();

int main(){

    printf("the temprature is ");
     hotcold();



}

void  hotcold( ){

   int n;
   scanf("%d",&n);

   if(n<= 16){

    printf("cold");
   }

   else {

    printf("hot ");
   }


}