#include<stdio.h>

int main(){

    int array[2][10] ;

    int i;
    for ( i = 0 ; i < 10 ; i++){
 
    array[0][i] = 2*(i + 1);
    

    }
   
  int j;
    for ( j = 0 ; j < 10 ; j++){
 
    array[1][j] = 3*(j + 1);
    }
    

    int m,n;
    


    for(m = 0 ; m < 2 ; m++){

         for(n = 0 ; n< 10 ; n++){

            printf("%d\t",array[m][n]);
         }
         

         printf("\n");
    }



}