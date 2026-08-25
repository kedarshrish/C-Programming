#include<stdio.h>
#include<string.h>



void present();

int main(){

    present();
    



}

void present(){

char str[100];

char c;


printf("enetr string : ");
scanf("%s",str);
int x = strlen(str);
printf("enetr a chacter for above string : ");
scanf(" %c",&c);


int n = 0;
int i;
for(i = 0 ; i <= x ; i++){

    if(str[i] == c){

        printf("chrachter is present ");
        break ; 

    }
    
   if(i == x ){

    printf("charcter is not present ");
    break;

   }
    

}

}