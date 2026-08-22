#include<stdio.h>

void printNumbers(int arr[] , int n);



int main(){

    int arr[] = {1 , 2 , 3 , 4 , 5};

    printNumbers(arr, 6);


}


void printNumbers(int arr[] , int n){
    
    int i;
    for(i = 0 ; i < n ; i++){

    printf("%d\t", arr[i]);
}

}