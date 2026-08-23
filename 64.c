#include<stdio.h>


int main(){
    int x;
    printf("enter x :");
    scanf("%d",&x);

    int arr[5] = {1,2,3,4,x};

    
    int i;
    for( i = 0 ; i < 5 ; i++){

        printf("%d\t",arr[i]);
    }

}

