#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;

    printf("enter n ");
    scanf("%d",&n);


int *ptr;
ptr = (int*)malloc(n*sizeof(int));

int i;
for(i = 0 ; i < n ; i++){
  
    printf("%d\n",ptr[i]);
    
}

free(ptr);

printf("\n");


ptr = (int*)malloc(2*sizeof(int));

for(i = 0 ; i < 2 ; i++){
  
    printf("%d\n",ptr[i]);
    
}

}