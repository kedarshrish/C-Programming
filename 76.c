#include<stdio.h>

void getstring();

int main(){


getstring();


}

void getstring(){

char str[6];

int i;
for(i = 0 ; i < 6 ; i++){

 printf("enter character at index %d", i);
 scanf(" %c",&str[i]);




}

int j;
for(j = 0 ; j < 6 ; j++){


    printf("%c\t",str[j]);
}


}