#include<stdio.h>
// declaration
void printTable(int n);



int main(){
    
    int n;
    printf("enter n:");
    scanf("%d",&n);

    // call
    printTable( n );



}

// definition
void printTable(int n ){


    for(int i = 1 ; i<= 10 ; i++){
        
         printf("%d\n",n*i) ;
        
    }
}