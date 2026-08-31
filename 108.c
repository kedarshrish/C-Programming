#include<stdio.h>
#include<stdlib.h>


int main(){

float *ptr;

ptr = (float*)calloc(5,sizeof(float));

int i;
for( i = 0 ; i < 5 ; i++){

    printf("%f\n",ptr[i]);


}

}