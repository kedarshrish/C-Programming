#include<stdio.h>

int main(){

 int marks[2][3];

 marks[0][0] = 98;
 marks[0][1] = 97;
 marks[0][2] = 96;


 marks[1][0] = 94;
 marks[1][1] = 95;
 marks[1][2] = 93;

  int i,j ;

 for( i = 0 ; i <  2 ; i++){


     for(j = 0 ; j < 3 ; j++){



        printf("%d\t", marks[i][j]);

     }

    printf("\n");

 }

   return 0;


}