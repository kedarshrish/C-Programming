#include<stdio.h>

void revarray();
 
int main(){

    revarray();


    return 0;
}

void revarray(){

    int array[5] = {1,2,3,4,5,};

    int i;
    for(int i = 4 ; i >= 0; i-- ){

        printf("%d\t", array[i]);
    }
}