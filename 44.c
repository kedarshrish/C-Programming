#include<stdio.h>
#include<math.h>

float powerfn(float m , float n );

int main(){
  
     float m , n ;

     
   printf("enter m ");
   scanf("%f",&m);

   printf("enter n ");
   scanf("%f",&n);
 


      

    printf(" the ans is %f", powerfn(m,n));

    return 0;

}

float powerfn(float m , float n ){


  
   
   return pow(m,n);
   
   


}