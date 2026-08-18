#include<stdio.h>

int sumofn(int n );

int main(){

    int n ;
    printf("enter n :");
    scanf("%d",&n);

printf("%d \n", sumofn(n));// called function diirectly in printf();


  return 0;
}

int sumofn(int n ){
     
    if(n==1){

        return 1;
    }
    
    
    int  ansNm1 = sumofn(n-1);
    int ans  = sumofn(n-1 ) + n; // logic of returning value 
    return ans; // returning value 
}