#include<stdio.h>

int sumofdigit(int n);


int main(){


printf("the sum of digit is %d\n",sumofdigit(48));
   


}

int sumofdigit(int n ){

  
    int sum = 0;
    int idigit;

    while(n > 0 ){

        idigit = n%10;
        sum = sum + idigit;
        n = n/10;
        printf("%d\n",n);


        



    }

    return sum;

}