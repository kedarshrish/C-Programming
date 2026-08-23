#include<stdio.h>

int main(){

int arr[5] = {12,56,6,89,45};

int largest = arr[0];


int i;
for(i= 1 ; i<5 ; i++){

 if (largest < arr[i]){


    largest = arr[i];

 }


}

printf("the largest value in array is %d",largest);

}