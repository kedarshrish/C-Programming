#include<stdio.h>

int main(){

    int aadhar[5];

    int *ptr = &aadhar[0];
    int i;

    for(i = 0 ; i < 5 ; i++){
    printf("enter aadhar at this index  %d\n", i );
    scanf("%d", (ptr + i) );

    }
    

    for(i = 0 ; i < 5 ; i++){
    printf("the aadhar is %d\n",  *(ptr + i ));

    }

 return 0;
}