// #include<stdio.h>

// int main(){
// int n;
// printf("enter value of n ");
// scanf("%d",&n);

// for (int i = n ; i>=1 ; i--){
   
//     if(i>1){

//         continue;
//     }

//     printf("%d\n", n*(n-i));
// }

// return 0;
// }

#include<stdio.h>

int main(){

     int n;
     printf("enter n:");
     scanf("%d",&n);

     int fact = 1;

     for (int i = 1 ; i<= n ; i++){

        fact = fact * i ;

     }

     printf("factorial is %d \n",fact);

     return 0;
    }