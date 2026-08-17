#include<stdio.h>

int sum(int a,int b);



int main(){

    int a,b;
    printf("enter a");
    scanf("%d",&a);
     printf("enter b");
    scanf("%d",&b);
    
      sum(a,b);
    printf("the sum is %d\n");




}

int sum(int a,int b){
     return a + b ;
}