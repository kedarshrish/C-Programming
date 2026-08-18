#include<stdio.h>

int fib(int n );

int main(){
    int n;

    printf("nth term of fibonnachi is %d",fib(6));


}

int fib(int n){

    

        if (n== 0){

            return 0 ;
        }

        if (n == 1){

            return 1 ;
        }

        
     

     
   int s = fib(n-1) + fib(n-2);
//    printf("the fibbonachi series is %d\n", n ,s );
   return s ;

}
