#include<stdio.h>

void oddarray( );


int main(){

    oddarray();


    
 return 0;

}

void  oddarray( ){

 int array[5]= {1,2,3,4,5};
 int i;

 for (i= 0 ; i<5 ; i++){
 
   if (array[i]%2 == 1){

    printf("it is an odd number %d\n", array[i]);
   }

   else {
    printf("even %d\n",array[i]);
   }

 }



}