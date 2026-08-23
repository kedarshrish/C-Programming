#include<stdio.h>


void readaary();


int main(){

    readaary();



}

void readaary(){

   char xchar[5] = {'a','x','x','x','b'};

   int i;
   int n = 0;
   
   for(i = 0 ; i<5 ; i++){

   xchar[i];
   if (xchar[i] == 'x' ){

    n = n + 1;
    

   
   }


   }
   printf("%d",n);
}