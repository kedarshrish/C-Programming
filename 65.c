#include<stdio.h>

int main(){



int n,last;
printf("enter n :");
scanf("%d",&n);

int arr[n];

int i;
for(i = 0 ; i < n ; i++){
printf("enter elemnt at index %d",i);
scanf("%d",arr[i]);

printf("enter last element: ");
scanf("%d",&last);
last = arr[n];

}

int j;
for( j = 0 ; j <= n ; j++){

    printf("%d\t", arr[j]);
}

return 0;
}

