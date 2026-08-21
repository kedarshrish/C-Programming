#include<stdio.h>

int main(){

    int age = 20;
    int age2= 23;

    int *ptr = &age;
    int *ptr2 = &age2;
    

    
     printf("%u\n , %u\n , %u\n", ptr , ptr2, ptr - ptr2); 

     
    ptr2 = &age;
     printf("%u", ptr == ptr2);
    
    return 0; 
}