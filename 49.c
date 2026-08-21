#include<stdio.h>

int main(){

   int marks[3];

   printf("enter marks of physics ");
   scanf("%d",&marks[0]);

   printf("enter marks of chemisty ");
   scanf("%d",&marks[1]);


   printf("enter marks of maths ");
   scanf("%d",&marks[2]);

    printf("phy = %d , chem = %d , math = %d", marks[0] , marks[1], marks[2]);
}