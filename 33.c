#include<stdio.h>

float gst(float value);

int main(){
    
     
     float value = 100;
     value = gst(value);
     printf("amount with gst is %f",value);

    return 0;
}

float gst(float value){

    return value + (0.18*value);
    printf("%d the value is \n",value);
}