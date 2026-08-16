#include<stdio.h>

int main(){

int n;
printf("enter n: ");
scanf("%d",&n);
int prime;


for(int i = 2 ;  i < n ; i++){

    prime = n%i;
    if(prime == 0){

        printf("not a prime no.");
    }

    else {

        printf("prime no ");
    }

    return 0;
}

}