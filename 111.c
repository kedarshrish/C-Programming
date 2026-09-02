#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;

    ptr = (int*)calloc(5,sizeof(int));
    
    int i;
    for(i = 0 ; i < 5 ; i++){

        printf("enter value at indexx %d\n",i);
        scanf("%d",&ptr[i]);

      
    }


    ptr = realloc(ptr,8);
    
    printf("enter 8 numbers ");
    for(i = 0 ; i < 8 ; i++){

         printf("enter value at indexx %d\n",i);
        scanf("%d",&ptr[i]);
    }

    
}