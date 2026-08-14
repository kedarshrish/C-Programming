
#include<stdio.h>

int main(){

int n;
printf("enter n:");
scanf("%d",&n);
int sum = 0;

for(int i = 1 , j = n ; i<=n && j>= 1 ; i++ , j--){

    sum = sum + 1;
    printf("%d \n",j);  
    //  \\ we have written print inside loop because we want to print all the numbers form n to 0 
}

printf("the sum is %d",sum); 
// \\ we have written print outside because we want to print sum only one as we have already written loop of sum (sum = sum + i) inside the loop 

}



// #include<stdio.h>

// int main(){

// int n;
// printf("enter n :");
// scanf("%d",&n);

// int sum = 0;

// for(int i = 1; i<= n ; i++){


//     sum = sum + i;

// }

// printf("the sum is %d",sum);
// printf("\n");


// for(int i = n; i >=1 ; i--){

//     printf("%d \n ", i);
// }

// return 0;


// }










