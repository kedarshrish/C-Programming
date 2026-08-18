#include<stdio.h>

int fact(int n );

int main(){

    int n;
    printf("enter n ");
    scanf("%d",&n);

    printf("the factorial is %d \n",  fact(n));

}

int fact (int n){


    if(n == 1 ){

        return 1;

    }

    int ans =  fact(n-1 )*n ;
    return ans;


}
