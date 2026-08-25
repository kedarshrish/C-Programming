#include<stdio.h>
#include<string.h>

int main(){

char str[100];
printf("enter a string : ");
scanf("%s",str);

int n = strlen(str);

int max = 0;
char ch;

int i;
for(i = 0 ; i < n ; i++){
    
    int count = 0;
    
    int j;
    for(j = 0 ; j<n ; j++){

        if(str[i] == str[j]){

            count++ ;
        }
         
        printf(" %c\t",str[i]);
        printf("%d\n",count);
    }
    
    if(count > max ){

        max = count;
        ch = str[i];
    }




}

printf("%c",ch);


}