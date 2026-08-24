#include<stdio.h>
#include<string.h>

void count();

int main(){


    count();

}

void count(){

char str[100];
printf("enetr a string :");
gets(str);
int x = strlen(str);

int i;
int n = 0;
for(i = 0 ; i < x ; i++ ){

    if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )  {

 n = n + 1;

    }
}

printf("%d", n);

}